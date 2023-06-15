#include <string>
#include <chrono>
using namespace std;
#ifndef USUARIO_H
#define USUARIO_H
class Usuario {
public:
	Usuario();
	void seeData();
	bool verifyData();
private:
	string userNumber;
	string NIF;
};
#endif
