/* ---------------------------
File: ejercicio9.cpp
Author: Alberto León
Date: 01/10/22
Goal: Calculate the value of π from the infinite series: 
π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ... a table showing the 
approximate value of π, after each of the first 1000 terms of 
this series.
---------------------------- */
#include <iostream>
using namespace std;
int main(){
    float num, i, sign = 1, PI = 0;
    cout << "Enter the numbers of terms: ";
    cin >> num;
    for(i = 1; i <= (num * 2); i += 2){
        PI = PI + sign*(4/i);
        sign = -sign;
        cout << PI << endl;
    }
    cout << "The approximate value of PI introducing " << num << " terms is " << PI << endl;
}