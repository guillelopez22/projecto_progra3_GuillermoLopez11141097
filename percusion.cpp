#include "percusion.h"
#include "instrumento.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;
using std::endl;
Percusion::Percusion(string nombre, unsigned int num_timbres, unsigned int tamano):Instrumento(nombre), num_timbres(num_timbres), tamano(tamano){

}

Percusion::Percusion(const Percusion& percusion):Instrumento(percusion), num_timbres(percusion.num_timbres), tamano(percusion.tamano){

}

void Percusion::setTimbres(unsigned int num_timbres){
    this->num_timbres = num_timbres;
}

void Percusion::setTamano(unsigned int tamano){
    this->tamano = tamano;
}

string Percusion::toString() const{
    stringstream ss;
    ss << Instrumento::toString() << "Numero de Timbres: " << num_timbres << endl
       << "tamano: " << tamano << endl;
    return ss.str();
}
double Percusion::getPrecio()const{
    return (num_timbres+tamano)*100;
}
int Percusion::getTip()const{
    return 2;
}
