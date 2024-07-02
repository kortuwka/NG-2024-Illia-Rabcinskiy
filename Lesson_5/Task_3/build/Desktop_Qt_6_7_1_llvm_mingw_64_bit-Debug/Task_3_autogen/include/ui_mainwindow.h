/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Show_numbers;
    QPushButton *pushButton_podil;
    QPushButton *pushButton_procent;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_plusminus;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_pomno;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_0;
    QPushButton *pushButton_rov;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(121, 226);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Show_numbers = new QLabel(centralwidget);
        Show_numbers->setObjectName("Show_numbers");
        Show_numbers->setGeometry(QRect(0, 0, 121, 41));
        QFont font;
        font.setPointSize(15);
        Show_numbers->setFont(font);
        pushButton_podil = new QPushButton(centralwidget);
        pushButton_podil->setObjectName("pushButton_podil");
        pushButton_podil->setGeometry(QRect(90, 50, 31, 31));
        pushButton_procent = new QPushButton(centralwidget);
        pushButton_procent->setObjectName("pushButton_procent");
        pushButton_procent->setGeometry(QRect(30, 50, 31, 31));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName("pushButton_dot");
        pushButton_dot->setGeometry(QRect(60, 50, 31, 31));
        pushButton_plusminus = new QPushButton(centralwidget);
        pushButton_plusminus->setObjectName("pushButton_plusminus");
        pushButton_plusminus->setGeometry(QRect(0, 50, 31, 31));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(30, 80, 31, 31));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 80, 31, 31));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(60, 80, 31, 31));
        pushButton_pomno = new QPushButton(centralwidget);
        pushButton_pomno->setObjectName("pushButton_pomno");
        pushButton_pomno->setGeometry(QRect(90, 80, 31, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 140, 31, 31));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(0, 140, 31, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 140, 31, 31));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(90, 140, 31, 31));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 110, 31, 31));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 110, 31, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(60, 110, 31, 31));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(90, 110, 31, 31));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(0, 170, 61, 31));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(60, 170, 31, 31));
        pushButton_rov = new QPushButton(centralwidget);
        pushButton_rov->setObjectName("pushButton_rov");
        pushButton_rov->setGeometry(QRect(90, 170, 31, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 121, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Show_numbers->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_podil->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_procent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_plusminus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_pomno->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_rov->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
