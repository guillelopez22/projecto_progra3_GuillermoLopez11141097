#include "gato.h"
#include "empleado.h"
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;
using std::endl;
Gato::Gato(unsigned int id, string nombre, string username, string password, double horas_trabajadas):Empleado(id,nombre,username,password), horas_trabajadas(horas_trabajadas){

}

Gato::Gato(const Gato& gato):Empleado(gato), horas_trabajadas(gato.horas_trabajadas){

}

double Gato::getSueldo()const{
    return (tiempo_trabajando+horas_trabajadas)*100;
}
string Gato::toString() const{
    stringstream ss;
    ss << Empleado::toString() << "Horas trabajadas: " << horas_trabajadas << endl
          << "Sueldo: " << Gato::getSueldo();
    return ss.str();
}
void Gato::setHoras(double horas_trabajadas){
    this->horas_trabajadas = horas_trabajadas;
}
int Gato::getIdenti()const{
    return 2;
}
void Gato::setTiempoTrabajando(unsigned int tiempo_trabajando){
    this->tiempo_trabajando = tiempo_trabajando;
}
