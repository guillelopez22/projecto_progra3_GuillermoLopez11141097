#ifndef CUERDAS_H
#define CUERDAS_H

#include "instrumento.h"
#include <string>

using std::string;

class Cuerdas: public Instrumento{
    unsigned int num_cuerdas;
    string marca;
public:
    Cuerdas(string, string, unsigned int);
    Cuerdas(const Cuerdas&);
    void setMarca(string);
    string getMarca();
    void setNumCuerdas(unsigned int);
    virtual string toString()const;
    virtual double getPrecio()const;
    virtual int getTip()const;
};

#endif // CUERDAS_H
