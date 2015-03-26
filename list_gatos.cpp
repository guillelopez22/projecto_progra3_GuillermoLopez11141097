#include "list_gatos.h"
#include "ui_list_gatos.h"
#include "gato.h"
#include <vector>
using std::vector;
list_gatos::list_gatos(QWidget *parent, vector<Empleado*>* ga) :
    QDialog(parent),
    ui(new Ui::list_gatos)
{
    ui->setupUi(this);
    empss=ga;
    for(int i=0; i < ga->size(); i++){
        if(ga->at(i)->getIdenti()==2){
            ui->asd->appendPlainText(QString::fromStdString(ga->at(i)->toString()));
        }
    }
}

list_gatos::~list_gatos()
{
    delete ui;
}
