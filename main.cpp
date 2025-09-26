#include "mainwindow.h"

#include <QApplication>
#include <QtGui>
#include <QScreen>
#include <QtWidgets>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QIcon icon("/usr/local/share/pixmaps/zapret.png");
    MainWindow w;
    int screenWidth = QApplication::primaryScreen()->geometry().width();
    int screenHeight = QApplication::primaryScreen()->geometry().height();
    int windowWidth = w.width();
    int windowHeight = w.height();
    int x = (screenWidth - windowWidth) / 2;
    int y = (screenHeight - windowHeight) / 2;
    w.move(x, y);
    w.setWindowIcon(icon);
    w.show();
    return a.exec();

}
