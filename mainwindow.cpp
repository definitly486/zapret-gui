#include "mainwindow.h"
#include "ui_zapret_gui.h"
#include <QWidget>
#include <QIcon>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

     ui->setupUi(this);
}

MainWindow::~MainWindow()
{


    delete ui;
}



void MainWindow::on_pushButton_start_clicked()
{
system("doas service ipfw start");
}


void MainWindow::on_pushButton_stop_clicked()
{
system("doas service ipfw stop");
}

