#include "servermain.h"
#include "ui_servermain.h"

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

bool ServerMain::ServerStart()
{
    return true;
}

bool ServerMain::ServerStop()
{
    return true;
}


void ServerMain::on_btStart_clicked()
{
    if(ui->btStart->text() == "Start")
    {
        ui->Tedit->append("Server Start....");
        bool bServerStart = ServerStart();

        if(!bServerStart)
        {
            ui->Tedit->append("Server Start Success");
            ui->btStart->setText("Stop");
        }
        else
        {
            ui->Tedit->append("Server Start fail");
        }
    }
    else
    {
        ui->Tedit->append("Server Stop....");
        bool bServerStop = ServerStop();
        if(bServerStop)
        {
            ui->Tedit->append("Server Stop Success");
            ui->btStart->setText("Start");
        }
        else
        {
            ui->Tedit->append("Server Stop Fail");
        }
    }
}

