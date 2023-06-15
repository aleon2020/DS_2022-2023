/**
 * @file SensorTemperatura.h
 * @brief Clase SensorTemperatura
*/

#ifndef SensorTemperatura_H
#define SensorTemperatura_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class SensorTemperatura{
    public:
        /**
         * @brief Constructor de la clase SensorTemperatura
        */
        SensorTemperatura();
        /**
         * @brief Entra el menú de opciones del sensor de temperatura
        */
        int entrarMenuSensorTemperatura();
        /**
         * @brief Opción DATOS del menú de opciones del sensor de temperatura
         * @param accion
        */
        void mostrarDatosSensorTemperatura(int);
        /**
         * @brief Opción VOLVER del menú de opciones del sensor de temperatura
        */
        void salirMenuSensorTemperatura();
    private:
        int accion;
};
#endif