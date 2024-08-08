#ifndef AIASKEVERYTHING_H
#define AIASKEVERYTHING_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <QDebug>
#include <string>
#include <windows.h>



QT_BEGIN_NAMESPACE
namespace Ui {
class AIAskEverything;
}
QT_END_NAMESPACE

class AIAskEverything : public QMainWindow
{
    Q_OBJECT

public:
    QNetworkReply *reply;
    QByteArray Question;
    QString Check_for_characters;
    QString Balls_corrected;
    QString Numberoftasks_String;
    std::string Check_for_characters_corrected;
    int Balls = 0;
    int val;
    int Numberoftasks = 0;
    int manytrue = 0;
    int start = 0;

    AIAskEverything(QWidget *parent = nullptr);
    ~AIAskEverything();

private slots:
    void askAi();
    void newAnswer(QNetworkReply *reply);

    void on_Check_clicked();

private:
    Ui::AIAskEverything *ui;
    QNetworkAccessManager *m_manager;
};
#endif // AIASKEVERYTHING_H
