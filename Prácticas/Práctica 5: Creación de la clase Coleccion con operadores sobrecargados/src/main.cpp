/* main.cpp
Practical exercise 5.
Coleccion class test program.
*/
#include <iostream>
#include "Coleccion.h"
using namespace std;

int main() {
    Coleccion integers1 (7); // seven-element Coleccion
    Coleccion integers2; // 10-element Coleccion by default
    
    // print integers1 size and contents
    cout << "Size of Coleccion integers1 is " << integers1.getSize()
    << "\nColeccion after initialization:\n" << integers1;
    
    // print integers2 size and contents
    cout << "\nSize of Coleccion integers2 is "
    << integers2.getSize()
    << "\nColeccion after initialization:\n" << integers2;

    // input and print integers1 and integers2
    cout << "\nEnter 17 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the Coleccions contain:\n"
    << "integers1:\n" << integers1
    << "integers2:\n" << integers2;

    // use overloaded inequality (!=) operator
    cout << "\nEvaluating: integers1 != integers2" << endl;
    if (integers1 != integers2)
        cout << "integers1 and integers2 are not equal" << endl;

    // create Coleccion integers3 using integers1 as an
    // initializer; print size and contents
    Coleccion integers3 (integers1); // invokes copy constructor
    cout << "\nSize of Coleccion integers3 is "
    << integers3.getSize()
    << "\nColeccion after initialization:\n" << integers3;

    // use overloaded assignment (=) operator
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2; // note target Coleccion is smaller
    cout << "integers1:\n" << integers1
    << "integers2:\n" << integers2;

    // use overloaded equality (==) operator
    cout << "\nEvaluating: integers1 == integers2" << endl;
    if (integers1 == integers2)
        cout << "integers1 and integers2 are equal" << endl;

    // use overloaded subscript operator to create rvalue
    cout << "\nintegers1[5] is " << integers1 [5];

    // use overloaded subscript operator to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1 [5] = 1000;
    cout << "integers1:\n" << integers1;
} // end main