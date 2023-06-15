/**
 * @file NivelDeIluminacion.h
 * @brief Clase NivelDeIluminacion
*/

#ifndef NivelDeIluminacion_H
#define NivelDeIluminacion_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class NivelDeIluminacion{
    public:
        /**
         * @brief Constructor de la clase NivelDeIluminacion
        */
        NivelDeIluminacion();
        /**
         * @brief Entra el menú de opciones del nivel de iluminacion
        */
        int entrarMenuNivelDeIluminacion();
        /**
         * @brief Opción DATOS del menú de opciones del nivel de iluminacion
         * @param accion
        */
        void mostrarDatosNivelDeIluminacion(int);
        /**
         * @brief Opción VOLVER del menú de opciones del nivel de iluminacion
        */
        void salirMenuNivelDeIluminacion();
    private:
        int accion;
};
#endif