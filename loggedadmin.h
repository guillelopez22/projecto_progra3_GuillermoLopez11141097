#ifndef LOGGEDADMIN_H
#define LOGGEDADMIN_H

#include <QDialog>
#include <vector>
#include "empleado.h"
#include "instrumento.h"
using std::vector;

namespace Ui {
class loggedadmin;
}

class loggedadmin : public QDialog
{
    Q_OBJECT

public:
    explicit loggedadmin(QWidget *parent = 0, Empleado* = 0, vector<Empleado*>* = 0, vector<Instrumento*>* = 0);
    ~loggedadmin();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::loggedadmin *ui;
    Empleado* ee;
    vector<Empleado*>* todos;
    vector<Instrumento*>* instss;
};

#endif // LOGGEDADMIN_H
