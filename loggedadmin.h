#ifndef LOGGEDADMIN_H
#define LOGGEDADMIN_H

#include <QDialog>
#include <vector>
#include "empleado.h"
using std::vector;

namespace Ui {
class loggedadmin;
}

class loggedadmin : public QDialog
{
    Q_OBJECT

public:
    explicit loggedadmin(QWidget *parent = 0, Empleado* = 0);
    ~loggedadmin();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::loggedadmin *ui;
    Empleado* ee;
};

#endif // LOGGEDADMIN_H
