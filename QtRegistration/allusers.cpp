#include "allusers.h"
#include "ui_allusers.h"

AllUsers::AllUsers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllUsers)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this);
    model -> setTable("people");
    model -> select();
    ui->tableView->setModel(model);
}

AllUsers::~AllUsers()
{
    delete ui;
}

void AllUsers::on_pushButton_2_clicked()
{
    int k = 0 ;
    QModelIndexList selectedList = ui->tableView->selectionModel()->selectedIndexes();


    for (int i = 0; i < selectedList.size(); i++){
        k = selectedList[i].data().toInt();
    }

    qDebug() << k;
    QSqlQuery delet;
    delet.prepare("DELETE FROM `people` WHERE `_rowid_`=:numberid");
    delet.bindValue(":numberid", k);
    if(delet.exec())
        QMessageBox::information(this, "Success",
                                 "User Deleted!");
    else
        QMessageBox::warning(this, "Fail",
                             "Error:<br><b>" + delet.lastError().text());

    qobject_cast<QSqlTableModel *>(ui->tableView->model())->select();

}
