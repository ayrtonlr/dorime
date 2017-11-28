#include "registration.h"
#include "ui_registration.h"

Registration::Registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
    setFixedSize(geometry().width(), geometry().height());
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_pushButton_2_clicked()
{
    if(ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3->text().isEmpty()
                || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty()
                || ui->timeEdit_2->text().isEmpty() || ui->timeEdit->text().isEmpty())
    {
            QMessageBox::warning(this, "Attention", "Invalid data!");
    }

    else
    {

            QSqlQuery query;
            query.prepare("SELECT email FROM people WHERE email = (:email)");
            query.bindValue(":email", ui->lineEdit_4->text());

            if (query.exec())
            {
               if (query.next())
               {
                  QMessageBox::warning(this, "Attention", "Email already registered!");
                  return;
               }
            }

            QSqlQuery query2;
            query2.prepare("SELECT phone FROM people WHERE phone = (:phone)");
            query2.bindValue(":phone", ui->lineEdit_5->text());

            if (query2.exec())
            {
               if (query2.next())
               {
                  QMessageBox::warning(this, "Attention", "Phone already registered!");
                  return;
               }
            }

            QSqlQuery qry;
            qry.prepare("INSERT INTO people values(NULL, :name, :intheroom, :email, :phone, :hour1, :hour2)");
            qry.bindValue(":name", ui->lineEdit_2->text());
            qry.bindValue(":intheroom", ui->lineEdit_3->text());
            qry.bindValue(":email", ui->lineEdit_4->text());
            qry.bindValue(":phone", ui->lineEdit_5->text());
            qry.bindValue(":hour1", ui->timeEdit_2->text());
            qry.bindValue(":hour2", ui->timeEdit->text());


            if(qry.exec())
            {
               QMessageBox::information(this, "Success",
                                        "New user registered!");
               this->close();
            }
            else
            {
               QMessageBox::warning(this, "Error",
                                    "Error:<br><b>" + qry.lastError().text());
               this->close();
            }
     }

}
