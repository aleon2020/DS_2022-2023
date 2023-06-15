/**
 * @file Dashboard.h
 * @brief Clase Dashboard
*/

#ifndef Dashboard_H
#define Dashboard_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <limits>
#include "GestionUsuarios.h"
using namespace std;

class Dashboard{
    public:
        /**
         * @brief Constructor de la clase Dashboard
        */
        Dashboard();
        /**
         * @brief  Muestra el menú de registro (nombre de usuario y NIF)
        */
        int entrarMenuRegistro();
        /**
         * @brief Muestra todas las opciones del dashboard
         * @return int
        */
        int entrarMenuDashboard();
        /**
         * @brief Muestra los datos de cada una de las opciones del dashboard
         * @param accion 
        */
        void mostrarDatosDashboard(int);
        /**
         * @brief Set que permite almacenar los usuarios en la interfaz
        */
        set<Usuario> conjuntoUsuarios;
    private:
        int accion;
};
#endif