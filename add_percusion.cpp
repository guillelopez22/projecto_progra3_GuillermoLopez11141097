#include "add_percusion.h"
#include "ui_add_percusion.h"
#include "percusion.h"
#include <vector>
#include "instrumento.h"
#include <string>
using std::vector;
using std::string;
add_percusion::add_percusion(QWidget *parent, vector<Instrumento*>* instrumentos) :
    QDialog(parent),
    ui(new Ui::add_percusion)
{
    ui->setupUi(this);
    music=instrumentos;
}

add_percusion::~add_percusion()
{
    delete ui;
}

void add_percusion::on_pushButton_clicked()
{
    unsigned int timbres, tamano;
    QString nombre;
    string nom;
    nombre=ui->nombre->text();
    nom=nombre.toStdString();
    timbres=ui->timbres->value();
    tamano= ui->tamano->value();
    usic->push_back(new Percusion(nom, timbres, tamano));
    ui->nombre->setText(QString(""));
    ui->tamano->setValue(0);
    ui->timbres->setValue(0);

}
