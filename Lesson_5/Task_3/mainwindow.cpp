#include "mainwindow.h"
#include "ui_mainwindow.h"

double numfirts;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_plusminus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_procent, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_divide, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_multiply, SIGNAL(clicked()), this, SLOT(math_operations()));

    ui->pushButton_divide->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers(){
    QPushButton *button = (QPushButton *)sender();

    double allnumbers;
    QString newlabel;
    allnumbers = QString (ui->label->text() + button->text()).toDouble();
    newlabel = QString::number(allnumbers, 'g', 20);

    ui->label->setText(newlabel);
}

void MainWindow::on_pushButton_dot_clicked()
{
    if(!(ui->label->text().contains('.')))
        ui->label->setText(ui->label->text() + ".");

}

void MainWindow::operations(){
    QPushButton *button = (QPushButton *)sender();

    double allnumbers;
    QString newlabel;

    if(button->text() == "+/-"){
        allnumbers = (ui->label->text()).toDouble();
        allnumbers = allnumbers * -1;
        newlabel = QString::number(allnumbers, 'g', 20);

        ui->label->setText(newlabel);
    }else if(button->text() == "%"){
        allnumbers = (ui->label->text()).toDouble();
        allnumbers = allnumbers * 0.1;
        newlabel = QString::number(allnumbers, 'g', 20);

        ui->label->setText(newlabel);
    }
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_divide->setChecked(false);
    ui->pushButton_multiply->setChecked(false);

    ui->label->setText("0");
}

void MainWindow::math_operations()
{
    QPushButton *button = (QPushButton *)sender();

    numfirts = ui->label->text().toDouble();
    ui->label->setText("");

    button->setChecked(true);
}


void MainWindow::on_pushButton_smooth_clicked()
{
    double labelnumber;
    double numsecond;
    QString newlabel;

    numsecond = ui->label->text().toDouble();

    if(ui->pushButton_plus->isChecked()){
        labelnumber = numfirts + numsecond;
        newlabel = QString::number(labelnumber, 'g', 20);

        ui->label->setText(newlabel);
        ui->pushButton_plus->setChecked(false);
    }else if(ui->pushButton_minus->isChecked()){
        labelnumber = numfirts - numsecond;
        newlabel = QString::number(labelnumber, 'g', 20);

        ui->label->setText(newlabel);
        ui->pushButton_plus->setChecked(false);
    }else if(ui->pushButton_divide->isChecked()){
        if(numsecond == 0) {
            ui->label->setText("0");
        }else {
            labelnumber = numfirts / numsecond;
            newlabel = QString::number(labelnumber, 'g', 20);

            ui->label->setText(newlabel);
            ui->pushButton_plus->setChecked(false);
        }
    }else if(ui->pushButton_multiply->isChecked()){
        labelnumber = numfirts * numsecond;
        newlabel = QString::number(labelnumber, 'g', 20);

        ui->label->setText(newlabel);
        ui->pushButton_plus->setChecked(false);
    }
}

