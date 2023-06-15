#include "SensorTemperatura.h"
#include "Dashboard.h"
#include "Excepcion.h"

SensorTemperatura::SensorTemperatura(){}

int SensorTemperatura::entrarMenuSensorTemperatura(){
    system("clear");
    int accion;
    bool valid_input = false;
    while (!valid_input) {
        system("clear");
        try{
            cout << "1. DATOS" << endl;
            cout << "2. VOLVER" << endl << endl;
            cout << "SELECCIONE UNA OPCIÓN (1-2): ";
            if (cin >> accion) {
                if(accion >= 1 && accion <= 2){
                    valid_input = true;
                } else {
                    throw Excepcion("\nERROR, ");
                }
            } else {
                throw Excepcion("\nERROR, ");
            }
        } catch(const Excepcion& e){
            std::cout << e.what() << "INTRODUCE UN NÚMERO DEL 1 AL 2" << std::endl;
            cin.clear();
            sleep(1);
        }
    }
    return accion;
}

void SensorTemperatura::mostrarDatosSensorTemperatura(int accion){
    if(accion == 1){
        system("clear");
        cout << "TEMPERATURA: " << rand() % 40 << " ºC" << endl;
        sleep(1);
        int accion = entrarMenuSensorTemperatura();
        mostrarDatosSensorTemperatura(accion);
    }
}

void SensorTemperatura::salirMenuSensorTemperatura(){
    while(true){
        int accion = entrarMenuSensorTemperatura();
        if(accion == 2){
            break;
        }else{
            mostrarDatosSensorTemperatura(accion);
        }
    }
}