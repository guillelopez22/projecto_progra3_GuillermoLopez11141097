#include "miestado.h"
#include "ui_miestado.h"

miestado::miestado(QWidget *parent, Empleado* me) :
    QDialog(parent),
    ui(new Ui::miestado)
{
    ui->setupUi(this);
    yo=me;
    ui->miestado_2->appendPlainText(QString::fromStdString(yo->toString()));
}

miestado::~miestado()
{
    delete ui;
}

void miestado::on_pushButton_clicked()
{
    this->close();
}
