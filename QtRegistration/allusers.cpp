#include "allusers.h"
#include "ui_allusers.h"

AllUsers::AllUsers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllUsers)
{
    ui->setupUi(this);
}

AllUsers::~AllUsers()
{
    delete ui;
}
