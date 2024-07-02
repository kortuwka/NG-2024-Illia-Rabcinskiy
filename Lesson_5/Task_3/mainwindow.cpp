#include "mainwindow.h"
#include "./ui_mainwindow.h"

double firstnum;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_plusminus,SIGNAL(clicked()),this,SLOT(actions()));
    connect(ui->pushButton_procent,SIGNAL(clicked()),this,SLOT(actions()));
    connect(ui->pushButton_podil,SIGNAL(clicked()),this,SLOT(sign()));
    connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(sign()));
    connect(ui->pushButton_plus,SIGNAL(clicked()),this,SLOT(sign()));
    connect(ui->pushButton_pomno,SIGNAL(clicked()),this,SLOT(sign()));

    ui->pushButton_podil->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_pomno->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::numbers(){
    QPushButton *button = (QPushButton *)sender();

    double numbers;
    QString num;
    numbers = QString (ui->Show_numbers->text() + button->text()).toDouble();
    num = QString::number(numbers);


    ui->Show_numbers->setText(num);
}

void MainWindow::actions(){
    QPushButton *button = (QPushButton *)sender();
    double numbers;
    QString num;

    if(button->text() == "+/-") {
        numbers = QString (ui->Show_numbers->text()).toDouble();
        numbers = numbers * -1;
        num = QString::number(numbers, 'g', 15);

        ui->Show_numbers->setText(num);
    } else if(button->text() == "%") {
        numbers = QString (ui->Show_numbers->text()).toDouble();
        numbers = numbers * 0.01;
        num = QString::number(numbers, 'g', 15);


        ui->Show_numbers->setText(num);
    }
}

void MainWindow::on_pushButton_dot_clicked()
{
    if(!(ui->Show_numbers->text().contains('.')))
        ui->Show_numbers->setText(ui->Show_numbers->text() + ".");
}


void MainWindow::on_pushButton_clear_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_pomno->setChecked(false);
    ui->pushButton_podil->setChecked(false);

    ui->Show_numbers->setText("0");
}

void MainWindow::sign()
{
    QPushButton *button = (QPushButton *)sender();

    firstnum = QString (ui->Show_numbers->text()).toDouble();
    ui->Show_numbers->setText("");

    button->setChecked(true);
}

void MainWindow::on_pushButton_rov_clicked()
{
    double labelNumber;
    double num_second;
    QString num;

    num_second = ui->Show_numbers->text().toDouble();

    if(ui->pushButton_plus->isChecked()){
        labelNumber = firstnum + num_second;
        num = QString::number(labelNumber, 'g', 15);
        ui->Show_numbers->setText(num);
        ui->pushButton_plus->setChecked(false);
    }else if (ui->pushButton_minus->isChecked()){
        labelNumber = firstnum - num_second;
        num = QString::number(labelNumber, 'g', 15);
        ui->Show_numbers->setText(num);
        ui->pushButton_minus->setChecked(false);

    }else if (ui->pushButton_podil->isChecked()){
        if (num_second == 0){
            ui->Show_numbers->setText("0");
        } else {
            labelNumber = firstnum / num_second;
            num = QString::number(labelNumber, 'g', 15);
            ui->Show_numbers->setText(num);
            ui->pushButton_podil->setChecked(false);
        }
    }else if(ui->pushButton_pomno->isChecked()){
        labelNumber = firstnum * num_second;
        num = QString::number(labelNumber, 'g', 15);
        ui->Show_numbers->setText(num);
        ui->pushButton_pomno->setChecked(false);
    }
}

