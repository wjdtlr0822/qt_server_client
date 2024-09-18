QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32: {
    INCLUDEPATH += "D:/boost_1_86_0"
    LIBS += -L"D:/boost_1_86_0/stage/lib"
    LIBS += -lboost_thread-vc143-mt-x64-1_86
    LIBS += -lboost_system-vc143-mt-x64-1_86
    LIBS += -lws2_32
}

macx::{
    INCLUDEPATH += D:\0.취업준비\c++공부\boost_1_86_0\boost
}

SOURCES += \
    main.cpp \
    servermain.cpp

HEADERS += \
    servermain.h

FORMS += \
    servermain.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
