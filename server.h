#ifndef SERVER_H
#define SERVER_H

#include <QString>

#include <boost/asio.hpp>
#include <boost/bind.hpp>

class Server;

class Session : public std::enable_shared_from_this<Session>{
public:
    Session(boost::asio::ip::tcp::socket socket, int id, Server* server) :  socket_(std::move(socket)), user_id_(id), server_(server) {}
    void start();

private:
    void do_read();
    void do_echo(std::size_t length);
    void handler_read(std::shared_ptr<Session> self, const boost::system::error_code err,std::size_t length);
    void handler_echo(std::shared_ptr<Session> self, const boost::system::error_code err);

    boost::asio::ip::tcp::socket socket_;
    int user_id_;
    char data_[1024];
    Server* server_;
};

class Server
{
public:
    Server(boost::asio::io_context& io_context)
        :acceptor_(io_context, boost::asio::ip::tcp::endpoint(boost::asio::ip::address::from_string("127.0.0.1"), 5555)),
         user_count(1) {}

    void remove_user(std::shared_ptr<Session> session);

    bool start();
    void do_accept();

private:
    boost::asio::ip::tcp::acceptor acceptor_;
    std::vector<std::shared_ptr<Session>> users_;
    int user_count;
};

#endif // SERVER_H
