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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_18;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_15;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *emailLabel;
    QLabel *passwordLabel;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *emailLineEdit;
    QLineEdit *passwordLineEdit;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_12;
    QPushButton *loginButton;
    QPushButton *signUpButton;
    QWidget *registrationPage;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *nameLabel;
    QLabel *emailSignUpLabel;
    QLabel *passwordSignUpLabel;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *nameLineEdit;
    QLineEdit *emailSignUpLineEdit;
    QLineEdit *passwordSignUpLineEdit;
    QWidget *widget_14;
    QVBoxLayout *verticalLayout_13;
    QPushButton *registerButton;
    QWidget *chatPage;
    QVBoxLayout *verticalLayout_14;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_17;
    QVBoxLayout *verticalLayout_15;
    QWidget *widget_19;
    QVBoxLayout *verticalLayout_16;
    QTextEdit *chatTextEdit;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *messageLineEdit;
    QPushButton *sendMessageButton;
    QWidget *widget_18;
    QVBoxLayout *verticalLayout_17;
    QWidget *widget_21;
    QWidget *widget_22;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(590, 303);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/LOGO NYSD.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(37, 37, 37);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_18 = new QVBoxLayout(centralwidget);
        verticalLayout_18->setObjectName("verticalLayout_18");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Script MT Bold\";\n"
"font: italic 14pt \"Monotype Corsiva\";"));

        verticalLayout_18->addWidget(label);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName("stackedWidget");
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        verticalLayout_11 = new QVBoxLayout(loginPage);
        verticalLayout_11->setObjectName("verticalLayout_11");
        widget_11 = new QWidget(loginPage);
        widget_11->setObjectName("widget_11");
        verticalLayout = new QVBoxLayout(widget_11);
        verticalLayout->setObjectName("verticalLayout");
        widget_6 = new QWidget(widget_11);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        verticalLayout_7 = new QVBoxLayout(widget_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        widget_8 = new QWidget(widget_6);
        widget_8->setObjectName("widget_8");
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout_10 = new QVBoxLayout(widget_8);
        verticalLayout_10->setObjectName("verticalLayout_10");
        widget_15 = new QWidget(widget_8);
        widget_15->setObjectName("widget_15");

        verticalLayout_10->addWidget(widget_15);

        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName("widget_7");
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 15, 69);"));
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName("widget_9");
        verticalLayout_9 = new QVBoxLayout(widget_9);
        verticalLayout_9->setObjectName("verticalLayout_9");
        emailLabel = new QLabel(widget_9);
        emailLabel->setObjectName("emailLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Script MT Bold")});
        font.setPointSize(12);
        font.setBold(true);
        emailLabel->setFont(font);
        emailLabel->setStyleSheet(QString::fromUtf8("color: rgb(25, 255, 21);"));

        verticalLayout_9->addWidget(emailLabel);

        passwordLabel = new QLabel(widget_9);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font);
        passwordLabel->setStyleSheet(QString::fromUtf8("color: rgb(25, 255, 21);"));

        verticalLayout_9->addWidget(passwordLabel);


        horizontalLayout_2->addWidget(widget_9);

        widget_10 = new QWidget(widget_7);
        widget_10->setObjectName("widget_10");
        verticalLayout_8 = new QVBoxLayout(widget_10);
        verticalLayout_8->setObjectName("verticalLayout_8");
        emailLineEdit = new QLineEdit(widget_10);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 103);"));

        verticalLayout_8->addWidget(emailLineEdit);

        passwordLineEdit = new QLineEdit(widget_10);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(103, 103, 103);"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_8->addWidget(passwordLineEdit);


        horizontalLayout_2->addWidget(widget_10);


        verticalLayout_10->addWidget(widget_7);

        widget_12 = new QWidget(widget_8);
        widget_12->setObjectName("widget_12");
        widget_12->setMaximumSize(QSize(209, 127));
        verticalLayout_12 = new QVBoxLayout(widget_12);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(6, 6, 6, 6);
        loginButton = new QPushButton(widget_12);
        loginButton->setObjectName("loginButton");
        loginButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        verticalLayout_12->addWidget(loginButton);

        signUpButton = new QPushButton(widget_12);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));

        verticalLayout_12->addWidget(signUpButton);


        verticalLayout_10->addWidget(widget_12, 0, Qt::AlignHCenter);

        verticalLayout_10->setStretch(0, 3);
        verticalLayout_10->setStretch(1, 3);
        verticalLayout_10->setStretch(2, 1);

        verticalLayout_7->addWidget(widget_8);


        verticalLayout->addWidget(widget_6);


        verticalLayout_11->addWidget(widget_11);

        stackedWidget->addWidget(loginPage);
        registrationPage = new QWidget();
        registrationPage->setObjectName("registrationPage");
        verticalLayout_6 = new QVBoxLayout(registrationPage);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget = new QWidget(registrationPage);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 127);"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        widget_13 = new QWidget(widget_3);
        widget_13->setObjectName("widget_13");
        horizontalLayout_3 = new QHBoxLayout(widget_13);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget_4 = new QWidget(widget_13);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(37, 39, 37);"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        nameLabel = new QLabel(widget_4);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setFont(font);

        verticalLayout_3->addWidget(nameLabel);

        emailSignUpLabel = new QLabel(widget_4);
        emailSignUpLabel->setObjectName("emailSignUpLabel");
        emailSignUpLabel->setFont(font);

        verticalLayout_3->addWidget(emailSignUpLabel);

        passwordSignUpLabel = new QLabel(widget_4);
        passwordSignUpLabel->setObjectName("passwordSignUpLabel");
        passwordSignUpLabel->setFont(font);

        verticalLayout_3->addWidget(passwordSignUpLabel);


        horizontalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(widget_13);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 95, 0);"));
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        nameLineEdit = new QLineEdit(widget_5);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe Print\";"));

        verticalLayout_4->addWidget(nameLineEdit);

        emailSignUpLineEdit = new QLineEdit(widget_5);
        emailSignUpLineEdit->setObjectName("emailSignUpLineEdit");
        emailSignUpLineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe Print\";"));

        verticalLayout_4->addWidget(emailSignUpLineEdit);

        passwordSignUpLineEdit = new QLineEdit(widget_5);
        passwordSignUpLineEdit->setObjectName("passwordSignUpLineEdit");
        passwordSignUpLineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe Print\";"));
        passwordSignUpLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(passwordSignUpLineEdit);


        horizontalLayout_3->addWidget(widget_5);


        verticalLayout_5->addWidget(widget_13);


        verticalLayout_2->addWidget(widget_3);

        widget_14 = new QWidget(widget);
        widget_14->setObjectName("widget_14");
        widget_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 219, 16);\n"
"background-color: rgb(19, 80, 0);"));
        verticalLayout_13 = new QVBoxLayout(widget_14);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(20, -1, 20, -1);
        registerButton = new QPushButton(widget_14);
        registerButton->setObjectName("registerButton");
        registerButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));\n"
"color: rgb(39, 53, 255);\n"
"font: 12pt \"Segoe Script\";"));

        verticalLayout_13->addWidget(registerButton);


        verticalLayout_2->addWidget(widget_14);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 1);

        verticalLayout_6->addWidget(widget);

        stackedWidget->addWidget(registrationPage);
        chatPage = new QWidget();
        chatPage->setObjectName("chatPage");
        verticalLayout_14 = new QVBoxLayout(chatPage);
        verticalLayout_14->setObjectName("verticalLayout_14");
        widget_16 = new QWidget(chatPage);
        widget_16->setObjectName("widget_16");
        widget_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 34, 5);"));
        horizontalLayout_4 = new QHBoxLayout(widget_16);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget_17 = new QWidget(widget_16);
        widget_17->setObjectName("widget_17");
        widget_17->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 0, 99);"));
        verticalLayout_15 = new QVBoxLayout(widget_17);
        verticalLayout_15->setObjectName("verticalLayout_15");
        widget_19 = new QWidget(widget_17);
        widget_19->setObjectName("widget_19");
        widget_19->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 10, 255);"));
        verticalLayout_16 = new QVBoxLayout(widget_19);
        verticalLayout_16->setObjectName("verticalLayout_16");
        chatTextEdit = new QTextEdit(widget_19);
        chatTextEdit->setObjectName("chatTextEdit");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Script MT Bold")});
        font1.setPointSize(20);
        font1.setBold(true);
        chatTextEdit->setFont(font1);
        chatTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 13, 99);\n"
"background-color: rgb(67, 67, 67);"));
        chatTextEdit->setReadOnly(true);

        verticalLayout_16->addWidget(chatTextEdit);


        verticalLayout_15->addWidget(widget_19);

        widget_20 = new QWidget(widget_17);
        widget_20->setObjectName("widget_20");
        widget_20->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));"));
        horizontalLayout_5 = new QHBoxLayout(widget_20);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        messageLineEdit = new QLineEdit(widget_20);
        messageLineEdit->setObjectName("messageLineEdit");
        messageLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 68, 68);"));

        horizontalLayout_5->addWidget(messageLineEdit);

        sendMessageButton = new QPushButton(widget_20);
        sendMessageButton->setObjectName("sendMessageButton");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Monotype Corsiva")});
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setItalic(true);
        sendMessageButton->setFont(font2);
        sendMessageButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"font: italic 20pt \"Monotype Corsiva\";\n"
"color: rgb(85, 85, 127);\n"
""));

        horizontalLayout_5->addWidget(sendMessageButton);


        verticalLayout_15->addWidget(widget_20);

        verticalLayout_15->setStretch(0, 3);
        verticalLayout_15->setStretch(1, 1);

        horizontalLayout_4->addWidget(widget_17);

        widget_18 = new QWidget(widget_16);
        widget_18->setObjectName("widget_18");
        widget_18->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 0, 0);"));
        verticalLayout_17 = new QVBoxLayout(widget_18);
        verticalLayout_17->setObjectName("verticalLayout_17");
        widget_21 = new QWidget(widget_18);
        widget_21->setObjectName("widget_21");
        widget_21->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/LOGO NYSD.jpg);"));

        verticalLayout_17->addWidget(widget_21);

        widget_22 = new QWidget(widget_18);
        widget_22->setObjectName("widget_22");
        widget_22->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/ictlogo.jpg);"));

        verticalLayout_17->addWidget(widget_22);


        horizontalLayout_4->addWidget(widget_18);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_14->addWidget(widget_16);

        stackedWidget->addWidget(chatPage);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_18->addWidget(widget_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 590, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "NYSDAPP2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "NOUMBISSI YAMDJEUSON STANLEY DEREK                                                                      @NYSD DEREK", nullptr));
        loginPage->setProperty("title", QVariant(QCoreApplication::translate("MainWindow", "Login", nullptr)));
        emailLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signUpButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        registrationPage->setProperty("title", QVariant(QCoreApplication::translate("MainWindow", "Register", nullptr)));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        emailSignUpLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        passwordSignUpLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        nameLineEdit->setText(QString());
        registerButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        chatPage->setProperty("title", QVariant(QCoreApplication::translate("MainWindow", "Chat", nullptr)));
        messageLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Text a message", nullptr));
        sendMessageButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
