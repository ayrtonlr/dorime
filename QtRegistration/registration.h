#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include <QtSql>
#include <QtCore>
#include <QMessageBox>

namespace Ui {
class Registration;
}

class Registration : public QDialog
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = 0);
    ~Registration();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Registration *ui;
};

#endif // REGISTRATION_H
