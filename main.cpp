#include "mainwindow.h"
#include "empleado.h"
#include "administrador.h"
#include "gato.h"
#include "instrumento.h"
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
    gatitos.push_back(new Gato(222112,"Santa", "nieve", "123", 30.0));
    gatitos.push_back(new Gato(222113,"Sergio", "serg", "123", 30.0));
    list_emp->push_back(new Administrador(000000,"Carlos", "cp3", "123", 500.0));

    QApplication a(argc, argv);

    MainWindow w(0, list_emp);
    w.show();

    return a.exec();
}
