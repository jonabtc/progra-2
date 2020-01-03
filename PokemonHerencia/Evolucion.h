#ifndef EVOLUCION_H
#define EVOLUCION_H
#include <string>
#include "Pokemon.h"
using namespace std;

class Evolucion : public Pokemon
{
private:
	string ataque;
protected:
	double energia;
public:
	Evolucion();
	Evolucion(string name, string type);

	static string Lucha;
	static string Llamas;
	static string Tormenta;
	static string Hielo;
		
	string Atacar();
	void Atacado(string attack);

	void Curar();

	void mostrar();
	static void mostrarAfectacion();
};
#endif