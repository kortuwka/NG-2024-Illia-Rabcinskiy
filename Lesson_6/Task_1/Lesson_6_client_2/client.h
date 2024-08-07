#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>
#include <string>

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

    void on_SendFile_clicked();

private:
    Ui::Client *ui;
    QTcpSocket *m_socket;
};
#endif // CLIENT_H
