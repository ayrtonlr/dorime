#-------------------------------------------------
#
# Project created by QtCreator 2017-11-14T15:05:16
#
#-------------------------------------------------

QT       += core gui network sql bluetooth widgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtRegistration
TEMPLATE = app



SOURCES += main.cpp\
        mainwindow.cpp \
    registration.cpp \
    allusers.cpp \
    helloworldcontroller.cpp \
    chat.cpp \
    chatclient.cpp \
    chatserver.cpp

HEADERS  += mainwindow.h \
    registration.h \
    allusers.h \
    helloworldcontroller.h \
    chat.h \
    chatclient.h \
    chatserver.h

FORMS    += mainwindow.ui \
    registration.ui \
    allusers.ui \
    chat.ui

RESOURCES +=

DISTFILES +=

include(../QtWebApp/QtWebApp/httpserver/httpserver.pri)
OTHER_FILES += etc/webapp1.ini

target.path = $$[QT_INSTALL_EXAMPLES]/bluetooth/btchat
INSTALLS += target
