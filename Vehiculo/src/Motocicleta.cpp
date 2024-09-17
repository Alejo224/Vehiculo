#include "Motocicleta.h"
#include "Vehiculo.h"
Motocicleta::Motocicleta(){

}

//void Auto::abrir_cajuela(){
//    cout << "Haz abierta la cajuela";
//}
void Motocicleta::frenar(){
    cout <<"Esta derrapando la moto por frenar fuerte. ww" << endl;
}
void Motocicleta::acelerar(){
    cout << "Esta acelerando la Motocicleta, run run." << endl;
}

void Motocicleta::picar_motocicleta(){
    cout << "Estas haciendo stun en la moto." << endl;
}

float Motocicleta::getKilometraje(){
    return kilometraje;
}

void Motocicleta::setKilometraje(){
    cout << "Ingrese la cantidad de kilometros de la Motocicleta: ";
    cin >> kilometraje;
}

void Motocicleta::setInfo(){
    cout <<"Datos de la Motocicleta"<< endl;
    Vehiculo::setInfo();
    setKilometraje();
}

void Motocicleta::getInfo(string){
    //mostrar informacion
    Vehiculo::getInfo("MOTOCICLETA");
    cout << ("Kilometraje de la Motocicleta: ") << getKilometraje() << endl;
    cout << "--------------------------------------"<<endl;
    acelerar();
    picar_motocicleta();
    frenar();

}

