#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <QDebug>
#include <QSettings>
#include "httplistener.h"
#include "httprequesthandler.h"
#include <QFile>
#include <QDir>
#include <QString>
#include "helloworldcontroller.h"

using namespace stefanfrings;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Load the configuration file
    QSettings* listenerSettings= new QSettings("../QtRegistration/etc/webapp1.ini",QSettings::IniFormat,&a);
    listenerSettings->beginGroup("listener");

    // Start the HTTP server
    new HttpListener(listenerSettings,new HelloWorldController(&a),&a);

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("/home/ayrton/dorime/QtRegistration/users.db");
    db.setUserName("root");

    if(db.open())
    {
        qDebug() << "Opened" ;
    }
    else
    {
        qDebug() <<  "Error: " << db.lastError().text();
        qApp -> quit();
    }

    MainWindow w;
    w.show();

    return a.exec();
}
