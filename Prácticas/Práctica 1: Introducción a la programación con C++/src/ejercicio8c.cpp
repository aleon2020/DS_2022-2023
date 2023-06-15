/* ---------------------------
File: ejercicio8c.cpp
Author: Alberto León
Date: 02/10/22
Goal: The factorial of a nonnegative integer n is written as n! 
(n factorial) and is defined as following way: 
no! = n(n–1)(n–2)...1 (for values ​​of n greater than or equal to 1)
and n! = 1 (for n = 0 or n = 1).
For example, 5! = 54321, which is 120. Use while statements on 
each of the following cases:
c. Write an application that calculates the value of ex , using 
the formula: ex = 1 + 1!x +3x2+ x3! + ... Prompts the user for 
the desired precision of e (that is, the number of terms two!
in the sum).
---------------------------- */
#include <iostream>
#include <math.h>
using namespace std;
int factorial(int num){
    int i = 1, factorial = 1;
    while(i <= num){
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
        float numerator = pow(i,i);
        float denominator = factorial(i);
        e += numerator/denominator;
        i++;
    }
    cout << "The approximate value of e^" << num << " introducing " << num << " terms is " << e << endl;
    return 0;
}