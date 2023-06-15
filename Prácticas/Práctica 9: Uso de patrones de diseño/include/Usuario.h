/**
 * @file Usuario.h
 * @brief Clase Usuario   
*/

#ifndef Usuario_H
#define Usuario_H

#include <iostream>
#include <string>
using namespace std;

class Usuario{
    friend ostream &operator<<(ostream &, const Usuario &);
    public:
        /**
         * @brief Constructor de la clase Usuario
        */
        Usuario(const string &, const string &);
        /**
         * @brief Establece nombre de usuario
         * @param nombreDeUsuario 
        */
        void setNombreDeUsuario(const string &);
        /**
         * @brief Devuelve nombre de usuario
         * @return string
        */
        string getNombreDeUsuario() const;
        /**
         * @brief Establece NIF
         * @param NIF 
        */
        void setNIF(const string &);
        /**
         * @brief Devuelve NIF
         * @return string
        */
        string getNIF() const;
        /**
         * @brief Operador de sobrecarga <
         * @param u 
         * @return bool
        */
        bool operator<(const Usuario &) const;
        /**
         * @brief Escribe en un fichero binario los usuarios del sistema 
         * @return Fichero binario users.dat
        */
        void escribir(string, string);
    private:
        string nombreDeUsuario;
        string NIF;
};
#endif
