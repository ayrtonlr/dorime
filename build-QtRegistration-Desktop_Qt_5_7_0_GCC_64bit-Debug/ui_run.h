/********************************************************************************
** Form generated from reading UI file 'run.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUN_H
#define UI_RUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Run
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Run)
    {
        if (Run->objectName().isEmpty())
            Run->setObjectName(QStringLiteral("Run"));
        Run->resize(400, 300);
        verticalLayout = new QVBoxLayout(Run);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Run);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(48);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Run);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Run);

        QMetaObject::connectSlotsByName(Run);
    } // setupUi

    void retranslateUi(QDialog *Run)
    {
        Run->setWindowTitle(QApplication::translate("Run", "Dialog", 0));
        label->setText(QApplication::translate("Run", "Running...", 0));
        pushButton->setText(QApplication::translate("Run", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class Run: public Ui_Run {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUN_H
