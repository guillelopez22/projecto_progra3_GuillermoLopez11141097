#include "loggedgato.h"
#include "ui_loggedgato.h"

loggedgato::loggedgato(QWidget *parent, vector<Empleado*>* empleado4, Empleado* emp) :
    QDialog(parent),
    ui(new Ui::loggedgato)
{
    ui->setupUi(this);
    employee4=empleado4;
    Emp=emp;
    ui->gato->setText(QString::fromStdString(Emp->getNombre()));

}

loggedgato::~loggedgato()
{
    delete ui;
}
