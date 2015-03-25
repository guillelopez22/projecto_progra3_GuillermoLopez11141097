#include "instrumento.h"
#include <iostream>
#include <string>
#include <sstream>

using std::endl;
using std::string;
using std::stringstream;

Instrumento::Instrumento(string nombre){

}


void Instrumento::setNombre(string nombre){
    this->nombre = nombre;
}

string Instrumento::getNombre(){
    return nombre;
}

string Instrumento::toString()const{
    stringstream ss;
    ss << "Nombre: " << nombre << endl;
}
