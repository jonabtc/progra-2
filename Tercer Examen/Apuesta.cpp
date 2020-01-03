#include "Apuesta.h"

Apuesta::Apuesta(int v)
{	valor = v;
}
Apuesta::~Apuesta(void)
{
}
int Apuesta::getValor() // Retorna el valor de la apuesta.
{	return valor;
} 
char Apuesta::getTipo() // Retorna el tipo de la apuesta
{	return 'A';	
}
