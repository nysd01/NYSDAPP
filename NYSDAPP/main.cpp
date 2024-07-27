#include "mainwindow.h"
#include"seconduser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    seconduser q;
    q.show();


    return a.exec();
}
