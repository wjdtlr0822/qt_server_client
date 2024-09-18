#include "servermain.h"
#include "ui_servermain.h"
#include <boost/asio.hpp>

ServerMain::ServerMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ServerMain)
{
    ui->setupUi(this);
}

ServerMain::~ServerMain()
{
    delete ui;
}
