#include "adding_admin.h"
#include "ui_adding_admin.h"
#include "instrumento.h"
#include "empleado.h"
#include "administrador.h"
#include  "gato.h"
#include <string>
using std::vector;
using std::string;

adding_admin::adding_admin(QWidget *parent, vector<Empleado*>* empleado1) :
    QDialog(parent),
    ui(new Ui::adding_admin)
{
    ui->setupUi(this);
    employee1 = empleado1;


}

adding_admin::~adding_admin()
{
    delete ui;
}

void adding_admin::on_pushButton_2_clicked()
{
    QString p;
    string nombre, usuario, password;
    unsigned int id;
    double bonus;
    vector<Empleado*> gat;
    id=ui->sp_id->value();
    p=ui->line_nombre->text();
    nombre=p.toStdString();
    p=ui->line_usuario->text();
    usuario=p.toStdString();
    p=ui->line_password->text();
    password= p.toStdString();
    bonus=ui->sp_bonus->value();
    employee1->push_back(new Administrador(id, nombre, usuario, password, bonus));
<<<<<<< HEAD
    employee1->at(employee1->size()-1)->setTiempoTrabajando(0);
=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
    ui->line_nombre->setText(QString(""));
    ui->line_password->setText(QString(""));
    ui->line_usuario->setText(QString(""));
    ui->sp_id->setValue(0);
    ui->sp_bonus->setValue(0.0);

}

void adding_admin::on_pushButton_clicked()
{

}
