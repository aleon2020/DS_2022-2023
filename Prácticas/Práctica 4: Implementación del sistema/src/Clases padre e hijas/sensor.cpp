#include <iostream>
#include <stdlib.h>
using namespace std;

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

int main(){
	SensorHumedad hum;
	SensorTemperatura temp;
	CalidadDelAire ca;
	NivelDeIluminacion ni;
	// Atributos heredados de la clase padre 
	// Opciones: ca/hum/temp/ni.calibrateSensor();
	ca.calibrateSensor();
	// Opciones: ca/hum/temp/ni.seeData();
	ca.seeData();
	hum.readHumidity();
	temp.readTemperature();
	ca.readAirQuality();
	ni.readLightLevel();
    	exit(0);
}
