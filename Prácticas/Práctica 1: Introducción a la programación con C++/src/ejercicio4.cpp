/* ---------------------------
File: ejercicio4.cpp
Author: Alberto León
Date: 28/09/22
Goal: Write a program that takes three integers from the keyboard 
and prints the sum, average, product, lesser and greater of those 
numbers.
---------------------------- */
#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, sum, average, product;
    cout << "Enter three different integers: ";
    cin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    cout << "The sum is: " << sum << endl;
    average = (num1 + num2 + num3) / 3;
    cout << "The average is: " << average << endl;
    product = num1 * num2 * num3;
    cout << "The product is: " << product << endl;
    if (num1 < num2 && num1 < num3){
        cout << "The minor is: " << num1 << endl;
    }
    else if (num2 < num1 && num2 < num3){
        cout << "The minor is: " << num2 << endl;
    }
    else if (num3 < num1 && num3 < num2){
        cout << "The minor is: " << num3 << endl;
    }
    if (num1 > num2 && num1 > num3){
        cout << "The major is: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3){
        cout << "The major is: " << num2 << endl;
    }
    else if (num3 > num1 && num3 > num2){
        cout << "The major is: " << num3 << endl;
    }
    return 0;
}