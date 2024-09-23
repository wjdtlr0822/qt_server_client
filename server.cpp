#include "server.h"
#include <QDebug>


void Server::remove_user(std::shared_ptr<Session> session)
{
    users_.erase(std::remove_if(users_.begin(),users_.end(),
                                [session](const std::shared_ptr<Session>& s){
                                    return s == session;
                                }),
                 users_.end()
                 );
}

bool Server::start()
{
    do_accept();
    return true;
}

void Server::do_accept()
{
    acceptor_.async_accept(
        [this](boost::system::error_code ec, boost::asio::ip::tcp::socket socket){
            if(!ec){
                auto session = std::make_shared<Session>(std::move(socket), user_count, this);
                session->start();
                users_.push_back(session);
                user_count++;
            }
            do_accept();
        });
}


void Session::start()
{
    do_read();
}

void Session::do_read()
{
    auto self(shared_from_this());
    socket_.async_read_some(boost::asio::buffer(data_),
                            boost::bind(&Session::handler_read,this,self,
                                        boost::asio::placeholders::error,
                                        boost::asio::placeholders::bytes_transferred
                                        ));
}

void Session::handler_read(std::shared_ptr<Session> self, const boost::system::error_code err, std::size_t length)
{
    if(!err){
        do_echo(length);
    }
    else{
        qDebug() << err.message() << Qt::endl;
        if(server_){
            server_->remove_user(self);
        }
    }
}

void Session::do_echo(std::size_t length)
{
    auto self(shared_from_this());
    boost::asio::async_write(socket_,boost::asio::buffer(data_,length),
                             boost::bind(
                                 &Session::handler_echo,
                                         this,
                                         self,
                                         boost::asio::placeholders::error
                                        )
                            );
}


void Session::handler_echo(std::shared_ptr<Session> self, const boost::system::error_code err)
{
    if(!err){
        do_read();
    }
    else{
        qDebug() << err.message() << Qt::endl;
    }
}


