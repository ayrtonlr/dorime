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
    //db.setPassword("A");

    if(db.open())
    {
       qDebug() << "Sucesso ao abrir" ;
    }
    else
    {
        qDebug() << db.lastError().text();
        qApp -> quit();
    }


    QSqlQuery query("SELECT * FROM people");

    if(query.exec())
    {
        while (query.next())
        {
           qDebug() << query.value(0).toString() << " -- " << query.value(1).toString();
        }
    }
    else
    {
        qDebug() <<  "Erro: " << db.lastError().text();
    }

    /*
    int idName = query.record().indexOf("name");
    while (query.next())
    {
       QString name = query.value(idName).toString();
       qDebug() << name;
    }
    */

    MainWindow w;
    w.show();

    return a.exec();
}
