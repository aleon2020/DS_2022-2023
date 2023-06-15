/* ---------------------------
File: ejercicio5.cpp
Author: Alberto León
Date: 28/09/22
Goal: Write a program that reads the radius of a circle as an 
integer and prints its diameter, circumference and area. Use the 
constant value 3.14159 for π. Do all the calculations in output 
instructions.
---------------------------- */
#include <iostream>
using namespace std;
float diameter(int r){
    return 2 * r;
}
float circumferenceLength(int r){
    return 2 * 3.14159 * r;
}
float area(int r){
    return 3.14159 * r * r;
}
int main(){
    int ratio;
    cout << "Enter the ratio: ";
    cin >> ratio;
    cout << "Diameter: " << diameter(ratio) << endl;
    cout << "Circumference length: " << circumferenceLength(ratio) << endl;
    cout << "Area: " << area(ratio) << endl;
    return 0;
}