#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QMessageBox>
#include "ui_mainwindow.h"
#include <qbluetoothserviceinfo.h>
#include <qbluetoothsocket.h>
#include <qbluetoothhostinfo.h>
#include <QDebug>

QT_USE_NAMESPACE

class ChatServer;
class ChatClient;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void connectClicked();
    void sendClicked();

    void showMessage(const QString &sender, const QString &message);

    void clientConnected(const QString &name);
    void clientDisconnected(const QString &name);
    void clientDisconnected();
    void connected(const QString &name);

    void newAdapterSelected();
private:
    Ui::MainWindow *ui;
    int adapterFromUserSelection() const;
    int currentAdapterIndex;

    ChatServer *server;
    QList<ChatClient *> clients;
    QList<QBluetoothHostInfo> localAdapters;

    QString localName;

signals:
    void sendMessage(const QString &message);
};

#endif // MAINWINDOW_H
