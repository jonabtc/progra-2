//Autor: Jonathan Ocles
//Fecha: 25 de Marzo 2015
#include <iostream>
#include "Dado.h"
#include <cstdlib>
using namespace std;

Dado::Dado(int a)
{
	setLanzamiento(a);
	setLanzado(a);
}

void Dado::setLanzamiento(int l1)
{
	lanzamiento = l1;
}
void Dado::setLanzado(int l2)
{
	lanzado = l2;
}
int Dado::getLanzamiento()
{
	return lanzamiento;
}
int Dado::getLanzado()
{
	return lanzado;
}
void Dado::arrojarDado()
{
	int a;
	int x = rand() % 6 + 1;
	setLanzamiento(x);
	cout << "Numero obtenido: " << getLanzamiento() << endl << "Numero anterior: " << getLanzado();
	a = getLanzado();
	setLanzado(x);
}
