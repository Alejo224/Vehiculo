#include "Avion.h"
#include "Vehiculo.h"

Avion::Avion()
{
}
void Avion::frenar()
{
    cout << "Esta aterrizando el Avion" << endl;
}
void Avion::acelerar()
{
    cout << "Esta despegando el Avion." << endl;
}

void Avion::encerderMotores()
{
    cout<< "Motores encendido. woooo..." << endl;
}
//void Avion::despegar(){
//    cout << "Esta despegando.";
//}
//
//void Avion::aterrizar(){
//    cout << "Esta aterrizando";
//}

int Avion::getnumeroMotores()
{
    return numeroMotores;
}
void Avion::setnumeroMotores()
{
    cout << "Ingrese el numero de motores: ";
    cin >> numeroMotores;
}

int Avion::getPasajeros()
{
    return capacidadPasajeros;
}
void Avion::setPasajeros()
{
    cout << "Ingrese el total de pasajeros: ";
    cin >> capacidadPasajeros;
}

void Avion::setInfo()
{
    cout << "Datos del Avion" << endl;
    Vehiculo::setInfo();
    setnumeroMotores();
    setPasajeros();

}

void Avion::getInfo(string)
{
    Vehiculo::getInfo("AVION");
    cout << "numero de motores del Avion: " << getnumeroMotores()<< endl;
    cout << "numero total de pasajeros en el Avion: " << getPasajeros()<< endl;
    cout << "--------------------------------------"<<endl;
    encerderMotores();
    acelerar();
    frenar();
}
