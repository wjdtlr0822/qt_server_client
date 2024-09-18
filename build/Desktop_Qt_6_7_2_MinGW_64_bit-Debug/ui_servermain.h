/********************************************************************************
** Form generated from reading UI file 'servermain.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERMAIN_H
#define UI_SERVERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerMain
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ServerMain)
    {
        if (ServerMain->objectName().isEmpty())
            ServerMain->setObjectName("ServerMain");
        ServerMain->resize(800, 600);
        centralwidget = new QWidget(ServerMain);
        centralwidget->setObjectName("centralwidget");
        ServerMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ServerMain);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ServerMain->setMenuBar(menubar);
        statusbar = new QStatusBar(ServerMain);
        statusbar->setObjectName("statusbar");
        ServerMain->setStatusBar(statusbar);

        retranslateUi(ServerMain);

        QMetaObject::connectSlotsByName(ServerMain);
    } // setupUi

    void retranslateUi(QMainWindow *ServerMain)
    {
        ServerMain->setWindowTitle(QCoreApplication::translate("ServerMain", "ServerMain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerMain: public Ui_ServerMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERMAIN_H
