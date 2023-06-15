#include <iostream>
#include "Usuario.h" 
#include <chrono>
#include <string>
using namespace std;
Usuario::Usuario() {} 
void Usuario::seeData () { 
	cout << "User number: ";
	cin >> userNumber;
	cout << "NIF: ";
	cin >> NIF;

} 
bool Usuario::verifyData () { 
	if(userNumber.length() == 5 && NIF.length() == 8){
		cout << "Datos introducidos correctamente\n";
		auto date = chrono::system_clock::now();
		time_t end_time = chrono::system_clock::to_time_t(date);
		cout << "Hora de acceso: " << ctime(&end_time);
		return true;
	}
	else{
		cout << "Datos incorrectos\n";
		return false;
	}
} 
