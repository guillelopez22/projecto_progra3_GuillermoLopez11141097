#ifndef MIESTADO_H
#define MIESTADO_H

#include <QDialog>
#include "empleado.h"

namespace Ui {
class miestado;
}

class miestado : public QDialog
{
    Q_OBJECT

public:
    explicit miestado(QWidget *parent = 0, Empleado* = 0);
    ~miestado();

private slots:
    void on_pushButton_clicked();

private:
    Ui::miestado *ui;
    Empleado* yo;
};

#endif // MIESTADO_H
