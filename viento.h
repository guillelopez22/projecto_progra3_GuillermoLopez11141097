#ifndef VIENTO_H
#define VIENTO_H

#include "instrumento.h"
class Viento: public Instrumento{
    string tipo;
public:
    Viento(string, string);
    Viento(const Viento&);
    void setTipo(string);
    virtual string toString() const;
    virtual double getPrecio() const;
    virtual int getTip()const;
};

#endif // VIENTO_H
