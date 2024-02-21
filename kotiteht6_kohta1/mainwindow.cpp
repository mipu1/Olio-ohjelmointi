#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btnCount_clicked()
{

    count = sender()->objectName();
    qDebug() << "Button name:" << count;

    i++;
    ui->textLaskuri->setText(QString::number(i));


}


void MainWindow::on_btnReset_clicked()
{

    reset = sender()->objectName();
    qDebug() << "Button name:" << reset;


    i=0;
    ui->textLaskuri->setText(QString::number(i));


}

