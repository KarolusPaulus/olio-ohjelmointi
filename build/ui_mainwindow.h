/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBarPlayer1;
    QProgressBar *progressBarPlayer2;
    QLabel *labelGameInfo;
    QPushButton *switchPlayerButton;
    QPushButton *switchPlayerButton_2;
    QPushButton *pushButton120sec;
    QPushButton *pushButton5min;
    QPushButton *startButton;
    QPushButton *gameButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(590, 353);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBarPlayer1 = new QProgressBar(centralwidget);
        progressBarPlayer1->setObjectName("progressBarPlayer1");
        progressBarPlayer1->setGeometry(QRect(80, 40, 118, 23));
        progressBarPlayer1->setValue(24);
        progressBarPlayer2 = new QProgressBar(centralwidget);
        progressBarPlayer2->setObjectName("progressBarPlayer2");
        progressBarPlayer2->setGeometry(QRect(390, 40, 118, 23));
        progressBarPlayer2->setValue(24);
        labelGameInfo = new QLabel(centralwidget);
        labelGameInfo->setObjectName("labelGameInfo");
        labelGameInfo->setGeometry(QRect(80, 130, 201, 51));
        switchPlayerButton = new QPushButton(centralwidget);
        switchPlayerButton->setObjectName("switchPlayerButton");
        switchPlayerButton->setGeometry(QRect(80, 70, 91, 31));
        switchPlayerButton_2 = new QPushButton(centralwidget);
        switchPlayerButton_2->setObjectName("switchPlayerButton_2");
        switchPlayerButton_2->setGeometry(QRect(390, 70, 91, 31));
        pushButton120sec = new QPushButton(centralwidget);
        pushButton120sec->setObjectName("pushButton120sec");
        pushButton120sec->setGeometry(QRect(80, 190, 80, 24));
        pushButton5min = new QPushButton(centralwidget);
        pushButton5min->setObjectName("pushButton5min");
        pushButton5min->setGeometry(QRect(180, 190, 80, 24));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(80, 240, 101, 41));
        gameButton = new QPushButton(centralwidget);
        gameButton->setObjectName("gameButton");
        gameButton->setGeometry(QRect(200, 240, 101, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 590, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelGameInfo->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        switchPlayerButton->setText(QCoreApplication::translate("MainWindow", "Switch Player", nullptr));
        switchPlayerButton_2->setText(QCoreApplication::translate("MainWindow", "Switch Player", nullptr));
        pushButton120sec->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        pushButton5min->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        gameButton->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
