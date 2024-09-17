#include <iostream>

#ifndef VEHICULO_H
#define VEHICULO_H
using namespace std;

class Vehiculo
{
public:
    //atributos
    string marca;
    string modelo;
    float precio;

    //métodos
    Vehiculo();

//    int getMenu();
//    void setMenu();

    virtual void acelerar();
    virtual void frenar();
    void presentacion(string);

    string getMarca();
    string getModelo();
    float getPrecio();

    void setMarca();
    void setModelo();
    void setPrecio();

    virtual void getInfo(string);
    virtual void setInfo();


};

#endif // VEHICULO_H
