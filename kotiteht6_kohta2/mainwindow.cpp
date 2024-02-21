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

void MainWindow::on_N1_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_N2_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_N3_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_N4_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_N5_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_N6_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_N7_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_N8_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_N9_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_N0_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_add_clicked()
{
    operand = 0;
    state = 2;
    addSubMulDivClickHandler();

}


void MainWindow::on_sub_clicked()
{
    operand = 1;
    state = 2;
    addSubMulDivClickHandler();
}


void MainWindow::on_mul_clicked()
{
    operand = 3;
    state = 2;
    addSubMulDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    operand = 2;
    state = 2;
    addSubMulDivClickHandler();
}


void MainWindow::on_clear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();
    qDebug() << "result: " << result;
    ui->result->setText(QString::number(result));
}

void MainWindow::numberClickedHandler()
{
    QPushButton *button=qobject_cast<QPushButton*>(sender());
    qDebug() << "State:" << state;
    QString name = button->objectName();

    qDebug() << "Button name:" << name;
    if(state == 1){
        number1 = number1 + name.last(1);

        ui->num1->setText(number1);
        qDebug() << "number1 =" << number1 << Qt::endl;
    }else if(state == 2){
        number2 = number2 + name.last(1);

        ui->num2->setText(number2);
        qDebug() << "number2 =" << number2 << Qt::endl;
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button=qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    if(name == "clear") {
        resetLineEdits();
    } else if(name == "enter"){
        addSubMulDivClickHandler();
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    qDebug() << "Button name:" << button->objectName();

    switch(operand){
    case 0:
        result = n1 + n2;
        break;
    case 1:
        result = n1 - n2;
        break;
    case 2:
        if(n2 != 0){
            result = n1 / n2;
        } else {
            qDebug() << "lasku virhe" << Qt::endl;
        }
        break;
    case 3:
        result = n1 * n2;
        break;
    }
    //
}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    state = 1;
    number1.clear();
    number2.clear();
}
