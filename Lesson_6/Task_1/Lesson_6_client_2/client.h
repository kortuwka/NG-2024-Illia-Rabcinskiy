#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>
<<<<<<< HEAD
=======
#include <string>
>>>>>>> d417f13a55ae7ea07011f16397966cd5c9b39ae7

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
<<<<<<< HEAD
    void sendFile();

    void on_pushButton_clicked();
=======

    void on_SendFile_clicked();
>>>>>>> d417f13a55ae7ea07011f16397966cd5c9b39ae7

private:
    Ui::Client *ui;
    QTcpSocket *m_socket;
};
#endif // CLIENT_H
