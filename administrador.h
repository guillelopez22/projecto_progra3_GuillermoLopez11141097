#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include "empleado.h"
#include <vector>
#include <string>
using std::string;
using std::vector;


class Administrador: public Empleado{
    double bonus_payment, salary;

public:
    Administrador(unsigned int, string, string, string, double);
    Administrador(const Administrador&);
    virtual string toString() const;
    virtual double getSueldo()const;
    void setBonusPayment(double);
    void setSalary(double);
    virtual int getIdenti()const;
    virtual void setTiempoTrabajando(unsigned int);

};

#endif // ADMINISTRADOR_H
