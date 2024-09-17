#ifndef CAMION_H
#define CAMION_H
#include <Vehiculo.h>
#include <iostream>



class Camion:public Vehiculo
{
public:

    //atributos
    int capacidad_carga;

    //métodos
    Camion();
    void descargar();


    int getCapacidda_carga();
    void setCapacidad_carga();

    void getInfo(string)override;
    void setInfo()override;

    void acelerar()override;
    void frenar()override;


};

#endif // CAMION_H
