#ifndef LOGGEDADMIN_H
#define LOGGEDADMIN_H

#include <QDialog>
#include <vector>
#include "empleado.h"
<<<<<<< HEAD
#include "instrumento.h"
=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
using std::vector;

namespace Ui {
class loggedadmin;
}

class loggedadmin : public QDialog
{
    Q_OBJECT

public:
<<<<<<< HEAD
    explicit loggedadmin(QWidget *parent = 0, Empleado* = 0, vector<Empleado*>* = 0, vector<Instrumento*>* = 0);
=======
    explicit loggedadmin(QWidget *parent = 0, Empleado* = 0, vector<Empleado*>* = 0);
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
    ~loggedadmin();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

<<<<<<< HEAD
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
private:
    Ui::loggedadmin *ui;
    Empleado* ee;
    vector<Empleado*>* todos;
<<<<<<< HEAD
    vector<Instrumento*>* instss;
=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
};

#endif // LOGGEDADMIN_H
