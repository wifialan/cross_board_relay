#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("基于中继传输的磁感应通信信号发射平台");
    w.show();
    return a.exec();
}
