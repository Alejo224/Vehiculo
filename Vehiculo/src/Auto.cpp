#include "Auto.h"
#include "Vehiculo.h"

Auto::Auto(){

}
void Auto::frenar(){
    cout <<"Haz dejado de pizar el acelerador, esta frenando" << endl;
}
void Auto::acelerar(){
    cout << "Esta acelerando el Auto. bububu" << endl;
}

void Auto::abrir_cajuela(){
    cout << "Haz abierto la cajuela" << endl;
}

int Auto::getCantidad_de_puertas(){
    return cantidad_de_puertas;
}

void Auto::setCantidad_de_puertas(){
    cout << "Ingrese la cantidad de puertas del auto: ";
    cin >> cantidad_de_puertas;
}


void Auto::setInfo(){
    cout <<"Datos del Auto" <<endl;
    Vehiculo::setInfo();
    setCantidad_de_puertas();


}
void Auto::getInfo(string ){
    Vehiculo::getInfo("AUTO");
    cout << "Cantidad de puertas del Auto: " << getCantidad_de_puertas() << endl;
    cout << "--------------------------------------"<<endl;
    abrir_cajuela();
    acelerar();
    frenar();

}
