// BIBLIOTECAS Y LIBRERÍAS
#include <iostream>
#include <stdlib.h>
#include <string>
#include <chrono>
using namespace std;
// --------------------------------------------------------------------------
// USUARIO
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
// -------------------------------------------------------------------------
// SENSORES
// Clase padre
class Sensor {
public:
	Sensor();
	void seeData();
	void calibrateSensor();
private:
};
// Clases hija
class SensorHumedad : public Sensor{
public:
	SensorHumedad();
	void readHumidity();
private:
};
class SensorTemperatura : public Sensor{
public:
	SensorTemperatura();
	void readTemperature();
private:
};
class CalidadDelAire : public Sensor{
public:
	CalidadDelAire();
	void readAirQuality();
private:
};
class NivelDeIluminacion : public Sensor{
public:
	NivelDeIluminacion();
	void readLightLevel();
private:
};
// Declaración de constructores y métodos de cada clase
Sensor::Sensor() {} 
void Sensor::seeData () { 
	cout << "Seeing data ..." << endl;
} 
void Sensor::calibrateSensor (){
	cout << "Calibrating sensor ..." << endl;
}
SensorHumedad::SensorHumedad() {} 
void SensorHumedad::readHumidity () { 
	cout << "Humedad: 40%" << endl;
} 
SensorTemperatura::SensorTemperatura() {} 
void SensorTemperatura::readTemperature () { 
	cout << "Temperatura: 20ºC" << endl;
} 
CalidadDelAire::CalidadDelAire() {} 
void CalidadDelAire::readAirQuality () { 
	cout << "Índice de contaminación del aire: 30" << endl;
} 
NivelDeIluminacion::NivelDeIluminacion() {} 
void NivelDeIluminacion::readLightLevel () { 
	cout << "Light level: 500 lux" << endl;
} 
// -----------------------------------------------------------------------
// CÁMARAS
// Clase padre
class Camara {
public:
	Camara();
	void seeData();
	void calibrateData();
private:
};

// Clases hija
class CamaraRGB : public Camara{
public:
	CamaraRGB();
	void readRGBCamera();
private:
};
class CamaraTermica : public Camara{
public:
	CamaraTermica();
	void readTermCamera();
private:
};
// Declaración de constructores y métodos de cada clase
Camara::Camara() {} 
void Camara::seeData () { 
	cout << "Seeing data ..." << endl;
} 
void Camara::calibrateData(){
	cout << "Calibrating data ..." << endl;
}
CamaraRGB::CamaraRGB() {} 
void CamaraRGB::readRGBCamera() { 
	cout << "RGB camera" << endl;
} 
CamaraTermica::CamaraTermica() {} 
void CamaraTermica::readTermCamera () { 
	cout << "Termic camera" << endl;
} 

void retorno();
void salir();

void retorno(){
	cout << "\nVOLVIENDO AL MENÚ DE OPCIONES ...\n";
	getwchar();
	// getwchar();
}
void salir(){
	cout << "\nSALIENDO ...\n" << endl;
	getwchar();
}

int main(){
	Administrador admin;
	SensorTemperatura temp;
	SensorHumedad hum;
	CalidadDelAire ca;
	NivelDeIluminacion ni;
	CamaraRGB RGBCam;
	CamaraTermica TermicCam;
	cout << "\nBIENVENIDO A JULIO VEGANOS E HIJOS" << endl;
	cout << "INTRODUZCA SUS DATOS DE ACCESO\n" << endl;
	admin.seeData();
	while(admin.verifyData() == false){
		admin.modifyData();
		admin.seeData();
	}
	if(admin.verifyData() == true){
		bool flag = false;
		char key;
		do{
			cin.clear();
			cout << "\nDASHBOARD" << endl;
			cout << "1. Temperatura" << endl;
			cout << "2. Humedad" << endl;
			cout << "3. Calidad del aire" << endl;
			cout << "4. Nivel de iluminación" << endl;
			cout << "5. Cámara RGB" << endl;
			cout << "6. Cámara térmica" << endl;
			cout << "7. Salir" << endl << endl;
			cout << "Seleccionar opción [1-7]: ";
			cin >> key;
				switch(key){
					case '1':
						temp.calibrateSensor();
						temp.seeData();
						temp.readTemperature();
						retorno();
						break;
					case '2':
						hum.calibrateSensor();
						hum.seeData();
						hum.readHumidity();
						retorno();
						break;						
					case '3':
						ca.calibrateSensor();
						ca.seeData();
						ca.readAirQuality();
						retorno();
						break;				
					case '4':
						ni.calibrateSensor();
						ni.seeData();
						ni.readLightLevel();
						retorno();
						break;	
					case '5':
						RGBCam.calibrateData();
						RGBCam.seeData();
						RGBCam.readRGBCamera();	
						retorno();
						break;					
					case '6':
						TermicCam.calibrateData();
						TermicCam.seeData();
					        TermicCam.readTermCamera();	
						retorno();
						break;					
					case '7':	
						flag = true;
						salir();
						break;
					default:
						cout << "\nOpción no válida";
						retorno();
						break;	
				}
			}while(flag != true);
			return 0;	
	}
}
