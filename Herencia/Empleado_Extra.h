// Clase Empleado Extra
// Autor: Pablo Yépez

#ifndef EMPLEADO_EXTRA_H
#define EMPLEADO_EXTRA_H

#include "Empleado.h"

class Empleado_Extra : public Empleado
{
public:
	int num_horas; //Horas extras
	double tarifa_extras; //Tarifa x hora

public:
	Empleado_Extra(void);
	Empleado_Extra(string Nombre, string Id); // COnstructor con datos del empleado
	~Empleado_Extra(void);

	int getNumHoras();
	void setNumHoras(int n);

	double getTarifaExtras();
	void setTarifaExtras(double t);

	double getPago(); //Obtiene pago
	void imprimeCheque( ) ;
};

#endif
