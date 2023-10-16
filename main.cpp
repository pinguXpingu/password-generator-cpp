#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //a.setStyleSheet(css_stil);
    a.setStyleSheet(css_stil_android);
    MainWindow win;
    win.show();
    return a.exec();
}
