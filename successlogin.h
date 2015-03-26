#ifndef SUCCESSLOGIN_H
#define SUCCESSLOGIN_H
#include "empleado.h"
#include <QDialog>

namespace Ui {
class successlogin;
}

class successlogin : public QDialog
{
    Q_OBJECT

public:
    explicit successlogin(QWidget *parent = 0, Empleado* = 0);
    ~successlogin();

private:
    Ui::successlogin *ui;
    Empleado* empleado;
};

#endif // SUCCESSLOGIN_H
