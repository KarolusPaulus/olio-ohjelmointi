#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString num1,num2;
    int state;
    short operand;
    float res;

    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();
};
#endif // MAINWINDOW_H
