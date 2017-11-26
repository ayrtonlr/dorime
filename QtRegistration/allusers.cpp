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
    int k = 0;
    int ro = 0;
    QModelIndexList selectedList = ui->tableView->selectionModel()->selectedIndexes();

    for (int i = 0; i < selectedList.size(); i++){
        k = selectedList[i].data().toInt();
        ro = selectedList[i].column();
    }

    QSqlQuery delet;
    delet.prepare("DELETE FROM `people` WHERE `_rowid_`=:numberid");
    delet.bindValue(":numberid", k);
    if(delet.exec())
    {
        if(ro == 0 && k != 0)
        {
            QMessageBox::information(this, "Success",
                                 "User Deleted!");
        }
        else
        {
            QMessageBox::warning(this, "Error",
                                 "User not deleted, please select ID!");
        }
    }
    else
    {
        QMessageBox::warning(this, "Error",
                             "Error:<br><b>" + delet.lastError().text());
        this->close();
    }

    qobject_cast<QSqlTableModel *>(ui->tableView->model())->select();

}
