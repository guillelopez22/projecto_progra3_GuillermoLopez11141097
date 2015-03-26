#include "add_instrumento.h"
#include "ui_add_instrumento.h"


add_instrumento::add_instrumento(QWidget *parent, vector<Instrumento*>* instu) :
    QDialog(parent),
    ui(new Ui::add_instrumento)
{
    ui->setupUi(this);
    inst=instu;
}

add_instrumento::~add_instrumento()
{
    delete ui;
}

void add_instrumento::on_comboBox_currentIndexChanged(int index)
{

}


