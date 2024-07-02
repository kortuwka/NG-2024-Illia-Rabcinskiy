#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "mainwindow.h"
#include <QApplication>

SecondWindow::SecondWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}
