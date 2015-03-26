#include "loggedadmin.h"
#include "ui_loggedadmin.h"
#include <vector>
#include "empleado.h"
#include "miestado.h"
#include "ui_miestado.h"
#include "gatocontrol.h"
#include "add_instrumento.h"
#include "adding_admin.h"
#include "list_gatos.h"
using std::vector;

loggedadmin::loggedadmin(QWidget *parent, Empleado* empleadoo, vector<Empleado*>* emps, vector<Instrumento*>* inst) :
    QDialog(parent),
    ui(new Ui::loggedadmin)
{
    ui->setupUi(this);
    ee=empleadoo;
    todos=emps;
    ui->admin->setText(QString::fromStdString(ee->getNombre()));
    instss=inst;
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

void loggedadmin::on_pushButton_2_clicked()
{
    list_gatos diag(this, todos);
    diag.setModal(true);
    diag.exec();
}

void loggedadmin::on_pushButton_3_clicked()
{
    adding_admin diag(this, todos);
    diag.setModal(true);
    diag.exec();
}
