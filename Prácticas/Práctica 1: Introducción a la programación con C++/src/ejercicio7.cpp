/* ---------------------------
File: ejercicio7.cpp
Author: Alberto León
Date: 29/09/22
Goal: Write a program that receives as input a five-digit integer,
which separate that number into its individual digits and print 
them, each one separate from the others for three spaces. 
For example, if the user types the number 31250, the program must
print:3   1   2   5   0.
---------------------------- */
#include <iostream>
using namespace std;
int main(){
    int num = 0, temp = 0, divider = 1;
    cout << "Enter a five digit integer: ";
    cin >> num;
    temp = num;
    while(temp / 10 != 0){
        temp = temp / 10;
        divider = divider * 10;
    }
    while(divider != 0){
        cout << num / divider;
        if(divider / 10 != 0){
            cout << "\t";
        }
        num = num % divider;
        divider = divider / 10;
    }
    cout << "\n";
    return 0;
}