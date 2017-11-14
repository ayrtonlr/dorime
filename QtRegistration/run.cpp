#include "run.h"
#include "ui_run.h"

Run::Run(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Run)
{
    ui->setupUi(this);
}

Run::~Run()
{
    delete ui;
}
