/**
 * @file CalidadDelAire.h
 * @brief Clase CalidadDelAire
*/

#ifndef CalidadDelAire_H
#define CalidadDelAire_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class CalidadDelAire{
    public:
        /**
         * @brief Constructor de la clase CalidadDelAire
        */
        CalidadDelAire();
        /**
         * @brief Entra el menú de opciones de la calidad del aire
        */
        int entrarMenuCalidadDelAire();
        /**
         * @brief Opción DATOS del menú de opciones de la calidad del aire
         * @param accion
        */
        void mostrarDatosCalidadDelAire(int);
        /**
         * @brief Opción VOLVER del menú de opciones de la calidad del aire
        */
        void salirMenuCalidadDelAire();
    private:
        int accion;
};
#endif