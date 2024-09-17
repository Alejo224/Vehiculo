#ifndef AVION_H
#define AVION_H
#include <Vehiculo.h>

class Avion: public Vehiculo
{
public:
    //atributos
    int capacidadPasajeros;
    int numeroMotores;

    //metodos
    Avion();
    void encerderMotores();
//    void despegar();
//    void aterrizar();


    //get y set
    int getPasajeros();
    void setPasajeros();

    int getnumeroMotores();
    void setnumeroMotores();

    //polimorfismo
    void getInfo(string)override;
    void setInfo()override;

    void acelerar()override;
    void frenar()override;

};

#endif // AVION_H
