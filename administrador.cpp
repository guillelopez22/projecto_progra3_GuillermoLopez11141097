#include "administrador.h"
#include <string>
#include "empleado.h"
#include <sstream>
#include <vector>
#include <iostream>
using std::string;
using std::stringstream;
using std::vector;
using std::endl;

Administrador::Administrador(unsigned int id, string nombre, string username, string password, double bonus_payment):Empleado(id, nombre, username, password), bonus_payment(bonus_payment){

}

Administrador::Administrador(const Administrador& admin):Empleado(admin), bonus_payment(admin.bonus_payment){

}

string Administrador::toString() const{
    stringstream ss;
    ss << Empleado::toString() << endl <<
          "Salario: " << getSueldo() << endl
          << "Gatos: " << endl;

    return ss.str();
}
double Administrador::getSueldo()const{
    return (salary+bonus_payment)*tiempo_trabajando;
}

void Administrador::setBonusPayment(double bonus_payment){
    this->bonus_payment = bonus_payment;
}


void Administrador::setSalary(double salary){
    this->salary = salary;
}


int Administrador::getIdenti()const{
    return 1;
}
void Administrador::setTiempoTrabajando(unsigned int tiempo_trabajando){
    this->tiempo_trabajando = tiempo_trabajando;
}
