#ifndef SECONDUSER_H
#define SECONDUSER_H

#include <QWidget>
#include <QTimer>
namespace Ui {
class seconduser;
}

class seconduser : public QWidget
{
    Q_OBJECT

public:
    explicit seconduser(QWidget *parent = nullptr);
    ~seconduser();

private slots:
    void on_loginButton_clicked();
    void on_signUpButton_clicked();
    void on_sendMessageButton_clicked();
    void on_registerButton_clicked();
    void updateChat();

private:
    Ui::seconduser *ui;
    QTimer *chatTimer;
};

#endif // SECONDUSER_H
