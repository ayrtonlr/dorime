#-------------------------------------------------
#
# Project created by QtCreator 2017-11-14T15:05:16
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtRegistration
TEMPLATE = app



SOURCES += main.cpp\
        mainwindow.cpp \
    registration.cpp \
    run.cpp \
    allusers.cpp

HEADERS  += mainwindow.h \
    registration.h \
    run.h \
    allusers.h

FORMS    += mainwindow.ui \
    registration.ui \
    run.ui \
    allusers.ui
