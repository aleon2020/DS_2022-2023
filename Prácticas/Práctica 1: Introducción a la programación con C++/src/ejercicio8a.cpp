/* ---------------------------
File: ejercicio8a.cpp
Author: Alberto León
Date: 02/10/22
Goal: The factorial of a nonnegative integer n is written as n! 
(n factorial) and is defined as following way: 
no! = n(n–1)(n–2)...1 (for values ​​of n greater than or equal to 1)
and n! = 1 (for n = 0 or n = 1).
For example, 5! = 54321, which is 120. Use while statements on 
each of the following cases:
a. Write an application that reads a nonnegative integer, computes, and prints its factorial.
---------------------------- */
#include <iostream>
using namespace std;
int main(){
    int num , i = 1, factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    while(i <= num){
        factorial = factorial * i;
        i++;
    }
    cout << num << "! = " << factorial << endl;
    return 0;
}