#include "add_admin.h"
#include "ui_add_admin.h"
#include <vector>
#include "empleado.h"
#include "instrumento.h"


add_admin::add_admin(QWidget *parent, vector<Empleado*>* empleados1) :
    QWidget(parent),
    ui(new Ui::add_admin)
{
    ui->setupUi(this);
    employees1 = empleados1;

}

add_admin::~add_admin()
{
    delete ui;
}
