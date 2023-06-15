/* ---------------------------
File: ejercicio1.cpp
Author: Alberto León
Date: 28/09/22
Goal: Write a program that asks the user to type in two numbers, 
get the numbers user's numbers and print the sum, product, 
difference, and quotient of the numbers.
---------------------------- */
#include <iostream>
using namespace std;
int main(){
    float num1, num2, sum, product, difference, quotient;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    quotient = num1 / num2;
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Difference: " << difference << endl;
    cout << "Quotient: " << quotient << endl;
    return 0;
}