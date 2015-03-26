#include "mainwindow.h"
#include "empleado.h"
#include "administrador.h"
#include "gato.h"
#include "instrumento.h"
<<<<<<< HEAD
#include "percusion.h"
#include "cuerdas.h"
#include "viento.h"
=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
#include <vector>
#include <string>
#include <QApplication>
using namespace std;
int main(int argc, char *argv[])
{

    vector<Empleado*>* list_emp = new vector<Empleado*>();
    vector<Instrumento*>* list_inst = new vector<Instrumento*>();

    vector<Empleado*> gatitos;
    list_emp->push_back(new Gato(222111,"Pedro", "pica", "123", 30.0));
    list_emp->at(0)->setHoras(30);
<<<<<<< HEAD
    list_inst->push_back(new Percusion("Tambor", 3, 2));
=======

>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
    list_emp->push_back(new Administrador(110001,"Carlos", "cp3", "123", 500.0));
    list_emp->push_back(new Gato(222112,"Santa", "nieve", "123", 30.0));
    list_emp->push_back(new Gato(222113,"Sergio", "serg", "123", 30.0));
    list_emp->at(1)->setHoras(99);


    QApplication a(argc, argv);

<<<<<<< HEAD
    MainWindow w(0, list_emp, list_inst);
=======
    MainWindow w(0, list_emp);
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
    w.show();

    return a.exec();
}
