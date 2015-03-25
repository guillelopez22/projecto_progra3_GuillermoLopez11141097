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
    explicit loggedadmin(QWidget *parent = 0, vector<Empleado*>* = 0);
    ~loggedadmin();

private:
    Ui::loggedadmin *ui;
    vector<Empleado*>* employee3;
};

#endif // LOGGEDADMIN_H
