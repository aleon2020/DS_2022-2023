#include <iostream>
#include <stdexcept>
#include "Usuario.h"
#include <fstream>
using namespace std;

Usuario::Usuario(const string &nombreDeUsuario, const string &NIF) : nombreDeUsuario(nombreDeUsuario){
    setNIF(NIF);
}

void Usuario::setNombreDeUsuario(const string &nombreDeUsuario){
    this->nombreDeUsuario = nombreDeUsuario;
}

string Usuario::getNombreDeUsuario() const{
    return nombreDeUsuario;
}

void Usuario::setNIF(const string &NIF){
    this->NIF = NIF;
}

string Usuario::getNIF() const{
    return NIF;
}

bool Usuario::operator<(const Usuario &other) const{
    return (this->nombreDeUsuario > other.nombreDeUsuario);
}

ostream &operator<<(ostream &output, const Usuario &a){
    cout << "[NOMBRE DE USUARIO: " << a.getNombreDeUsuario() << ", NIF: " << a.getNIF() << "]" << endl;
    return output;
}

