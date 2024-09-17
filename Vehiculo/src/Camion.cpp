#include "Camion.h"
#include "Vehiculo.h"

Camion::Camion(){
}

void Camion::frenar(){
    cout <<"Estas frenando fuerte. shiii" << endl;
}
void Camion::acelerar(){
    cout << "Esta acelerando el camion." << endl;
}

void Camion::descargar(){
    cout << "Estas descargando los escombros." << endl;
}

int Camion::getCapacidda_carga(){
    return capacidad_carga;
}

void Camion::setCapacidad_carga(){
    cout << "Ingrese la capacidad de carga (toneladas): ";
    cin >> capacidad_carga;
}

void Camion::setInfo(){
    cout << "Datos del Camion." << endl;
    Vehiculo::setInfo();
    setCapacidad_carga();
}

void Camion::getInfo(string){
    Vehiculo::getInfo("CAMION");
    cout << "Capicidad de la carga del camion: " << getCapacidda_carga() << "t"<< endl;

    acelerar();
    frenar();
    descargar();

}
