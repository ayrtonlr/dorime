#ifndef RUN_H
#define RUN_H

#include <QDialog>

namespace Ui {
class Run;
}

class Run : public QDialog
{
    Q_OBJECT

public:
    explicit Run(QWidget *parent = 0);
    ~Run();

private:
    Ui::Run *ui;
};

#endif // RUN_H
