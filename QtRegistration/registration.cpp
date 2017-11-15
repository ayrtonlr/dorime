#include "registration.h"
#include "ui_registration.h"

Registration::Registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_pushButton_2_clicked()
{
    if(ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3->text().isEmpty()
                || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty()
                || ui->lineEdit_6->text().isEmpty() || ui->lineEdit_7->text().isEmpty())
            QMessageBox::warning(this, "Attention", "Invalid data!");
    else
    {
            QSqlQuery qry;
    #define BIND_WITH_INDEX
    #ifdef BIND_WITH_INDEX
            qry.prepare("INSERT INTO people values(NULL, :nome, :password, :email, :phone, :hour1, :hour2)");
            qry.bindValue(":nome", ui->lineEdit_2->text());
            qry.bindValue(":password", ui->lineEdit_3->text());
            qry.bindValue(":email", ui->lineEdit_4->text());
            qry.bindValue(":phone", ui->lineEdit_5->text());
            qry.bindValue(":hour1", ui->lineEdit_6->text());
            qry.bindValue(":hour2", ui->lineEdit_7->text());

    #endif
           if(qry.exec())
               QMessageBox::information(this, "Success",
                                        "New user registered!");
           else
               QMessageBox::warning(this, "Fail",
                                    "Error:<br><b>" + qry.lastError().text());
     }

}
