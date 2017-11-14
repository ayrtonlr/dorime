/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget_3;
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

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName(QStringLiteral("Edit"));
        Edit->resize(400, 300);
        layoutWidget = new QWidget(Edit);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 3, 382, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(28);
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        layoutWidget_2 = new QWidget(Edit);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 234, 382, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        layoutWidget_3 = new QWidget(Edit);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 60, 382, 168));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_2 = new QLineEdit(layoutWidget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        timeEdit = new QTimeEdit(layoutWidget_3);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        verticalLayout->addWidget(timeEdit);

        timeEdit_2 = new QTimeEdit(layoutWidget_3);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));

        verticalLayout->addWidget(timeEdit_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QApplication::translate("Edit", "Dialog", 0));
        label_2->setText(QApplication::translate("Edit", "Edit", 0));
        pushButton->setText(QApplication::translate("Edit", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("Edit", "Save", 0));
        label->setText(QApplication::translate("Edit", "Name", 0));
        label_3->setText(QApplication::translate("Edit", "Password", 0));
        label_4->setText(QApplication::translate("Edit", "Email", 0));
        label_5->setText(QApplication::translate("Edit", "Phone", 0));
        label_6->setText(QApplication::translate("Edit", "Hour1", 0));
        label_7->setText(QApplication::translate("Edit", "Hour2", 0));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
