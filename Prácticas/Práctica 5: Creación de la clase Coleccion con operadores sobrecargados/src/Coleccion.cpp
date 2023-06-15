/* Coleccion.cpp
Practical exercise 5.
Coleccion class member -and friend- function definitions.
*/
#include <iostream>
#include <iomanip> // I/O manipulation library
#include "Coleccion.h" // Coleccion class definition

using namespace std;

// default constructor for class Coleccion (default size 10)
// considering arraySize > 0, otherwise an exception should be thrown
Coleccion::Coleccion (int arraySize):size(arraySize), ptr(new int[size]){
    if (size < 0){
        throw exception();
    }
    for (size_t i = 0; i < size; ++i){
        ptr [i] = 0; // set pointer-based array element
    }
} // end Coleccion default constructor

// copy constructor for class Coleccion; must receive a reference to a Coleccion
Coleccion::Coleccion (const Coleccion &arrayToCopy) : size (arrayToCopy.size),
ptr (new int [size]) {
    for (size_t i = 0; i < size; ++i){
        ptr[i] = arrayToCopy.ptr[i]; // copy into object
    }
} // end Coleccion copy constructor

// destructor for class Coleccion
Coleccion::~Coleccion() {
    delete [] ptr; // release pointer-based array space
} // end destructor

// return size
size_t Coleccion::getSize() const{
    return size;
}

istream &operator >> (istream &input, Coleccion &coleccion){
    for (size_t i = 0; i < coleccion.size; ++i){
        input >> coleccion.ptr[i];
    }
    return input;
}

ostream &operator << (ostream &output, const Coleccion &coleccion){
    for (size_t i = 0; i < coleccion.size; ++i){
        output << setw(12) << coleccion.ptr[i];

        if ((i + 1)%4 == 0)
            output << endl;
    }

    if (coleccion.size % 4 != 0)
        output << endl;

    return output;
}

// assignment operator
const Coleccion &Coleccion::operator = (const Coleccion &right){
    if(&right != this){
        if(size != right.size){
            delete [] ptr;
            size = right.size;
            ptr = new int [size];
        }
        for (size_t i = 0; i < size; ++i)
            ptr[i] = right.ptr[i];
        }
    return *this;
}

// equality operator
bool Coleccion::operator == (const Coleccion &right) const{
    if (size != right.size){
        return false;
    }
    for (size_t i = 0; i < size; ++i)
        if (ptr[i] != right.ptr[i])
            return false;
    return true;
}

// subscript operator for non-const objects returns modifiable lvalue
int &Coleccion::operator[] (int subscript){
    return ptr [subscript];
}

// subscript operator for const objects returns rvalue
int Coleccion::operator[] (int subscript) const{
    return ptr [subscript];
}