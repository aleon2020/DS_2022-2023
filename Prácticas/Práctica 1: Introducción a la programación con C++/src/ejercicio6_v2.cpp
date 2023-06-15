/* ---------------------------
File: ejercicio6_v2.cpp
Author: Alberto León
Date: 29/09/22
Goal: Write an application that displays a checkerboard pattern 
like the one below. Do it first using eight output instructions 
(cout), and then do it trying to use as few instructions as 
possible.
---------------------------- */
#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i < 4; i++){
        cout << "* * * * * * * *\n";
        cout << " * * * * * * * *\n";
    }
    return 0;
}