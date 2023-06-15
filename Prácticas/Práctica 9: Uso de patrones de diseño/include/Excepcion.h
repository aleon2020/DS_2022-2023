/**
 * @file Excepcion.h
 * @brief Clase Excepcion
 * @author Alberto León Luengo
 * @date 21/12/2022
*/

#ifndef Excepcion_H
#define Excepcion_H

#include<iostream>
#include<string>
using namespace std;

#include <exception>

class Excepcion: public std::exception {
  public:
    /**
     * @brief Constructor de la clase Excepcion
    */
    Excepcion(const char* mensaje) : mensaje_(mensaje) {}
    /**
     * @brief Funcion que permite mostrar el mensaje de la excepcion
    */
    const char* what() const throw() { return mensaje_.c_str(); }
  private:
    std::string mensaje_;
};
#endif