#ifndef ADD_ADMIN_H
#define ADD_ADMIN_H

#include <QWidget>
#include <vector>
#include "empleado.h"
#include "instrumento.h"
using namespace std;
namespace Ui {
class add_admin;
}

class add_admin : public QWidget
{
    Q_OBJECT

public:
    explicit add_admin(QWidget *parent = 0, vector<Empleado*>* = 0);
    ~add_admin();

private:
    Ui::add_admin *ui;
    vector<Empleado*>* employees1;

};

#endif // ADD_ADMIN_H
