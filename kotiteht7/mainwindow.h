#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();


private slots:

    void on_btn_5min_clicked();

    void on_btn_120sec_clicked();

    void on_btn_START_clicked();

    void on_btn_STOP_clicked();

    void on_btn_switch_player1_clicked();

    void on_btn_Switch_player2_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer = 0;
    short gameTime;
    QTimer *pQTimer;

    void updateProgressBar();
    void setGameInfoText(QString, short);

};
#endif // MAINWINDOW_H
