#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QIcon>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QIcon icon("/usr/local/share/pixmaps/zapret.png");
    MainWindow w;
    w.setWindowIcon(icon);
    w.show();
    return a.exec();

}
