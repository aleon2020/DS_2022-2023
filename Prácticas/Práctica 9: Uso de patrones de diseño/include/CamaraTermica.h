/**
 * @file CamaraTermica.h
 * @brief Clase CamaraTermica
*/

#ifndef CamaraTermica_H
#define CamaraTermica_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class CamaraTermica{
    public:
        /**
         * @brief Constructor de la clase CamaraTermica
        */
        CamaraTermica();
        /**
         * @brief Entra el menú de opciones de la camara termica
        */
        int entrarMenuCamaraTermica();
        /**
         * @brief Opción DATOS del menú de opciones de la camara termica
         * @param accion
        */
        void mostrarDatosCamaraTermica(int);
        /**
         * @brief Opción VOLVER del menú de opciones de la camara termica
        */
        void salirMenuCamaraTermica();
    private:
        int accion;
};
#endif