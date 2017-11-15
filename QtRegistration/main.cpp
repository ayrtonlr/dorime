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

    //showing data
    /*
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

    //adding data

    /*
    QString squery = "INSERT INTO people (ids,name)"
                     "VALUES (NULL,:first)";
    QSqlQuery qry;



    qry.prepare(squery);


    qry.bindValue(":first","ads");
    qry.exec();


    //qry.bindValue(":email","rt@pedro");
   // qry.bindValue(":password","45lok7");
   // qry.bindValue(":hour1","1700");
   // qry.bindValue(":hour2","1800");

    if(qry.exec())
    {
        qDebug() <<  "Query inserted ";
    }
    else
    {
        qDebug() <<  "Erro: " << db.lastError().text();
    }
    */

    MainWindow w;
    w.show();

    return a.exec();
}
