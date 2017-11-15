#ifndef ALLUSERS_H
#define ALLUSERS_H

#include <QDialog>
#include <QtSql>
#include <QtCore>
#include <QMessageBox>

namespace Ui {
class AllUsers;
}

class AllUsers : public QDialog
{
    Q_OBJECT

public:
    explicit AllUsers(QWidget *parent = 0);
    ~AllUsers();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AllUsers *ui;
    QSqlTableModel *model;
};

#endif // ALLUSERS_H
