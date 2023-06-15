/* ---------------------------
File: ejercicio10pro.cpp
Author: Alberto León
Date: 01/10/22
Goal: Bonus: Enhance the program (exercise10pro.cpp) so that it 
reads a number odd in the range from 1 to 19, corresponding to 
the number of rows that make up the rhombus, and then show a 
diamond of the appropriate size.
---------------------------- */
#include <iostream>
using namespace std;
int main (){
    int side;
    cout << "Enter the side: ";
    cin >> side;
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