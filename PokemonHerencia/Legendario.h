#ifndef LEGENDARIO_H
#define LEGENDARIO_H
#include <string>
#include "Evolucion.h"
using namespace std;

class Legendario :public Evolucion
{
private:
	string clase;
	string ataqueExtra;
public:
	Legendario();
	Legendario(string name, string type, string clase);

	static string Normal;
	static string Especial;
	static string Supremo;
	static string Secundario;

	void SetAtaqueExtra(string attack);
	void Atacado(string attack);
	string Atacar();
	string Atacar(string attack);
	string GetAtaque();
	
	
	void mostrar();
	
};
#endif