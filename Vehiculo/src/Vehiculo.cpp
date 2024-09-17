#include "Vehiculo.h"
#include <iostream>
#include <cctype> // Para toupper() Espara poner palabras en mayúscula
using namespace std;

Vehiculo::Vehiculo(){}

void Vehiculo::acelerar(){
    cout <<"Está acelerando";
}

void Vehiculo::frenar(){
    cout <<"Está frenando";
}
//SET Y GET DE MARCA
string Vehiculo::getMarca(){
    return marca;
}
void Vehiculo::setMarca(){
    fflush(stdin);
    cout<<"Ingrese la marca: ";
    //cin.ignore();
    getline(cin,marca);
}
//SET Y GET DE MODELO
string Vehiculo::getModelo(){
    return modelo;
}
void Vehiculo::setModelo(){
    fflush(stdin);
    cout<<"Ingrese el modelo: ";
    getline(cin,modelo);
}
//SET Y GET DE PRECIO
float Vehiculo::getPrecio(){
    return precio;
}
void Vehiculo::setPrecio(){
    cout<<"Ingrese el precio: ";
    cin >> precio;
}
void Vehiculo::presentacion(string nombre){
    string n = nombre;
    cout<<"\n*********"<<n<<"***********"<< "\t"<<endl;
}


void Vehiculo::getInfo(string nombre){
    cout <<"\n*******INFORMACION DEL " << nombre<< "*******\t"<< endl;
    cout <<"Marca (" << nombre << "): " <<getMarca() << endl;
    cout <<"Modelo (" << nombre << "): "<<getModelo()<< endl;
    cout <<"Precio (" << nombre << "): " <<getPrecio()<< endl;




}

//    int opcion;
//    switch(opcion){
//    case 1:
//        acelerar();
//        break;
//    case 2:
//        frenar();
//        break;
//    }
//    return opcion;
//
//}
//
//void Vehiculo::setMenu(){
//    cout << "\nMENU"<< endl;
//    cout << "<1>Acelerar.\n<2>Frenar";
//    cout<<"\nIngrese la opcion: ";
//
//    cin >> getMenu();
//}

void Vehiculo::setInfo(){
    setMarca();
    setModelo();
    setPrecio();

}

