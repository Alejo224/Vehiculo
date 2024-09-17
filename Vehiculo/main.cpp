/*
JOHAN ALEJANDRO ANGULO TORRES
Creación de un sistema de Vehiculo que esta orientado a objetos

*/
#include <vector>
#include <memory>

#include <Vehiculo.h>
#include <Auto.h>
#include <Motocicleta.h>
#include <Camion.h>
#include <Avion.h>
#include <Bicicleta.h>

#include <iostream>
#include <string>


using namespace std;

int main()
{

    vector<shared_ptr<Vehiculo>> vehiculos;  // Vector que almacenará punteros compartidos de Vehiculo

    while(true)
    {
        cout <<"-----------------TIPOS DE VEHICULOS-----------------" << endl;
        cout <<"<0>Salir\n<1>Auto.\n<2>Motocicleta.\n<3>Camion.\n<4>Bicicleta.\n<5>Avion"<< endl;
        cout <<"Ingrese una opcion(del 0 - 4)"<< endl;
        int opcion= 0;

        cin >> opcion;

        if (opcion == 0)
        {
            cout << "Saliendo..." << endl;
            break;  // Termina el ciclo para salir del programa
        }

        else if (opcion == 1)
        {
            shared_ptr<Auto> autoPtr = make_shared<Auto>();
            autoPtr->presentacion("AUTO");
            autoPtr->setInfo();
            autoPtr->getInfo("auto");
            vehiculos.push_back(autoPtr);  // Agrega al vector
            cout << endl;
            cout << endl;
        }
        else if(opcion==2){
            shared_ptr<Motocicleta> motocicletaPtr = make_shared<Motocicleta>();
            motocicletaPtr->presentacion("Motocicleta");
            motocicletaPtr->setInfo();
            motocicletaPtr->getInfo("");
            vehiculos.push_back(motocicletaPtr);  // Agrega al vector
            cout << endl;
            cout << endl;
        }
        else if(opcion==3){
            shared_ptr<Camion> CamionPtr = make_shared<Camion>();
            CamionPtr->presentacion("Camion");
            CamionPtr->setInfo();
            CamionPtr->getInfo("Camion");
            vehiculos.push_back(CamionPtr);  // Agrega al vector
            cout << endl;
            cout << endl;
        }

        else if(opcion==4){
            shared_ptr<Bicicleta> BicicletaPtr = make_shared<Bicicleta>();
            BicicletaPtr->presentacion("Bicicleta");
            BicicletaPtr->setInfo();
            BicicletaPtr->getInfo("Bicicleta");
            vehiculos.push_back(BicicletaPtr);  // Agrega al vector
            cout << endl;
            cout << endl;
        }

        else if(opcion==5){
            shared_ptr<Avion> AvionPtr = make_shared<Avion>();
            AvionPtr->presentacion("Avion");
            AvionPtr->setInfo();
            AvionPtr->getInfo("Avion");
            vehiculos.push_back(AvionPtr);  // Agrega al vector
            cout << endl;
            cout << endl;
        }

        else
        {
            cout << "Por favor elija en numero <1 - 5>";
            cout << endl;
        }



    }



}
