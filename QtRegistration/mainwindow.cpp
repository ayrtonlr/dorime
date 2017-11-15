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
    //coding the slot
    //connect(ui->buttonClear, SIGNAL(clicked(bool)), ui->textEdit, SLOT(clear()));
    //fixed dimensions
    setFixedSize(geometry().width(), geometry().height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::on_buttonOK_clicked()
{
    //get text written in lineName
    QString name = ui->lineName->text();
    //get current hour
    int h = QTime::currentTime().hour();
    //if nothing in lineName, return
    if(name.isEmpty()) return;
    //according to hour, message something
    if(h <= 11) QMessageBox::about(this,"Hello","Hello" + name + ", is morning");
    else if(h >= 12 && h <= 17) QMessageBox::about(this,"Hello","Hello" + name + ", is afternoon");
    else if(h > 17) QMessageBox::about(this,"Hello","Hello" + name + ", is night");
}

void MainWindow::on_pushButton_2_clicked()
{
    int resp = QMessageBox::warning(this, "Alerta", "Voce deseja fechar a janela?", QMessageBox::Ok,
                         QMessageBox::Cancel);
    if(resp == QMessageBox::Ok)
    {
        qApp->quit();
    }
}

void MainWindow::on_pushButton_clicked()
{
    int resp = QMessageBox::critical(this, "Alerta", "Voce deseja fechar a janela?", "Sair",
                         "Ok");
    if(resp == 0)
    {
        qApp->quit();
    }
}
*/

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
