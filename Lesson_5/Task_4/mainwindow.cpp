#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cstdlib>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

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
int space = 0;
void MainWindow::on_pushButton_clicked()
{
    QString line_0 = ui->lineEdit->text();
    string line = line_0.toLocal8Bit().constData();
    int short val = line.find("fuck");
    if(val == -1){
    }else{
        line.replace(line.find("fuck"), 4, "----");
    }
    int short val_2 = line.find("dick");
    if(val_2 == -1){
    }else{
        line.replace(line.find("dick"), 4, "----");
    }
    QString line_1 = QString::fromStdString(line);
    ui->lineEdit->setText(line_1);

}

