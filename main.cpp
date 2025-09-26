#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QIcon>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QIcon icon(":/icons/icons/Clam.png");
    MainWindow w;
    a.setWindowIcon(icon);
    w.show();
    return a.exec();

}
