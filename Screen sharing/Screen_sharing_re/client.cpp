#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    m_socket = new QTcpSocket();

    ui->sb_port->setMaximum(16000);

    connect (ui->b_login, &QPushButton::clicked, this, &Client::login);
    connect (m_socket, &QTcpSocket::connected, this, &Client::connectionEstablished);
    connect (m_socket, &QTcpSocket::readyRead, this, &Client::MessageReceived);
}

Client::~Client()
{
    delete ui;
}

void Client::login()
{
    QString address = ui->e_address->text();
    int port = ui->sb_port->value();

    m_socket->connectToHost(QHostAddress(address),port);
}

void Client::connectionEstablished()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Client::MessageReceived()
{
    static QByteArray buffer;
    static int expectedSize = -1;

    while (m_socket->bytesAvailable() > 0) {
        if (expectedSize == -1) {
            if (m_socket->bytesAvailable() < sizeof(int)) {
                return;
            }
            QDataStream sizeStream(m_socket);
            sizeStream >> expectedSize;
        }

        buffer.append(m_socket->readAll());

        if (buffer.size() >= expectedSize) {
            QImage image;
            image.loadFromData(buffer.left(expectedSize));
            buffer.remove(0, expectedSize);
            expectedSize = -1;

            ui->label_3->clear();
            ui->label_3->setPixmap(QPixmap::fromImage(image));
            ui->label_3->repaint();
        }
    }
}
