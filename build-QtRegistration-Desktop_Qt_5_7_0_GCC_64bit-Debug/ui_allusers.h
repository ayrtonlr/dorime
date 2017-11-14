/********************************************************************************
** Form generated from reading UI file 'allusers.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLUSERS_H
#define UI_ALLUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AllUsers
{
public:

    void setupUi(QDialog *AllUsers)
    {
        if (AllUsers->objectName().isEmpty())
            AllUsers->setObjectName(QStringLiteral("AllUsers"));
        AllUsers->resize(400, 300);

        retranslateUi(AllUsers);

        QMetaObject::connectSlotsByName(AllUsers);
    } // setupUi

    void retranslateUi(QDialog *AllUsers)
    {
        AllUsers->setWindowTitle(QApplication::translate("AllUsers", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class AllUsers: public Ui_AllUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLUSERS_H
