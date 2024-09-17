#ifndef AUTO_H
#define AUTO_H
#include <Vehiculo.h>

class Auto:public Vehiculo
{
    public:
       //Atributos
       int cantidad_de_puertas;

       //Meétodods
       Auto();

       void abrir_cajuela();

       int getCantidad_de_puertas();
       void setCantidad_de_puertas();

       void getInfo(string)override;
       void setInfo()override;

       void acelerar()override;
       void frenar()override;


};

#endif // AUTO_H
