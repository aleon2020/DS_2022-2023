#include <iostream>
#include <stdlib.h>
#include <string>
#include <chrono>
using namespace std;

// Clase padre
class Usuario {
public:
	Usuario();
	void seeData();
	bool verifyData();
private:
	string userNumber;
	string NIF;
};

// Clase hija
class Administrador : public Usuario {
public:
	Administrador();
	void modifyData();
private:
};

// Declaración de constructores y métodos de cada clase
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
Administrador::Administrador() {} 
void Administrador::modifyData () { 
	cout << "Modifying data ..." << endl;
} 

int main(){
	Administrador admin;
	// Atributos heredados de la clase padre 
	admin.seeData();
	admin.verifyData(); 
	admin.modifyData();
	admin.seeData();
	admin.verifyData(); 	
    	exit(0);
}
