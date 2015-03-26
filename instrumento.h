#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H


#include <string>

using std::string;

class Instrumento{
    string nombre;
public:
    Instrumento(string);

    void setNombre(string);
    string getNombre();
    virtual string toString()const;
    virtual double getPrecio()const=0;

};
#endif // INSTRUMENTO_H
