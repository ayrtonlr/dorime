/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *chat;
    QGroupBox *localAdapterBox;
    QRadioButton *firstAdapter;
    QRadioButton *secondAdapter;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 319);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        chat = new QTextEdit(centralWidget);
        chat->setObjectName(QStringLiteral("chat"));

        gridLayout->addWidget(chat, 3, 0, 1, 1);

        localAdapterBox = new QGroupBox(centralWidget);
        localAdapterBox->setObjectName(QStringLiteral("localAdapterBox"));
        firstAdapter = new QRadioButton(localAdapterBox);
        firstAdapter->setObjectName(QStringLiteral("firstAdapter"));
        firstAdapter->setGeometry(QRect(50, 10, 117, 22));
        secondAdapter = new QRadioButton(localAdapterBox);
        secondAdapter->setObjectName(QStringLiteral("secondAdapter"));
        secondAdapter->setGeometry(QRect(190, 10, 117, 22));

        gridLayout->addWidget(localAdapterBox, 0, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Dorime", Q_NULLPTR));
        localAdapterBox->setTitle(QApplication::translate("MainWindow", "Local Bluetooth Adapter", Q_NULLPTR));
        firstAdapter->setText(QApplication::translate("MainWindow", "Default", Q_NULLPTR));
        secondAdapter->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Register", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "All Users", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
