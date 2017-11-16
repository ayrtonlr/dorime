#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
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
