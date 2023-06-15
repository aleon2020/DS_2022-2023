/* ---------------------------
File: ejercicio10.cpp
Author: Alberto León
Date: 01/10/22
Goal: Write a program that prints the following rhombus shape. 
You can use instruction output tions that print a single asterisk 
(*) or a single blank space. Maximize the use of repetition 
(with nested for statements), and minimizes the number of 
statements exit.
---------------------------- */
#include <iostream>
using namespace std;
int main (){
    int side = 5 ;
    for (int j = 0; j < side ; ++j) {
        for (int i = 0; i < side - j - 1; ++i)
            cout << " ";
        for (int i = 0; i < 2 * j + 1; ++i)
             cout << "*" ;
        cout << endl ;
    }
    for (int j = side - 2; j >= 0; --j) {
        for (int i = 0; i < side - j - 1; ++i)
            cout << " " ;
        for (int i = 0; i < 2 * j + 1; ++i)
            cout << "*" ;
        cout << endl ;
    }
    return 0;
}