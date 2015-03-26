#include "loggedadmin.h"
#include "ui_loggedadmin.h"
#include <vector>
#include "empleado.h"
#include "miestado.h"
#include "ui_miestado.h"
#include "gatocontrol.h"
using std::vector;

loggedadmin::loggedadmin(QWidget *parent, Empleado* empleadoo, vector<Empleado*>* emps) :
    QDialog(parent),
    ui(new Ui::loggedadmin)
{
    ui->setupUi(this);
    ee=empleadoo;
    todos=emps;
    ui->admin->setText(QString::fromStdString(ee->getNombre()));
}

loggedadmin::~loggedadmin()
{
    delete ui;
}

void loggedadmin::on_pushButton_4_clicked()
{
    miestado diag(this, ee);
    diag.setModal(true);
    diag.exec();
}

void loggedadmin::on_pushButton_clicked()
{
    gatocontrol diag(this, todos);
    diag.setModal(true);
    diag.exec();
}
