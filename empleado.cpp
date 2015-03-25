#include "empleado.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;
using std::endl;


Empleado::Empleado(unsigned int id, string nombre, string username, string password):id(id), nombre(nombre), username(username), password(password){

}



void Empleado::setNombre(string nombre){
    this->nombre = nombre;
}

void Empleado::setUser(string username){
    this->username = username;
}

void Empleado::setPassword(string password){
    this->password = password;
}
void Empleado::setID(unsigned int id){
    this->id = id;
}

string Empleado::toString()const{
    stringstream ss;
    ss << "Nombre: " << nombre << endl
       << "Usuario: "<< username << endl
       << "ID: " << id << endl;
    return ss.str();

}
string Empleado::getNombre()const{
    return nombre;
}
unsigned int Empleado::getID(){
    return id;
}
int Empleado::getIdenti()const{
    return 0;
}
double Empleado::getPrestaciones(){
    return tiempo_trabajando*12;
}
void Empleado::setTiempoTrabajando(unsigned int tiempo_trabajando){
    this->tiempo_trabajando = tiempo_trabajando;
}
string Empleado::getUser()const{
    return username;
}
string Empleado::getPass()const{
    return password;
}
