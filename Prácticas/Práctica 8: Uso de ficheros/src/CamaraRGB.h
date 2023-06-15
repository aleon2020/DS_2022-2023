/**
 * @file CamaraRGB.h
 * @brief Clase CamaraRGB
*/

#ifndef CamaraRGB_H
#define CamaraRGB_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class CamaraRGB{
    public:
        /**
         * @brief Constructor de la clase CamaraRGB
        */
        CamaraRGB();
        /**
         * @brief Entra el menú de opciones de la camara RGB
        */
        int entrarMenuCamaraRGB();
        /**
         * @brief Opción DATOS del menú de opciones de la camara RGB
         * @param accion
        */
        void mostrarDatosCamaraRGB(int);
        /**
         * @brief Opción VOLVER del menú de opciones de la camara RGB
        */
        void salirMenuCamaraRGB();
    private:
        int accion;
};
#endif