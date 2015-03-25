#include "cuerdas.h"
#include <string>
#include <sstream>
#include <iostream>
using std::endl;
using std::string;
using std::stringstream;

Cuerdas::Cuerdas(string nombre, string marca, unsigned int num_cuerdas):Instrumento(nombre), marca(marca), num_cuerdas(num_cuerdas){
    
}

Cuerdas::Cuerdas(const Cuerdas& cuerdas):Instrumento(cuerdas), marca(cuerdas.marca), num_cuerdas(cuerdas.num_cuerdas){
    
}

void Cuerdas::setMarca(string marca){
    this->marca = marca;
}

string Cuerdas::getMarca(){
    return marca;
}

void Cuerdas::setNumCuerdas(unsigned int num_cuerdas){
    this->num_cuerdas = num_cuerdas;
}

string Cuerdas::toString()const{
    stringstream ss;
    ss << Instrumento::toString() << endl <<
        "Marca: " << marca << endl <<
          "Numero de cuerdas: " << num_cuerdas << endl;
    return ss.str();
}
double Cuerdas::getPrecio()const{
    return num_cuerdas*100;
}
int Cuerdas::getTip()const{
    return 1;
}
