#include <iostream>
#include <stdlib.h>
using namespace std;

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

int main(){
	CamaraRGB RGBCam;
	CamaraTermica TermCam;
	// Atributos heredados de la clase padre 
	// Opciones: RGBCam/TermCam.calibrateData();
	RGBCam.calibrateData();
	// Opciones: RGBCam/TermCam.seeData();
	RGBCam.seeData();
	RGBCam.readRGBCamera();
	TermCam.readTermCamera();
    	exit(0);
}
