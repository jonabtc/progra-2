//Autor: Jonathan Ocles
//Fecha: 25 de Marzo 2015

#include <iostream>
#include <cmath>
#include "Ecuacion.h"
using namespace std;

void Ecuacion::setCoeA(double a)
{
	coeA = a;
}
void Ecuacion::setCoeB(double b)
{
	coeB = b;
}
void Ecuacion::setCoeC(double c)
{
	coeC = c;
}
double Ecuacion::getCoeA()
{
	return coeA;
}
double Ecuacion::getCoeB()
{
	return coeB;
}
double Ecuacion::getCoeC()
{
	return coeC;
}
void Ecuacion::leerCoeficientes()
{
	double a, b, c;
	cout << "Ingrese los coeficientes a, b, y c de la ecuación  ax^2 + bx + c = 0" << endl;
	cin >> a; cin >> b; cin >> c;
	setCoeA(a);
	setCoeB(b);
	setCoeC(c);
}
void Ecuacion::mostrar()
{
	cout << getCoeA() << "x^2 + " << getCoeB() << "x + " << getCoeC() << " = 0" << endl;
}
void Ecuacion::calcular()
{
	int a, b1, b2, c, x1, x2;
	
	a = getCoeA();
	b1 = getCoeB();
	b2 = pow(getCoeB(),2);
	c = getCoeC();

	x1 = ((-1 * b1) + sqrt(b2 - (4 * a*c))) / (2 * a);
	x2 = ((-1 * b1) - sqrt(b2 - (4 * a*c))) / (2 * a);
	
	cout << "Las respuestas para x son:" << endl
		<< "x = " << x1 << endl
		<< "x = " << x2 << endl;
}