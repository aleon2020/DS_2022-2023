/* Coleccion.h
Practical exercise 5.
Coleccion class definition with overloaded operators.
*/

#ifndef COLECCION_H
#define COLECCION_H

#include <iostream>

class Coleccion {
    friend std::ostream &operator<< (std::ostream &, const Coleccion &);
    friend std::istream &operator>> (std::istream &, Coleccion &);
public:
    explicit Coleccion (int = 10); // default constructor
    Coleccion (const Coleccion &); // copy constructor
    ~Coleccion(); // destructor
    size_t getSize() const; // return size
    const Coleccion &operator= (const Coleccion &); // assignment operator
    bool operator== (const Coleccion &) const; // equality operator
    // inequality operator; returns opposite of == operator
    bool operator!= (const Coleccion &right) const {
        return !(*this == right); // invokes Coleccion::operator==
    } // end function operator!=
    // subscript operator for non-const objects returns modifiable lvalue
    int &operator[] (int);
    // subscript operator for const objects returns rvalue
    int operator[] (int) const;
private:
    size_t size; // pointer-based array size
    int *ptr; // pointer to first element of pointer-based array
}; // end class Coleccion
#endif