#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QFile>
#include <QPixmap>
#include <QScreen>
#include <QBuffer>
#include <QFileInfo>
#include <QByteArray>
#include <QApplication>
#include <QString>
#include <QFileDialog>
#include <QDesktopServices>
#include <Windows.h>
#include <QGuiApplication>
#include <QDebug>
#include <QFileInfo>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class Client;
}
QT_END_NAMESPACE

class Client : public QMainWindow
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void login();
    void connectionEstablished();
    void sendMessage();
    void MessageReceived();
    void toggleSendMessage();

private:
    Ui::Client *ui;
    QTcpSocket *m_socket;
    QTimer *m_timer;
    bool isSending;
};
#endif // CLIENT_H
