#ifndef SERVERMAIN_H
#define SERVERMAIN_H

#include <QMainWindow>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

QT_BEGIN_NAMESPACE
namespace Ui {
class ServerMain;
}
QT_END_NAMESPACE

class ServerMain : public QMainWindow
{
    Q_OBJECT

public:
    ServerMain(QWidget *parent = nullptr);
    ~ServerMain();

    bool ServerStart();
    bool ServerStop();

private slots:
    void on_btStart_clicked();

private:
    Ui::ServerMain *ui;
};
#endif // SERVERMAIN_H
