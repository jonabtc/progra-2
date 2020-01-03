//Autor: Jonathan Ocles
//Fecha: 25 de Marzo 2015
#ifndef ECUACION_H
#define ECUACION_H

class Ecuacion
{
private:
	double coeA; //declaración de los coeficientes
	double coeB;
	double coeC;
public:
	void setCoeA(double a);
	void setCoeB(double b);
	void setCoeC(double c);
	double getCoeA();
	double getCoeB();
	double getCoeC();

	void mostrar();
	void leerCoeficientes();
	void calcular();
};

#endif