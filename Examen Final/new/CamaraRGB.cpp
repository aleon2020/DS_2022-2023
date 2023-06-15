#include "CamaraRGB.h"
#include "Dashboard.h"
#include "Excepcion.h"

CamaraRGB::CamaraRGB(){}

int CamaraRGB::entrarMenuCamaraRGB(){
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

void CamaraRGB::mostrarDatosCamaraRGB(int accion){
    if(accion == 1){
        system("clear");
        cout << "NO ESTÁS AUTORIZADO" << endl;
        sleep(1);
        int accion = entrarMenuCamaraRGB();
        mostrarDatosCamaraRGB(accion);
    }
}

void CamaraRGB::salirMenuCamaraRGB(){
    while(true){
        int accion = entrarMenuCamaraRGB();
        if(accion == 2){
            break;
        }else{
            mostrarDatosCamaraRGB(accion);
        }
    }
}