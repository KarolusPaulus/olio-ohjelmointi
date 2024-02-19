#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->countButton, &QPushButton::clicked, this, &MainWindow::countButtonHandler);
    connect(ui->resetButton, &QPushButton::clicked, this, &MainWindow::resetButtonHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countButtonHandler()
{
    QString currentText = ui->lineEdit->text();
    int currentValue = currentText.toInt();
    ui->lineEdit->setText(QString::number(currentValue + 1));
}

void MainWindow::resetButtonHandler()
{
    ui->lineEdit->setText("0");
}
