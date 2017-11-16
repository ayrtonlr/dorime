#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registration.h"
#include "run.h"
#include "allusers.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(geometry().width(), geometry().height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Registration setRegistration;
    setRegistration.setModal(true);
    setRegistration.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    AllUsers setAllUsers;
    setAllUsers.setModal(true);
    setAllUsers.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    Run setRun;
    setRun.setModal(true);
    setRun.exec();
}
