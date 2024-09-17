#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Client)
    , isSending(false)
{
    ui->setupUi(this);
    m_socket = new QTcpSocket();
    m_timer = new QTimer(this);

    ui->sb_port->setMaximum(16000);

    connect(ui->b_login, &QPushButton::clicked, this, &Client::login);
    connect(ui->b_send, &QPushButton::clicked, this, &Client::toggleSendMessage);
    connect(m_socket, &QTcpSocket::connected, this, &Client::connectionEstablished);
    connect(m_socket, &QTcpSocket::readyRead, this, &Client::MessageReceived);
    connect(m_timer, &QTimer::timeout, this, &Client::sendMessage);
}

Client::~Client()
{
    delete ui;
}

void Client::login()
{
    QString address = ui->e_address->text();
    int port = ui->sb_port->value();

    m_socket->connectToHost(QHostAddress(address), port);
}

void Client::connectionEstablished()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Client::toggleSendMessage()
{
    if (isSending) {
        m_timer->stop();
        ui->b_send->setText("Show");
    } else {
        m_timer->start(200);
        ui->b_send->setText("Stop");
    }
    isSending = !isSending;
}

void Client::sendMessage()
{
    if (!isSending) return;

    ui->label->clear();
    QScreen *screen = QApplication::primaryScreen();
    if (!screen) {
        qDebug() << "Не удалось получить доступ к экрану!";
        return;
    }

    QPixmap screenshot = screen->grabWindow(0);

    QSize PicSize(1200, 1000);
    screenshot = screenshot.scaled(PicSize, Qt::KeepAspectRatio);

    QString fileName = "screenshot.png";
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        qDebug() << "Не удалось открыть файл для записи!";
        return;
    }

    //screenshot.save(&file, "PNG");
    qDebug() << "Скриншот сохранен в файл" << fileName;
    QImage image = screenshot.toImage();

    QByteArray screen_Data;
    QBuffer buffer(&screen_Data);
    image.save(&buffer, "png");

    int bufferSize = screen_Data.size();
    QByteArray sizeData;
    QDataStream sizeStream(&sizeData, QIODevice::WriteOnly);
    sizeStream << bufferSize;
    m_socket->write(sizeData);

    m_socket->write(screen_Data);
    m_socket->flush();
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
