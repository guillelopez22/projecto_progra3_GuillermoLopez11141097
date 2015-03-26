#ifndef PERCUSION_H
#define PERCUSION_H

#include "instrumento.h"
#include <string>

using std::string;

class Percusion: public Instrumento{
    unsigned int num_timbres, tamano;
public:
    Percusion(string, unsigned int, unsigned int);
    Percusion(const Percusion&);
    void setTimbres(unsigned int);
    void setTamano(unsigned int);
    virtual string toString() const;
    virtual double getPrecio()const;
    virtual int getTip()const;
};

#endif // PERCUSION_H
