#include "GestionUsuarios.h"
#include "Dashboard.h"
#include "Excepcion.h"

static string nombreDeUsuario, NIF;

GestionUsuarios::GestionUsuarios(){}

int GestionUsuarios::entrarMenuGestionUsuarios(){
    system("clear");
    int accion;
    bool valid_input = false;
    while (!valid_input) {
        system("clear");
        try{
            system("clear");
            cout << "1. INSERTAR USUARIO" << endl;
            cout << "2. ELIMINAR USUARIO" << endl;
            cout << "3. VER USUARIOS" << endl;
            cout << "4. VOLVER" << endl << endl;
            cout << "SELECCIONE UNA OPCIÓN (1-4): ";
            if (cin >> accion) {
                if(accion >= 1 && accion <= 4){
                    valid_input = true;
                } else {
                    throw Excepcion("\nERROR, ");
                }
            } else {
                throw Excepcion("\nERROR, ");
            }
        } catch(const Excepcion& e){
            cout << e.what() << "INTRODUCE UN NÚMERO DEL 1 AL 4" << endl;
            cin.clear();
            sleep(1);
        }
    }
    return accion;
}

void GestionUsuarios::mostrarDatosGestionUsuarios(int accion){
    Usuario p({nombreDeUsuario, NIF}); 
    if(accion == 1){
        system("clear");
        cout << "NOMBRE DE USUARIO: ";
        cin >> nombreDeUsuario;
        cout << "NIF: ";
        cin >> NIF;
        cout << "\nNUEVO USUARIO CREADO\n";
        Set.insert({nombreDeUsuario, NIF});
        sleep(1);
    }else if(accion == 2){
        system("clear");
        cout << "NOMBRE DE USUARIO: ";
        cin >> nombreDeUsuario;
        cout << "NIF: ";
        cin >> NIF;
        if (Set.count(p)!=0){ 
            cout <<"\nUSUARIO ELIMINADO\n" << endl; 
            Set.erase({nombreDeUsuario, NIF});
        }else {
            cout <<"\nDATOS INCORRECTOS\n";
        }
        sleep(1);
    }else if(accion == 3){
        system("clear");
        if (Set.empty()){
            cout << "SIN USUARIOS" << endl;
        }else{
            for (const auto &person_set : Set){
                cout << person_set; 
            }
        }
        sleep(1);
    }
}

void GestionUsuarios::salirMenuGestionUsuarios(){
    while(true){
        int accion = entrarMenuGestionUsuarios();
        if(accion == 4){
            break;
        }else{
            mostrarDatosGestionUsuarios(accion);
        }
    }
}
