#include "nuevogato.h"
#include "ui_nuevogato.h"

nuevogato::nuevogato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevogato)
{
    ui->setupUi(this);
}

nuevogato::~nuevogato()
{
    delete ui;
}
