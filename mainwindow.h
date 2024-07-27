#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTimer>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();
    void on_signUpButton_clicked();
    void on_sendMessageButton_clicked();
    void on_registerButton_clicked();
    void updateChat();

private:
    Ui::MainWindow *ui;
    QTimer *chatTimer;
};

#endif // MAINWINDOW_H
