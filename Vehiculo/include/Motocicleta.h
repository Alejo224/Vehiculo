#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H
#include <Vehiculo.h>


class Motocicleta:public Vehiculo
{
    public:
       //Atributos
       float kilometraje;

       //Meétodods
       Motocicleta();
       void picar_motocicleta();

       float getKilometraje();
       void setKilometraje();

       void getInfo(string)override;
       void setInfo()override;

       void acelerar()override;
       void frenar()override;

};

#endif // MOTOCICLETA_H
