#include "Pokemon.h"
#include <iostream>
using namespace std;

Pokemon::Pokemon()
{
	nombre = "Pokemon";
	SetTipo("Tierra");
}

Pokemon::Pokemon(string name, string type)
{
	nombre = name;
	tipo = type;
}

string Pokemon::Aire = "Aire";
string Pokemon::Agua = "Agua";
string Pokemon::Fuego = "Fuego";
string Pokemon::Tierra = "Tierra";

string Pokemon::GetNombre()
{
	return nombre;
}
string Pokemon::GetTipo()
{
	return tipo;
}
void Pokemon::SetTipo(string type)
{
	tipo = type;
}
void Pokemon::mostrar()
{
	cout << nombre << "[" << tipo << "]" << endl;
}
