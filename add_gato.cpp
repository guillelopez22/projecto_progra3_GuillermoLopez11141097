#include "add_gato.h"
#include "ui_add_gato.h"
<<<<<<< HEAD
#include "ui_gatocontrol.h"
#include "gatocontrol.h"
=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
#include "gato.h"

add_gato::add_gato(QWidget *parent, vector<Empleado*>* empleado2) :
    QDialog(parent),
    ui(new Ui::add_gato)
{
    ui->setupUi(this);
    employee2 = empleado2;

<<<<<<< HEAD

=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
}

add_gato::~add_gato()
{
    delete ui;
}

void add_gato::on_pushButton_2_clicked()
{
    QString p, q, r;
    string nombre, usuario, password;
    unsigned int id;
    double horas;
<<<<<<< HEAD

=======
    vector<Empleado*> gat;
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
    id=ui->sp_id->value();
    p=ui->line_nombre->text();
    nombre=p.toStdString();
    q=ui->line_usuario->text();
    usuario=q.toStdString();
    r=ui->line_password->text();
    password= r.toStdString();
    horas=ui->sp_horas->value();
    employee2->push_back(new Gato(id, nombre, usuario, password, horas));
    ui->line_nombre->setText(QString(""));
    ui->line_password->setText(QString(""));
    ui->line_usuario->setText(QString(""));
    ui->sp_id->setValue(0);
    ui->sp_horas->setValue(0.0);
<<<<<<< HEAD



=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
}
