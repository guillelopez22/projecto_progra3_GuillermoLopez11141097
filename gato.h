#ifndef GATO_H
#define GATO_H
#include"empleado.h"
#include <string>

class Gato: public Empleado{
    double horas_trabajadas;
public:
    Gato(unsigned int, string, string, string, double);
    Gato(const Gato&);
    virtual double getSueldo()const;
    virtual string toString() const;
    void setHoras(double);
    virtual int getIdenti()const;
    virtual void setTiempoTrabajando(unsigned int);
};

#endif // GATO_H
