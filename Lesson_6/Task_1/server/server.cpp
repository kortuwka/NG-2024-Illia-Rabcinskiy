#include "server.h"

Server::Server(){
    if(this->listen(QHostAddress::Any, 2323)){
        qDebug() << "start";
    }else{
        qDebug() << "error";
    }
}

void Server::incomingConnection(qintptr socketDescriptor){
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead, this, &Server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deletelater);
}
