#include "client.h"
#include "ui_client.h"

using namespace std;

Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    m_socket = new QTcpSocket();

    ui->sb_port->setMaximum(16000);
    ui->te_chat->setReadOnly(true);

    connect (ui->b_login, &QPushButton::clicked, this, &Client::login);
    connect (ui->b_send, &QPushButton::clicked, this, &Client::sendMessage);
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
QString code_file = "0";
QString corrected_text;
QByteArray ALLMesasges;
QByteArray text;

void Client::sendMessage()
{

    if (code_file == "1058439"){
        ALLMesasges.append(text);
        ui->te_input->setText(ALLMesasges);
        m_socket->write(ui->te_input->toPlainText().toLocal8Bit());
        ui->te_input->clear();
        code_file = "";
    }else{
        m_socket->write(ui->te_input->toPlainText().toLocal8Bit());
        ui->te_input->clear();
    }
}

void Client::MessageReceived()
{
    ui->te_chat->append(QString(m_socket->readAll()));
}

void Client::on_SendFile_clicked()
{
    QFile file_str = QFileDialog::getOpenFileName(this, "Select a file");
    QMessageBox::information(this, "", "Click the send button to send the file");

    file_str.seek(0);
    while(!file_str.atEnd()){
        QByteArray line = file_str.readLine();
    }
    file_str.seek(0);
    text = file_str.readAll();

    qDebug() << corrected_text;
    code_file = "1058439";
    file_str.close();
}
