#include "Doble.h"
#include <iostream>
using namespace std;

Doble::Doble(int v)
:Apuesta(v)
{
}

Doble::~Doble()
{
}
void Doble::getApuesta()
{
	cout << "Apuesta 1: (1)Local (2)Empate (3)Visitante :?"; cin >> apuesta;
	cout << "Apuesta 2: (1)Local (2)Empate (3)Visitante :?"; cin >> apuesta2;
}
bool Doble::gano(int resultado)
{
	if (resultado==apuesta||resultado==apuesta2)
		return true;
	else
	 	return false;
}
int Doble::getGana(int resultado)
{
	return getValor();
}
char Doble::getTipo()
{
	return 'D';
}
