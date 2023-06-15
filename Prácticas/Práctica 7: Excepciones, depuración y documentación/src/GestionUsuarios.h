/**
 * @file Gestionusuarios.h
 * @brief Clase GestionUsuarios
*/

#ifndef GestionUsuarios_H
#define GestionUsuarios_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <set>
#include <functional>
#include "Usuario.h"
using namespace std;

class GestionUsuarios{
    public:
        /**
         * @brief Constructor de la clase GestionUsuarios
        */
        GestionUsuarios();
        /**
         * @brief Muestra el menu de la gestion de usuarios
        */
        int entrarMenuGestionUsuarios();
       /**
         * @brief Muestra los datos de cada una de las opciones del menu de la gestion de usuarios
         * @param accion
        */
        void mostrarDatosGestionUsuarios(int);
        /**
         * @brief Opción VOLVER del menu de la gestion de usuarios
        */ 
        void salirMenuGestionUsuarios();
        /**
         * @brief Contenedor que almacena los usuarios
        */
        set<Usuario> Set;
    private:
        int accion;
};
#endif