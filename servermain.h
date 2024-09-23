#ifndef SERVERMAIN_H
#define SERVERMAIN_H

#include <QMainWindow>
#include <server.h>

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
    void on_btCancel_clicked();

private:
    Ui::ServerMain *ui;
    boost::asio::io_context io_context_;
    Server server_;
};
#endif // SERVERMAIN_H
