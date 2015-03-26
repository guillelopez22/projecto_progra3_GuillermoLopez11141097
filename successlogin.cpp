#include "successlogin.h"
#include "ui_successlogin.h"
#include "empleado.h"

successlogin::successlogin(QWidget *parent, Empleado* empleado) :
    QDialog(parent),
    ui(new Ui::successlogin)
{
    ui->setupUi(this);
    this->empleado = empleado;
    ui->nombre->setText(QString::fromStdString(empleado->getNombre()));
}

successlogin::~successlogin()
{
    delete ui;
}
