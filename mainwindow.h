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
<<<<<<< HEAD
    explicit MainWindow(QWidget *parent = 0, vector<Empleado*>* = 0, vector<Instrumento*>* = 0);
=======
    explicit MainWindow(QWidget *parent = 0, vector<Empleado*>* = 0);
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    vector<Empleado*>* employee;
<<<<<<< HEAD
    vector<Instrumento*>* instruments;
=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c

};

#endif // MAINWINDOW_H
