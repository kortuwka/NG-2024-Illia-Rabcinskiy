/********************************************************************************
** Form generated from reading UI file 'aiaskeverything.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIASKEVERYTHING_H
#define UI_AIASKEVERYTHING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AIAskEverything
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *easy;
    QPushButton *normal;
    QPushButton *difficult;
    QTextEdit *te_question;
    QPushButton *b_ask;
    QTextBrowser *te_answer;
    QTextBrowser *Balls;
    QPushButton *Check;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AIAskEverything)
    {
        if (AIAskEverything->objectName().isEmpty())
            AIAskEverything->setObjectName("AIAskEverything");
        AIAskEverything->resize(381, 345);
        centralwidget = new QWidget(AIAskEverything);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        easy = new QPushButton(centralwidget);
        easy->setObjectName("easy");

        horizontalLayout->addWidget(easy);

        normal = new QPushButton(centralwidget);
        normal->setObjectName("normal");

        horizontalLayout->addWidget(normal);

        difficult = new QPushButton(centralwidget);
        difficult->setObjectName("difficult");

        horizontalLayout->addWidget(difficult);


        verticalLayout->addLayout(horizontalLayout);

        te_question = new QTextEdit(centralwidget);
        te_question->setObjectName("te_question");

        verticalLayout->addWidget(te_question);

        b_ask = new QPushButton(centralwidget);
        b_ask->setObjectName("b_ask");

        verticalLayout->addWidget(b_ask);

        te_answer = new QTextBrowser(centralwidget);
        te_answer->setObjectName("te_answer");

        verticalLayout->addWidget(te_answer);

        Balls = new QTextBrowser(centralwidget);
        Balls->setObjectName("Balls");

        verticalLayout->addWidget(Balls);

        Check = new QPushButton(centralwidget);
        Check->setObjectName("Check");

        verticalLayout->addWidget(Check);

        AIAskEverything->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AIAskEverything);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 381, 21));
        AIAskEverything->setMenuBar(menubar);
        statusbar = new QStatusBar(AIAskEverything);
        statusbar->setObjectName("statusbar");
        AIAskEverything->setStatusBar(statusbar);

        retranslateUi(AIAskEverything);

        QMetaObject::connectSlotsByName(AIAskEverything);
    } // setupUi

    void retranslateUi(QMainWindow *AIAskEverything)
    {
        AIAskEverything->setWindowTitle(QCoreApplication::translate("AIAskEverything", "AIAskEverything", nullptr));
        easy->setText(QCoreApplication::translate("AIAskEverything", "easy level", nullptr));
        normal->setText(QCoreApplication::translate("AIAskEverything", "normal level", nullptr));
        difficult->setText(QCoreApplication::translate("AIAskEverything", "difficult level", nullptr));
        b_ask->setText(QCoreApplication::translate("AIAskEverything", "To answer", nullptr));
        Check->setText(QCoreApplication::translate("AIAskEverything", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AIAskEverything: public Ui_AIAskEverything {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIASKEVERYTHING_H
