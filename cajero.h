#ifndef CAJERO_H
#define CAJERO_H

class Cajero: public Empleado{
    double comision;
public:
    Cajero(unsigned int, string, string, string, double);
    void setComision(double);
    virtual string toString();
    virtual double getSueldo();
};

#endif // CAJERO_H
