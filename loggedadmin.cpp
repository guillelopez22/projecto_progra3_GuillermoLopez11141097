#include "loggedadmin.h"
#include "ui_loggedadmin.h"
#include <vector>
#include "empleado.h"
using std::vector;

loggedadmin::loggedadmin(QWidget *parent, vector<Empleado*>* empleado3) :
    QDialog(parent),
    ui(new Ui::loggedadmin)
{
    ui->setupUi(this);
    employee3=empleado3;
}

loggedadmin::~loggedadmin()
{
    delete ui;
}
