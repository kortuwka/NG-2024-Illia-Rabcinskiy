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
    AIAskEverything(QWidget *parent = nullptr);
    ~AIAskEverything();

private slots:
    void askAi();
    void newAnswer(QNetworkReply *reply);

    void on_easy_clicked();

    void on_normal_clicked();

    void on_difficult_clicked();

    void on_Check_clicked();

private:
    Ui::AIAskEverything *ui;
    QNetworkAccessManager *m_manager;
};
#endif // AIASKEVERYTHING_H
