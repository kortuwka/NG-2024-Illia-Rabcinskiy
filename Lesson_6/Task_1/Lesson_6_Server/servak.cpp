#include "servak.h"

Servak::Servak(QObject *parent)
    : QObject{parent}
{
    m_servak = new QTcpServer();

    connect (m_servak, &QTcpServer::newConnection, this, &Servak::newClient);
}

Servak::~Servak()
{
    if (m_servak->isListening()) {
        qDebug() << "Closing server...";
        m_servak->close();
    }
    delete m_servak;
}

void Servak::start(QString host, int port)
{
    bool ok = m_servak->listen(QHostAddress(host), port);
    if (ok) {
        qDebug() << "We are online!";
    } else {
        qDebug() << "Error creating connection: " << m_servak->errorString();
    }
}

void Servak::newClient()
{
    QTcpSocket *client = m_servak->nextPendingConnection();
    qDebug() << "Client " << client->localAddress().toString();

    connect (client, &QTcpSocket::disconnected, this, &Servak::leftClient);
    connect (client, &QTcpSocket::readyRead, this, &Servak::messageFromClient);

    m_clients.append(client);
    showClientsAmount();
}

void Servak::leftClient()
{
    QTcpSocket *socket = (QTcpSocket *)sender();

    qDebug() << "Client " << socket->localAddress().toString() << " has been left";
    m_clients.removeOne(socket);
    showClientsAmount();
}
std::string file;
QByteArray file_corrected;

void Servak::sendToAll(QByteArray message)
{
    qDebug() << message;
    file = message;
    qDebug() << file;
    int val = file.find("1058439");
    qDebug() << val;
    file_corrected.append(file.replace(file.find("1058439"), 7, ""));
    qDebug() << file_corrected;

    if(val == 0){
        for (QTcpSocket *client : m_clients)
            client->write(file_corrected);
        for (QTcpSocket *client : m_clients)
            client->write("Server: File");
    }else{
        for (QTcpSocket *client : m_clients)
            client->write(message);
    }
}

void Servak::messageFromClient()
{
    QTcpSocket *socket = (QTcpSocket *)sender();
    sendToAll(socket->readAll());
}
