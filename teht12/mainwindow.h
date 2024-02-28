#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateProgressBar();
    void setGameInfoText(QString, short);
    void gameButtonClicked();
    void switchPlayerButtonClicked();
    void player1TimeFinished();
    void player2TimeFinished();
    void startButtonClicked();
    void select5min();
    void select120sec();

public slots:
    void timeout();

private slots:
    void slotShowTimer();

private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;
    short gameTime;
    short currentPlayer;
    short player1Time;
    short player2Time;
};
#endif // MAINWINDOW_H
