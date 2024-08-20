#ifndef SERVAK_H
#define SERVAK_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QVector>
<<<<<<< HEAD
#include <QTextStream>
#include <QFile>
#include <string>
=======
#include <string>
#include <QTextStream>
>>>>>>> d417f13a55ae7ea07011f16397966cd5c9b39ae7

class Servak : public QObject
{
    Q_OBJECT
public:
    explicit Servak(QObject *parent = nullptr);
    ~Servak();
    QString text;
    std::string name_file;

public slots:
    void start(QString host, int port);

private slots:
    void newClient();
    void leftClient();
    void sendToAll(QByteArray message);
    void sendToClientText(QByteArray message);
    void messageFromClient();
signals:

private:
    void showClientsAmount() { qDebug() << "Total clients: " << m_clients.size(); }

    QTcpServer *m_servak = nullptr;
    QVector<QTcpSocket *> m_clients;
};

#endif // SERVAK_H
