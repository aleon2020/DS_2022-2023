/* ---------------------------
File: ejercicio3.cpp
Author: Alberto León
Date: 28/09/22
Goal: Write a program that asks the user to type in two integers, 
to get the numbers from the user and print the largest number, 
followed by the expression is largest. And yes the numbers are 
the same, print the message These numbers are the same.
---------------------------- */
#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    if(num1 > num2){
        cout << num1 << " is bigger.\n";
    }
    else if(num1 < num2){
        cout << num2 << " is bigger.\n";
    }
    else{
        cout << "Both numbers are equal.\n";
    }
    return 0;
}