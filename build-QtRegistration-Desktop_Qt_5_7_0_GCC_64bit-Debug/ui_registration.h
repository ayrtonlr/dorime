/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QStringLiteral("Registration"));
        Registration->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(Registration);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(Registration);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(28);
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(Registration);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(Registration);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(Registration);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(Registration);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(Registration);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(Registration);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_2 = new QLineEdit(Registration);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(Registration);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(Registration);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(Registration);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        timeEdit = new QTimeEdit(Registration);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        verticalLayout->addWidget(timeEdit);

        timeEdit_2 = new QTimeEdit(Registration);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));

        verticalLayout->addWidget(timeEdit_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(Registration);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Registration);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(Registration);
        QObject::connect(pushButton, SIGNAL(clicked()), Registration, SLOT(reject()));

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QDialog *Registration)
    {
        Registration->setWindowTitle(QApplication::translate("Registration", "Dialog", 0));
        label_2->setText(QApplication::translate("Registration", "Register", 0));
        label->setText(QApplication::translate("Registration", "Name", 0));
        label_3->setText(QApplication::translate("Registration", "Password", 0));
        label_4->setText(QApplication::translate("Registration", "Email", 0));
        label_5->setText(QApplication::translate("Registration", "Phone", 0));
        label_6->setText(QApplication::translate("Registration", "Hour1", 0));
        label_7->setText(QApplication::translate("Registration", "Hour2", 0));
        pushButton->setText(QApplication::translate("Registration", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("Registration", "New User", 0));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
