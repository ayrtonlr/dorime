#ifndef ALLUSERS_H
#define ALLUSERS_H

#include <QDialog>

namespace Ui {
class AllUsers;
}

class AllUsers : public QDialog
{
    Q_OBJECT

public:
    explicit AllUsers(QWidget *parent = 0);
    ~AllUsers();

private:
    Ui::AllUsers *ui;
};

#endif // ALLUSERS_H
