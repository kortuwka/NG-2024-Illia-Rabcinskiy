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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AIAskEverything
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *te_question;
    QPushButton *b_ask;
    QTextEdit *te_answer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AIAskEverything)
    {
        if (AIAskEverything->objectName().isEmpty())
            AIAskEverything->setObjectName("AIAskEverything");
        AIAskEverything->resize(297, 188);
        centralwidget = new QWidget(AIAskEverything);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        te_question = new QTextEdit(centralwidget);
        te_question->setObjectName("te_question");

        verticalLayout->addWidget(te_question);

        b_ask = new QPushButton(centralwidget);
        b_ask->setObjectName("b_ask");

        verticalLayout->addWidget(b_ask);

        te_answer = new QTextEdit(centralwidget);
        te_answer->setObjectName("te_answer");

        verticalLayout->addWidget(te_answer);

        AIAskEverything->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AIAskEverything);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 297, 17));
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
        b_ask->setText(QCoreApplication::translate("AIAskEverything", "Ask", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AIAskEverything: public Ui_AIAskEverything {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIASKEVERYTHING_H
