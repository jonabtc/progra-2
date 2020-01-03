#ifndef POKEMON_H
#define POKEMON_H
# include <string>

using namespace std;

class Pokemon
{
protected:
	string nombre;
	string tipo;

public:
	static string Aire;
	static string Agua;
	static string Fuego;
	static string Tierra;

	Pokemon();
	Pokemon(string name, string type);

	string GetNombre();
	string GetTipo();
	void SetTipo(string type);

	void mostrar();
};

#endif