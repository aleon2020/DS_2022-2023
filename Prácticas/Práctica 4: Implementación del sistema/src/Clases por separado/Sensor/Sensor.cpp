#include <iostream>
#include "Sensor.h" 
using namespace std;
Sensor::Sensor() {} 
void Sensor::seeData () { 
	cout << "Seeing data ..." << endl;
} 
void Sensor::calibrateSensor (){
	cout << "Calibrating sensor ..." << endl;
}
