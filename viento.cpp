#include "viento.h"
#include "instrumento.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;
using std::endl;

Viento::Viento(string nombre, string tipo):Instrumento(nombre), tipo(tipo){

}

Viento::Viento(const Viento& viento):Instrumento(viento), tipo(viento.tipo){

}

void Viento::setTipo(string tipo){
    this->tipo = tipo;
}

string Viento::toString() const{
    stringstream ss;
    ss << Instrumento::toString() << "Tipo: " << tipo << endl;
}
double Viento::getPrecio() const{
    if(tipo == "metal"){
        return 1500.0;
    }else if(tipo == "madera"){
        return 1000.0;
    }else{
        return 0.0;
    }
}
int Viento::getTip()const{
    return 3;
}
