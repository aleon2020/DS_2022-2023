#include "Dashboard.h"
#include "GestionUsuarios.h"
#include "Excepcion.h"
#include "SensorTemperatura.h"
#include "SensorHumedad.h"
#include "CalidadDelAire.h"
#include "NivelDeIluminacion.h"
#include "CamaraRGB.h"
#include "CamaraTermica.h"

Dashboard::Dashboard(){
    conjuntoUsuarios.insert({"Alberto", "12345678A"});
}

int Dashboard::entrarMenuRegistro(){
    string nombreDeUsuario; string NIF;
    bool validar;
    system("clear");
    cout << "BIENVENIDO A JULIO VEGANOS E HIJOS" << endl << endl;
    cout << "NOMBRE DE USUARIO: ";
    cin >> nombreDeUsuario;
    cout << "NIF: ";
    cin >> NIF;
    Usuario registro = {nombreDeUsuario, NIF};
    if(conjuntoUsuarios.count(registro) == 1){
        validar = true;
    }
    system("clear");
    if(validar == true){
        while(true){
            int accion = entrarMenuDashboard();
            mostrarDatosDashboard(accion);
            if(accion == 8){
                system("clear");
                cout << "SALIENDO ..." << endl;
                sleep(1);
                system("clear");
                break;
            }
        }
    }else{
        cout << "\nDATOS INCORRECTOS" << endl;
        sleep(1);
        system("./main");
    }
    return 0;
}

int Dashboard::entrarMenuDashboard(){
    system("clear");
    int accion;
    bool valid_input = false;
    while (!valid_input) {
        system("clear");
        try{
            cout << "DASHBOARD"  << endl;
            cout << "1. TEMPERATURA" << endl;
            cout << "2. HUMEDAD" << endl;
            cout << "3. CALIDAD DEL AIRE" << endl;
            cout << "4. NIVEL DE ILUMINACIÓN" << endl;
            cout << "5. CÁMARA RGB" << endl;
            cout << "6. CÁMARA TÉRMICA" << endl;
            cout << "7. GESTIÓN DE USUARIOS" << endl;
            cout << "8. SALIR" << endl << endl;
            cout << "SELECCIONE UNA OPCIÓN (1-8): ";
            if (cin >> accion) {
                if(accion >= 1 && accion <= 8){
                    valid_input = true;
                } else {
                    throw Excepcion("\nERROR, ");
                }
            } else {
                throw Excepcion("\nERROR, ");
            }
        } catch(const Excepcion& e){
            std::cout << e.what() << "INTRODUCE UN NÚMERO DEL 1 AL 8" << std::endl;
            cin.clear();
            sleep(1);
        }
    }
    return accion;
}

void Dashboard::mostrarDatosDashboard(int accion){
 if(accion == 1){
        SensorTemperatura temperatura = SensorTemperatura();
        int accion = temperatura.entrarMenuSensorTemperatura();
        temperatura.mostrarDatosSensorTemperatura(accion);
    }
    else if(accion == 2){
        SensorHumedad humedad = SensorHumedad();
        int accion = humedad.entrarMenuSensorHumedad();
        humedad.mostrarDatosSensorHumedad(accion);
    }
    else if(accion == 3){
        CalidadDelAire aire = CalidadDelAire();
        int accion = aire.entrarMenuCalidadDelAire();
        aire.mostrarDatosCalidadDelAire(accion);
    }
    else if(accion == 4){
        NivelDeIluminacion iluminacion = NivelDeIluminacion();
        int accion = iluminacion.entrarMenuNivelDeIluminacion();
        iluminacion.mostrarDatosNivelDeIluminacion(accion);
    }
    else if(accion == 5){
        CamaraRGB camaraRGB = CamaraRGB();
        int accion = camaraRGB.entrarMenuCamaraRGB();
        camaraRGB.mostrarDatosCamaraRGB(accion);
    }
    else if(accion == 6){
        CamaraTermica camaraTermica = CamaraTermica();
        int accion = camaraTermica.entrarMenuCamaraTermica();
        camaraTermica.mostrarDatosCamaraTermica(accion);
    }
    else if(accion == 7){
        GestionUsuarios usuarios = GestionUsuarios();
        usuarios.Set = conjuntoUsuarios;
        usuarios.salirMenuGestionUsuarios();
        conjuntoUsuarios = usuarios.Set;
    }
}
