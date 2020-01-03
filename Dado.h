//Autor: Jonathan Ocles
//Fecha: 25 de Marzo 2015

#ifndef DADO_H
#define DADO_H

class Dado
{
private:
	int lanzamiento;
	int lanzado;
public:
	Dado(int a); // Constructor
	void setLanzamiento(int l1);
	void setLanzado(int l2);
	int getLanzamiento();
	int getLanzado();

	void arrojarDado();

};
#endif