# include "Evolucion.h"
# include <iostream>
# include <iomanip>
using namespace std;

string Evolucion::Lucha = "Lucha";
string Evolucion::Llamas = "Llamas";
string Evolucion::Tormenta = "Tormenta";
string Evolucion::Hielo = "Hielo";

Evolucion::Evolucion()
{
	nombre = "Pokemon";
	SetTipo("Tierra");
	ataque = "Lucha";
	energia = 100;
}
Evolucion::Evolucion(string name, string type)
	:Pokemon(name, type)
{
	if (type == "Tierra")
		ataque = "Lucha";
	if (type == "Agua")
		ataque = "Hielo";
	if (type == "Aire")
		ataque = "Tormenta";
	if (type == "Fuego")
		ataque = "Llamas";
	energia = 100;
}

string Evolucion::Atacar()
{
	return ataque;
}
void Evolucion::Atacado(string attack)
{
	if (energia > 9)
	{
		if (attack == "Lucha")
		{
			if (tipo == "Tierra")
				energia -= 10;
			if (tipo == "Aire")
				energia -= 40;
			if (tipo == "Fuego")
				energia -= 50;
			if (tipo == "Agua")
				energia -= 30;
		}
		if (attack == "Hielo")
		{
			if (tipo == "Tierra")
				energia -= 30;
			if (tipo == "Aire")
				energia -= 30;
			if (tipo == "Fuego")
				energia -= 40;
			if (tipo == "Agua")
				energia -= 10;
		}

		if (attack == "Tormenta")
		{
			if (tipo == "Tierra")
				energia -= 40;
			if (tipo == "Aire")
				energia -= 10;
			if (tipo == "Fuego")
				energia -= 20;
			if (tipo == "Agua")
				energia -= 30;
		}
		if (attack == "Llamas")
		{
			if (tipo == "Tierra")
				energia -= 50;
			if (tipo == "Aire")
				energia -= 20;
			if (tipo == "Fuego")
				energia -= 10;
			if (tipo == "Agua")
				energia -= 40;
		}
	}
	else
	{
		cout << nombre << " ya no puede luchar" << endl;
	}
}
void Evolucion::Curar()
{
	energia = 100;
}
void Evolucion::mostrar()
{
	cout << nombre << "[" << tipo << ":" << energia << "]" << endl;
}
void Evolucion::mostrarAfectacion()
{
	cout << "        "<< "Lucha" << "    "
		 << "Tormenta" << "    "
		 << "Llamas" << "    "
		 << "Hielo" << endl;
	cout << "Tierra" << "     " << "10" << "          " 
		 << "40" << "        " << "50" << "       " << "30" << endl;
	cout << "Aire" << "       " << "40" << "          "
		<< "10" << "        " << "20" << "       " << "30" << endl;
	cout << "Fuego" << "      " << "50" << "          "
		<< "20" << "        " << "10" << "       " << "40" << endl;
	cout << "Agua" << "       " << "30" << "          "
		<< "30" << "        " << "40" << "       " << "10" << endl;
}