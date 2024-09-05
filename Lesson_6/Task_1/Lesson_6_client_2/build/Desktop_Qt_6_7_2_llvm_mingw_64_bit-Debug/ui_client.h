/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *login;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *e_address;
    QSpinBox *sb_port;
    QPushButton *b_login;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *chat;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *te_chat;
    QTextEdit *te_input;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QListWidget *lw_users;
    QPushButton *SendFile;
    QPushButton *b_send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(800, 600);
        centralwidget = new QWidget(Client);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        login = new QWidget();
        login->setObjectName("login");
        horizontalLayout_3 = new QHBoxLayout(login);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(253, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(login);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        e_address = new QLineEdit(login);
        e_address->setObjectName("e_address");

        verticalLayout_2->addWidget(e_address);

        sb_port = new QSpinBox(login);
        sb_port->setObjectName("sb_port");

        verticalLayout_2->addWidget(sb_port);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        b_login = new QPushButton(login);
        b_login->setObjectName("b_login");

        verticalLayout_3->addWidget(b_login);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(253, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        stackedWidget->addWidget(login);
        chat = new QWidget();
        chat->setObjectName("chat");
        horizontalLayout_4 = new QHBoxLayout(chat);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        te_chat = new QTextEdit(chat);
        te_chat->setObjectName("te_chat");
        te_chat->setMinimumSize(QSize(300, 400));

        verticalLayout_5->addWidget(te_chat);

        te_input = new QTextEdit(chat);
        te_input->setObjectName("te_input");
        te_input->setMinimumSize(QSize(300, 100));

        verticalLayout_5->addWidget(te_input);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton = new QPushButton(chat);
        pushButton->setObjectName("pushButton");

        verticalLayout_4->addWidget(pushButton);

        lw_users = new QListWidget(chat);
        lw_users->setObjectName("lw_users");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lw_users->sizePolicy().hasHeightForWidth());
        lw_users->setSizePolicy(sizePolicy);
        lw_users->setMinimumSize(QSize(150, 400));

        verticalLayout_4->addWidget(lw_users);

        SendFile = new QPushButton(chat);
        SendFile->setObjectName("SendFile");

        verticalLayout_4->addWidget(SendFile);

        b_send = new QPushButton(chat);
        b_send->setObjectName("b_send");

        verticalLayout_4->addWidget(b_send);


        horizontalLayout_4->addLayout(verticalLayout_4);

        stackedWidget->addWidget(chat);

        horizontalLayout->addWidget(stackedWidget);

        Client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Client);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Client->setMenuBar(menubar);
        statusbar = new QStatusBar(Client);
        statusbar->setObjectName("statusbar");
        Client->setStatusBar(statusbar);

        retranslateUi(Client);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QMainWindow *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Client", nullptr));
        label->setText(QCoreApplication::translate("Client", "IP:", nullptr));
        label_2->setText(QCoreApplication::translate("Client", "Port:", nullptr));
        b_login->setText(QCoreApplication::translate("Client", "\320\237\320\276\320\263\320\275\320\260\320\273\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("Client", "Open File", nullptr));
        SendFile->setText(QCoreApplication::translate("Client", "Send File", nullptr));
        b_send->setText(QCoreApplication::translate("Client", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
