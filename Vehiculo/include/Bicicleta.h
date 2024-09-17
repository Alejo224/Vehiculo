#ifndef BICICLETA_H
#define BICICLETA_H
#include <Vehiculo.h>

class Bicicleta: public Vehiculo
{
public:
    //atributos
    string tipoBici;
    int tamanoRueda;

    //metodos
    Bicicleta();

    void cambiarVelocidad();

    //GET Y SET
    string getTipoBici();
    void setTipoBici();

    int getTamanoRueda();
    void setTamanoRueda();

    void getInfo(string)override;
    void setInfo()override;

    void acelerar()override;
    void frenar()override;

};

#endif // BICICLETA_H
