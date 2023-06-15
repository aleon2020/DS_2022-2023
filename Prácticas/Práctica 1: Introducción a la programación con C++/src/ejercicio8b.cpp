/* ---------------------------
File: ejercicio8b.cpp
Author: Alberto León
Date: 02/10/22
Goal: The factorial of a nonnegative integer n is written as n! 
(n factorial) and is defined as following way: 
no! = n(n–1)(n–2)...1 (for values ​​of n greater than or equal to 1)
and n! = 1 (for n = 0 or n = 1).
For example, 5! = 54321, which is 120. Use while statements on 
each of the following cases:
b. Write a program that estimates the value of the mathematical 
constant e, using the formula: e = 1 + 1!1 + 2!1 + 3!1 + .... 
Prompts the user for the desired precision of e (that is, the
number of terms in the sum).
---------------------------- */
#include <iostream>
using namespace std;
int factorial(int n){
    int i = 1, factorial = 1;
    while(i <= n){
        factorial = factorial * i;
        i++;
    }
    return factorial;
}
int main(){
    int num, i = 0;
    float e = 0;
    cout << "Enter the number of terms: ";
    cin >> num;
    while(i < num){
        float denominator = factorial(i);
        e += 1/denominator;
        i++;
    }
    cout << "The approximate value of e introducing " << num << " terms is " << e << endl;
    return 0;
}