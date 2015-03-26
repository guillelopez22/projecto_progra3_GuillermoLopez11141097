#include "gatocontrol.h"
#include "ui_gatocontrol.h"
#include "empleado.h"
<<<<<<< HEAD
#include "add_gato.h"
=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
#include <vector>

using std::vector;

gatocontrol::gatocontrol(QWidget *parent, vector<Empleado*>* gatos) :
    QDialog(parent),
    ui(new Ui::gatocontrol)
{
    ui->setupUi(this);
    gat=gatos;
    for(int i=0; i<gat->size(); i++){
        if(gat->at(i)->getIdenti()==2)
        ui->empleaditos->addItem(QString::fromStdString(gat->at(i)->getUser()));
    }
}

gatocontrol::~gatocontrol()
{
    delete ui;
}

void gatocontrol::on_empleaditos_currentIndexChanged(const QString &arg1)
{
<<<<<<< HEAD
    ui->datitos->clear();
=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
    Empleado* temp;
    for(int i=0; i<gat->size(); i++){
        if(gat->at(i)->getUser() == ui->empleaditos->currentText().toStdString())
            temp = gat->at(i);
    }
    ui->datitos->appendPlainText(QString::fromStdString(temp->toString()));
}
<<<<<<< HEAD

void gatocontrol::on_pushButton_2_clicked()
{
    add_gato diag(this, gat);
    diag.setModal(true);
    diag.exec();
}


=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
