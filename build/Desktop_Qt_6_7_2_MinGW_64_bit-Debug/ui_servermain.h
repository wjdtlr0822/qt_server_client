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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerMain
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *Tedit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *btStart;
    QPushButton *btCancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ServerMain)
    {
        if (ServerMain->objectName().isEmpty())
            ServerMain->setObjectName("ServerMain");
        ServerMain->resize(800, 600);
        centralwidget = new QWidget(ServerMain);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Tedit = new QTextEdit(centralwidget);
        Tedit->setObjectName("Tedit");

        horizontalLayout_2->addWidget(Tedit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btStart = new QPushButton(centralwidget);
        btStart->setObjectName("btStart");

        verticalLayout->addWidget(btStart);

        btCancel = new QPushButton(centralwidget);
        btCancel->setObjectName("btCancel");

        verticalLayout->addWidget(btCancel);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

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
        btStart->setText(QCoreApplication::translate("ServerMain", "Start", nullptr));
        btCancel->setText(QCoreApplication::translate("ServerMain", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerMain: public Ui_ServerMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERMAIN_H
