#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_adding_admin.h"
#include "errorlogin.h"
#include "error.h"
#include "adding_admin.h"
#include "empleado.h"
#include "instrumento.h"
#include "viento.h"
#include "cuerdas.h"
#include "percusion.h"
#include "add_gato.h"
#include "loggedadmin.h"
#include "successlogin.h"
#include "loggedgato.h"
#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::vector;
using std::string;

MainWindow::MainWindow(QWidget *parent, vector<Empleado*>* empleados, vector<Instrumento*>* instrumentos) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    employee = empleados;
    instruments = instrumentos;

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    if(employee->size()==0){
        error diag(this);
        diag.setModal(true);
        diag.exec();
    }else{
        adding_admin diag(this, employee);
        diag.setModal(true);
        diag.exec();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    add_gato diag(this, employee);
    diag.setModal(true);
    diag.exec();
}

void MainWindow::on_pushButton_clicked()
{
    string user, pass;
    Empleado* asd;

    QString p, r;
    p=ui->line_user->text();
    user=p.toStdString();
    r=ui->line_pass->text();
    int identi;
    pass=r.toStdString();
    int eval;
    eval=0;
    for(int i=0; i < employee->size(); i++){
        if(employee->at(i)->getUser()==user && employee->at(i)->getPass()==pass && employee->at(i)->getIdenti()==1){
            asd=employee->at(i);
            successlogin asda(this, asd);
            asda.setModal(true);
            asda.exec();
            loggedadmin diag(this, asd, employee);
            diag.setModal(true);
            diag.exec();
            eval=1;

        }else if(employee->at(i)->getUser()==user && employee->at(i)->getPass()==pass && employee->at(i)->getIdenti()==2){
            asd=employee->at(i);
            successlogin asda(this, asd);
            asda.setModal(true);
            asda.exec();
            loggedgato diag(this, employee, asd);
            diag.setModal(true);
            diag.exec();

            eval=1;
        }
    }
    if(eval==0){
        errorlogin diag(this);
        diag.setModal(true);
        diag.exec();
    }
    ui->line_pass->setText(QString(""));
    ui->line_user->setText(QString(""));


}
