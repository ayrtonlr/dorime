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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AllUsers
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AllUsers)
    {
        if (AllUsers->objectName().isEmpty())
            AllUsers->setObjectName(QStringLiteral("AllUsers"));
        AllUsers->resize(400, 300);
        verticalLayout = new QVBoxLayout(AllUsers);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(AllUsers);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(AllUsers);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(AllUsers);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AllUsers);
        QObject::connect(pushButton, SIGNAL(clicked()), AllUsers, SLOT(reject()));

        QMetaObject::connectSlotsByName(AllUsers);
    } // setupUi

    void retranslateUi(QDialog *AllUsers)
    {
        AllUsers->setWindowTitle(QApplication::translate("AllUsers", "All Users", 0));
        pushButton_2->setText(QApplication::translate("AllUsers", "Delete", 0));
        pushButton->setText(QApplication::translate("AllUsers", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AllUsers: public Ui_AllUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLUSERS_H
