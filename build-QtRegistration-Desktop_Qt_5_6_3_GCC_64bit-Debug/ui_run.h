/********************************************************************************
** Form generated from reading UI file 'run.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Run
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *portSpinBox;
    QPushButton *startWebServerPushButton;
    QPushButton *quitAppPushButton;
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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Run);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        portSpinBox = new QSpinBox(Run);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));

        horizontalLayout_2->addWidget(portSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        startWebServerPushButton = new QPushButton(Run);
        startWebServerPushButton->setObjectName(QStringLiteral("startWebServerPushButton"));

        verticalLayout->addWidget(startWebServerPushButton);

        quitAppPushButton = new QPushButton(Run);
        quitAppPushButton->setObjectName(QStringLiteral("quitAppPushButton"));

        verticalLayout->addWidget(quitAppPushButton);

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
        QObject::connect(pushButton, SIGNAL(clicked()), Run, SLOT(reject()));

        QMetaObject::connectSlotsByName(Run);
    } // setupUi

    void retranslateUi(QDialog *Run)
    {
        Run->setWindowTitle(QApplication::translate("Run", "Run Program", Q_NULLPTR));
        label->setText(QApplication::translate("Run", "Port", Q_NULLPTR));
        startWebServerPushButton->setText(QApplication::translate("Run", "Iniciar Servidor", Q_NULLPTR));
        quitAppPushButton->setText(QApplication::translate("Run", "Close", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Run", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Run: public Ui_Run {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUN_H
