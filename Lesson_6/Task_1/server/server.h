#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QVector>

class Server : public QTcpServer{
    Q_OBJECT;

public:
    Server();
    QTcpSocket *socket;

private:
    QVector <QTcpSocket*> Sockets;
    QByteArrary Data;
    void SendToClient();

public slots:
    void incomingConnection(qintptr socketDescription);
    void slotReadyRead();
};

#endif // SERVER_H
