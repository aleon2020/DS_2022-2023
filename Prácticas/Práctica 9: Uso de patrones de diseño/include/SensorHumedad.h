/**
 * @file SensorHumedad.h
 * @brief Clase SensorHumedad
*/

#ifndef SensorHumedad_H
#define SensorHumedad_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class SensorHumedad{
    public:
        /**
         * @brief Constructor de la clase SensorHumedad
        */
        SensorHumedad();
        /**
         * @brief Entra el menú de opciones del sensor de humedad
        */
        int entrarMenuSensorHumedad();
        /**
         * @brief Opción DATOS del menú de opciones del sensor de humedad
         * @param accion
        */
        void mostrarDatosSensorHumedad(int);
        /**
         * @brief Opción VOLVER del menú de opciones del sensor de humedad
        */
        void salirMenuSensorHumedad();
    private:
        int accion;
};
#endif