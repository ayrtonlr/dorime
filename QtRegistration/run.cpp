#include "run.h"
#include "ui_run.h"

Run::Run(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Run)
{
    ui->setupUi(this);
    setFixedSize(geometry().width(), geometry().height());
}

Run::~Run()
{
    delete ui;
}
