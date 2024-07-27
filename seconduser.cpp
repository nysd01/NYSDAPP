#include "seconduser.h"
#include "ui_seconduser.h"
#include"database.h"
#include<QMessageBox>

seconduser::seconduser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::seconduser)
    , chatTimer(new QTimer(this))
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); // Start with login page
    connect(chatTimer, &QTimer::timeout, this, &seconduser::updateChat);
    chatTimer->start(1000); // Refresh chat every second
}

seconduser::~seconduser()
{
    delete ui;
}
void seconduser::on_loginButton_clicked()
{
    QString email = ui->emailLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (loginUser(email, password)) {
        ui->stackedWidget->setCurrentIndex(2); // Switch to chat page
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid email or password.");
    }
}

void seconduser::on_signUpButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString email = ui->emailSignUpLineEdit->text();
    QString password = ui->passwordSignUpLineEdit->text();

    if (registerUser(name, email, password)) {
        //QMessageBox::information(this, "Registration Success", "Account created successfully!");
        ui->stackedWidget->setCurrentIndex(1); // Switch to login page
    } else {
        QMessageBox::warning(this, "Registration Failed", "Failed to create account.");
    }
}
void seconduser::on_registerButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString email = ui->emailLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (registerUser(name, email, password)) {
        QMessageBox::information(this, "Registration Success", "Account created successfully!");
        ui->stackedWidget->setCurrentIndex(0);

    } else {
        QMessageBox::warning(this, "Registration Failed", "Failed to create account.");
    }
}

void seconduser::on_sendMessageButton_clicked()
{
    int senderId = 2; // Replace with actual sender ID
    int receiverId = 1; // Replace with actual receiver ID
    QString message = ui->messageLineEdit->text();

    if (sendMessage(senderId, receiverId, message)) {
        ui->chatTextEdit->append("You: " + message);
        ui->messageLineEdit->clear();
    } else {
        QMessageBox::warning(this, "Send Failed", "Failed to send message.");
    }
}

void seconduser::updateChat()
{
    QList<QString> messages = getMessages(2, 1); // Fetch messages between user 2 and user 1
    ui->chatTextEdit->clear();
    for (const QString &message : messages) {
        ui->chatTextEdit->append(message);
    }
}
