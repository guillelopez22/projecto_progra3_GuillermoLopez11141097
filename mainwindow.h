#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "empleado.h"
#include "instrumento.h"
using std::vector;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, vector<Empleado*>* = 0, vector<Instrumento*>* = 0);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    vector<Empleado*>* employee;
    vector<Instrumento*>* instruments;

};

#endif // MAINWINDOW_H
