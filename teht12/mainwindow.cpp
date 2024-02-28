#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer(this);

    connect(ui->startButton, SIGNAL(clicked()), this, SLOT(startButtonClicked()));
    connect(ui->gameButton, SIGNAL(clicked()), this, SLOT(gameButtonClicked()));
    connect(ui->switchPlayerButton, SIGNAL(clicked()), this, SLOT(switchPlayerButtonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer=nullptr;
}

void MainWindow::startButtonClicked()
{
    player1Time = gameTime;
    player2Time = gameTime;
    currentPlayer = 1;
    updateProgressBar();
    pQTimer->start(1000);
}

void MainWindow::gameButtonClicked()
{
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    startButtonClicked();
}

void MainWindow::switchPlayerButtonClicked()
{
    if (currentPlayer == 1) {
        player1TimeFinished();
        currentPlayer = 2;
    } else {
        player2TimeFinished();
        currentPlayer = 1;
    }
    updateProgressBar();
}

void MainWindow::slotShowTimer()
{
    gameTime += 1;
    qDebug() << "Aika kulunut " << gameTime << " sekunttia";
}

void MainWindow::timeout()
{
    gameTime--;
    if (currentPlayer == 1) {
        player1Time--;
        if (player1Time <= 0) {
            player1TimeFinished();
        }
    } else {
        player2Time--;
        if (player2Time <= 0) {
            player2TimeFinished();
        }
    }
    updateProgressBar();
}

void MainWindow::updateProgressBar()
{
    ui->progressBarPlayer1->setValue(player1Time * 100 / gameTime);
    ui->progressBarPlayer2->setValue(player2Time * 100 / gameTime);
}

void MainWindow::player1TimeFinished()
{
    pQTimer->stop();
    setGameInfoText("Player 1's time is up!", 12);
}

void MainWindow::player2TimeFinished()
{
    pQTimer->stop();
    setGameInfoText("Player 2's time is up!", 12);
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    ui->labelGameInfo->setText(text);
    QFont font = ui->labelGameInfo->font();
    font.setPointSize(fontSize);
    ui->labelGameInfo->setFont(font);
}

