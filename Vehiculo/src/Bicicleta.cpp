#include "Bicicleta.h"
#include "Vehiculo.h"
#include <iostream>
using namespace std;

Bicicleta::Bicicleta()
{
    //ctor
}

void Bicicleta::frenar()
{
    cout <<"Est frenando tan fuerte que la llanta trasera se levanto." << endl;
}
void Bicicleta::acelerar()
{
    cout << "Estas pedaleando en la cicla" << endl;
}

void Bicicleta::cambiarVelocidad()
{
    cout << "Haz cambiado de velocidad" << endl;
}

string Bicicleta::getTipoBici()
{
    return tipoBici;
}

void Bicicleta::setTipoBici()
{
    fflush(stdin);
    cout <<"Tipo de Bicicleta (carretera,hibrida,etc): ";
    getline(cin,tipoBici);
}

int Bicicleta::getTamanoRueda()
{
    return tamanoRueda;
}

void Bicicleta::setTamanoRueda()
{
    cout << "El tamano de las tuedas (pulgadas): ";
    cin >> tamanoRueda;
}

void Bicicleta::setInfo()
{
    //OBTENER LOS DATOS DE LA BICILETA
    cout << "Datos de la Bicicleta" << endl;
    Vehiculo::setInfo();
    setTipoBici();
    setTamanoRueda();
}

void Bicicleta::getInfo(string)
{
    //MOSTRAR LA INFORMACION
    Vehiculo::getInfo("BICILETA");
    cout << "Tipo de la bicicleta: " << getTipoBici()<< endl;
    cout << "Tamano de la rueda: " << getTamanoRueda()<< "(Pulgadas)" <<endl;
    cout << "--------------------------------------"<<endl;
    acelerar();
    cambiarVelocidad();
    frenar();

}
