#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>

void replaceKeyword(QString& line, const QString& keyword) {
    int val = line.indexOf(keyword);
    if (val != -1) {
        line.replace(val, keyword.length(), "----");
    }
}

int MainWindow::on_pushButton_clicked()
{
    QString file_str = QFileDialog::getOpenFileName(this, "Select a file");

    if (file_str.isEmpty()) {
        qDebug() << "No file selected:";
    }

    QFile file(file_str);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file:" << file.errorString();
    }

    QTextStream in(&file);
    QStringList keywords;

    while (!in.atEnd()) {
        QString keyword = in.readLine().trimmed();
        if (!keyword.isEmpty()) {
            keywords.append(keyword);
        }
    }

    file.close();

    QString line = ui->lineEdit->text();

    for (const QString& keyword : keywords) {
        replaceKeyword(line, keyword);
    }

    ui->lineEdit->setText(line);
    return 0;
}
