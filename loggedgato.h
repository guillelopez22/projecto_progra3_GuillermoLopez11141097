#ifndef LOGGEDGATO_H
#define LOGGEDGATO_H

#include <QDialog>
#include <vector>
#include "empleado.h"
using std::vector;

namespace Ui {
class loggedgato;
}

class loggedgato : public QDialog
{
    Q_OBJECT

public:
    explicit loggedgato(QWidget *parent = 0, vector<Empleado*>* = 0, Empleado* = 0);
    ~loggedgato();

private slots:
    void on_pushButton_clicked();

private:
    Ui::loggedgato *ui;
    vector<Empleado*>* employee4;
    Empleado* Emp;
};

#endif // LOGGEDGATO_H
