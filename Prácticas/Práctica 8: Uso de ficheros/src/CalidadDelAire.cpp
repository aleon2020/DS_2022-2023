#include "CalidadDelAire.h"
#include "Dashboard.h"
#include "Excepcion.h"

CalidadDelAire::CalidadDelAire(){}

int CalidadDelAire::entrarMenuCalidadDelAire(){
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

void CalidadDelAire::mostrarDatosCalidadDelAire(int accion){
    if(accion == 1){
        system("clear");
        cout << "ICA: " << rand() % 500 << " \n" << endl;
        sleep(1);
        int accion = entrarMenuCalidadDelAire();
        mostrarDatosCalidadDelAire(accion);
    }
}

void CalidadDelAire::salirMenuCalidadDelAire(){
    while(true){
        int accion = entrarMenuCalidadDelAire();
        if(accion == 2){
            break;
        }else{
            mostrarDatosCalidadDelAire(accion);
        }
    }
}
