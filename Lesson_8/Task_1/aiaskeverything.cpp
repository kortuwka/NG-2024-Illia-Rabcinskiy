#include "aiaskeverything.h"
#include "ui_aiaskeverything.h"

AIAskEverything::AIAskEverything(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AIAskEverything)
{
    ui->setupUi(this);

    m_manager = new QNetworkAccessManager();

    ui->te_answer->setReadOnly(true);

    connect (ui->b_ask, &QPushButton::clicked, this, &AIAskEverything::askAi);
    connect (m_manager, &QNetworkAccessManager::finished, this, &AIAskEverything::newAnswer);
}

int manytrue = 0;

AIAskEverything::~AIAskEverything()
{
    delete ui;
}

QNetworkReply *reply;
QByteArray Question;
QString Check_for_characters;
QString Balls_corrected;
QString Numberoftasks_String;
std::string Check_for_characters_corrected;
int Balls = 0;
int val;
int Numberoftasks = 0;

void AIAskEverything::askAi()
{
    QString text_from_question = ui->te_question->toPlainText();
    std::string text_from_question_corrected = text_from_question.toLocal8Bit().constData();

    QNetworkRequest request(QUrl("http://127.0.0.1:11434/api/generate"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QString answerstr = ui->te_answer->toPlainText();

    Question = answerstr.toUtf8();

    QByteArray examination = "write if the answer is correct, if yes then answer true without unnecessary text, if no then answer false without unnecessary text, here is the question: " + Question + " here is the answer: ";
    QString text = examination + ui->te_question->toPlainText();
    ui->te_answer->setText("");

    QJsonObject json;
    json["model"] = "llama3.1:8b";
    json["prompt"] = text;
    json["stream"] = false;

    reply = m_manager->post(request, QJsonDocument(json).toJson());
}

void AIAskEverything::newAnswer (QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray textReply = reply->readAll();
        qDebug() << textReply;
        QString text = QJsonDocument::fromJson(textReply).object().value("response").toString();
        ui->te_answer->setText(text);
    } else {
        qDebug() << "Error: " << reply->errorString();
    }
}

void AIAskEverything::on_easy_clicked()
{
    QNetworkRequest request(QUrl("http://127.0.0.1:11434/api/generate"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["model"] = "llama3.1:8b";
    json["prompt"] = "Write me a math problem for grades 1 don't write a reply";
    json["stream"] = false;

    reply = m_manager->post(request, QJsonDocument(json).toJson());
}


void AIAskEverything::on_normal_clicked()
{
    QNetworkRequest request(QUrl("http://127.0.0.1:11434/api/generate"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["model"] = "llama3.1:8b";
    json["prompt"] = "Write me a math problem for grades 9 don't write a reply";
    json["stream"] = false;

    reply = m_manager->post(request, QJsonDocument(json).toJson());
}


void AIAskEverything::on_difficult_clicked()
{
    QNetworkRequest request(QUrl("http://127.0.0.1:11434/api/generate"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["model"] = "llama3.1:8b";
    json["prompt"] = "Write me a math problem for a student don't write a reply";
    json["stream"] = false;

    reply = m_manager->post(request, QJsonDocument(json).toJson());

}


void AIAskEverything::on_Check_clicked()
{
    Check_for_characters = ui->te_answer->toPlainText();
    Check_for_characters_corrected = Check_for_characters.toLocal8Bit().constData();

    qDebug() << Check_for_characters;
    qDebug() << Check_for_characters_corrected;

    val = Check_for_characters_corrected.find("true");
    if(val == -1){
        val = Check_for_characters_corrected.find("True");
    }
    if(Numberoftasks == 10){
        Numberoftasks = 0;
        ui->Balls->setText(Balls_corrected);
    }else{
        Numberoftasks = Numberoftasks + 1;
        if(val == 0){
            Balls = Balls + 1;
            qDebug() << Balls;
            Balls_corrected = QString::number(Balls) + "/10";
        }else {
            if(Balls != 0){
                qDebug() << Balls;
                Balls_corrected = "Balls: " + QString::number(Balls) + "/10";
            }else{
                Balls_corrected = "Balls: " + QString::number(Balls) + "/10";
            }
        }
        Numberoftasks_String = "Task: " + QString::number(Numberoftasks) + "/10";
        ui->Balls->setText(Numberoftasks_String);
    }
}

