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


void Servak::sendToAll(QByteArray message)
{
    int val;
    std::string message_check = message.toStdString();
    qDebug() << message_check;
    val = message_check.find("#*");
    if(val == 0){
        QByteArray under = text.toUtf8();
        sendToClientText(under);
    }else{
        val = message_check.find("#$");
        if(val == 0){
            qDebug() << message_check;
            QString corrected = message;
            std::string textplusname = corrected.toStdString();

            name_file = textplusname.substr(0, textplusname.find("/n"));
            name_file.replace(name_file.find("#$"), 2, "");

            textplusname.replace(textplusname.find("#$"), 2 ,"");
            std::string message_check_corrected = textplusname.erase(0, textplusname.find_first_of("/n"));
            qDebug() << message_check_corrected;
            message_check_corrected.replace(message_check_corrected.find("/n"), 2, "");

            text = QString::fromStdString(message_check_corrected);

            message = QString::fromStdString(name_file).toUtf8();

            for (QTcpSocket *client : m_clients)
                client->write("Server: file " + message);
        }else{
            for (QTcpSocket *client : m_clients)
                client->write(message);
        }
    }
}

void Servak::sendToClientText(QByteArray message)
{
    for(QTcpSocket *client : m_clients){
        client->write(message);
        break;
    }
    qDebug() << "ready";
}
void Servak::messageFromClient()
{
    QTcpSocket *socket = (QTcpSocket *)sender();
    sendToAll(socket->readAll());
}
