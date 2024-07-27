#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , chatTimer(new QTimer(this))

{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); // Start with login page

    connect(chatTimer, &QTimer::timeout, this, &MainWindow::updateChat);
    chatTimer->start(1000); // Refresh chat every second
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString email = ui->emailLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (loginUser(email, password)) {
        ui->stackedWidget->setCurrentIndex(2); // Switch to chat page
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid email or password.");
    }
}

void MainWindow::on_signUpButton_clicked()
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
void MainWindow::on_registerButton_clicked()
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

void MainWindow::on_sendMessageButton_clicked()
{
    int senderId = 1; // Replace with actual sender ID
    int receiverId = 2; // Replace with actual receiver ID
    QString message = ui->messageLineEdit->text();

    if (sendMessage(senderId, receiverId, message)) {
        ui->chatTextEdit->append("You: " + message);
        ui->messageLineEdit->clear();
    } else {
        QMessageBox::warning(this, "Send Failed", "Failed to send message.");
    }
}

void MainWindow::updateChat()
{
    QList<QString> messages = getMessages(1, 2); // Fetch messages between user 1 and user 2
    ui->chatTextEdit->clear();
    for (const QString &message : messages) {
        ui->chatTextEdit->append(message);
    }
}
