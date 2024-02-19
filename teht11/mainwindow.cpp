#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
    operand = -1;
    res = 0.0f;

    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);

    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);

    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (clickedButton) {
        QString buttonText = clickedButton->text();
        if (state == 1) {
            num1 += buttonText;
            ui->num1->setText(num1);
            qDebug() << "" << num1;
        } else if (state == 2) {
            num2 += buttonText;
            ui->num2->setText(num2);
            qDebug() << "" << num2;
        }
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (clickedButton) {
        QString buttonText = clickedButton->text();
        if (buttonText == "clear") {
            resetLineEdits();
        } else if (buttonText == "enter") {
            float num1Float = num1.toFloat();
            float num2Float = num2.toFloat();
            switch (operand) {
            case 0:
                res = num1Float + num2Float;
                break;
            case 1:
                res = num1Float - num2Float;
                break;
            case 2:
                res = num1Float * num2Float;
                break;
            case 3:
                if (num2Float != 0) {
                    res = num1Float / num2Float;
                } else {
                }
                break;
            default:
                break;
            }
            ui->res->setText(QString::number(res));
        }
    }
}


void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (clickedButton) {
        QString buttonText = clickedButton->text();
        if (buttonText == "+") {
            operand = 0;
        } else if (buttonText == "-") {
            operand = 1;
        } else if (buttonText == "*") {
            operand = 2;
        } else if (buttonText == "/") {
            operand = 3;
        }
        state = 2;
    }
}

void MainWindow::resetLineEdits()
{
    num1.clear();
    num2.clear();
    ui->num1->clear();
    ui->num2->clear();
    ui->res->clear();
    state = 1;
    operand = -1;
    res = 0.0f;
}
