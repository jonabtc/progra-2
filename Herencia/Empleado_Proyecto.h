#ifndef EMPLEADO_PROYECTO_H
#define EMPLEADO_PROYECTO_H

#include "Empleado_Extra.h"


class Empleado_Proyecto : public Empleado
{
private:
	string proyecto[20];
	double valor[20];
	int numero;
public:
	Empleado_Proyecto();
	Empleado_Proyecto(string nombre, string id);
	~Empleado_Proyecto();

	void SetProyecto_Valor(string Proyecto, double val);
	void imprimeCheque();
};
#endif