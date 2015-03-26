#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using std::string;

class Empleado{
    unsigned int id;
    string nombre, username, password;


public:
    unsigned int tiempo_trabajando;
    Empleado(unsigned int, string, string, string);

    void setNombre(string);
    void setUser(string);
    void setPassword(string);
    void setID(unsigned int);
    void setHoras(unsigned int);
    virtual double getPrestaciones();
    virtual double getSueldo()const=0;
    virtual string toString()const;
    virtual int getIdenti()const;
    string getNombre()const;
    string getUser()const;
    string getPass()const;
    virtual void setTiempoTrabajando(unsigned int);
    unsigned int getID();
};

#endif // EMPLEADO_H
