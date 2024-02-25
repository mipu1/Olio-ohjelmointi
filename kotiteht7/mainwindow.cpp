#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
    setGameInfoText("Select playtime and press start game",16);
    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
}

void MainWindow::timeout()
{
    if (currentPlayer == 1) {
        if(player1Time > 0){
        player1Time--;
        qDebug() << "Player 1 time remaining: " << player1Time << "seconds";
        }
        else{
            qDebug() << "Player 1 time out, Player 2 WINS";
            pQTimer->stop();
            pQTimer->disconnect();
            setGameInfoText("Player 2 WON!!", 38);
        }
    } else if (currentPlayer == 2) {
        if(player2Time > 0){
        player2Time--;
        qDebug() << "Player 2 time remaining: " << player2Time << "seconds";
        }
        else{
            qDebug() << "Player 2 time out, Player 1 WINS";
            pQTimer->stop();
            pQTimer->disconnect();
            setGameInfoText("Player 1 WON!!", 38);
        }
    }
    updateProgressBar();
}


void MainWindow::on_btn_5min_clicked()
{
    gameTime = 300;
    qDebug() << "5min click";
    setGameInfoText("Ready to play",16);
    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);
}


void MainWindow::on_btn_120sec_clicked()
{
    gameTime = 120;
    qDebug() << "2min click";
    setGameInfoText("Ready to play", 16);
    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);
}


void MainWindow::on_btn_START_clicked()
{
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout);
    qDebug() << "Start click";
    pQTimer->start(1000);
    player1Time = gameTime;
    player2Time = gameTime;


    currentPlayer = 1;
    setGameInfoText("Game ongoing", 16);
}


void MainWindow::on_btn_STOP_clicked()
{
    qDebug() << "Stop click";
    pQTimer->disconnect();
    setGameInfoText("New game via start button",16);
    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
}


void MainWindow::on_btn_switch_player1_clicked()
{
    qDebug() << "switch player1 click";
    currentPlayer = 2;
    qDebug() << currentPlayer;
}


void MainWindow::on_btn_Switch_player2_clicked()
{
    qDebug() << "switch player2 click";
    currentPlayer = 1;
     qDebug() << currentPlayer;
}

void MainWindow::updateProgressBar()
{
    float player1Prosent = (player1Time * 100) / gameTime;
    ui->progressBar->setValue(player1Prosent);
    float player2Prosent = (player2Time * 100 )/ gameTime;
    ui->progressBar_2->setValue(player2Prosent);
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    ui->label->setAlignment(Qt::AlignCenter);   //keskittää label tekstin keskelle
    QFont font = ui->label->font();             //label nykyinen fontti
    font.setPointSize(fontSize);                //asettaa fontin fonSizen mukaan
    ui->label->setFont(font);                   //uusi fontti labelille
    ui->label->setText(text);                   //asettaa tekstin saadun text mukaan

}




