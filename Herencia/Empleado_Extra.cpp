
#include <iostream>
using namespace std;

#include "Empleado_Extra.h"


Empleado_Extra::Empleado_Extra(void)
{	num_horas=0;
	tarifa_extras=0;
}

Empleado_Extra::Empleado_Extra(string nombre, string id) // COnstructor con datos del empleado
: Empleado(nombre,id)
{	num_horas=0;
	tarifa_extras=0;
}


Empleado_Extra::~Empleado_Extra(void)
{ 
}

int Empleado_Extra::getNumHoras()
{	return num_horas;
}
void Empleado_Extra::setNumHoras(int n)
{	if (n>=1)
		num_horas=n;
}

double Empleado_Extra::getTarifaExtras()
{	return tarifa_extras;
}
void Empleado_Extra::setTarifaExtras(double t)
{	if (t>0)
		tarifa_extras=t;
}

double Empleado_Extra::getPago() //Obtiene pago
{
	double p = pago_neto + num_horas * tarifa_extras;
	return p;
}

void Empleado_Extra::imprimeCheque( ) 
{
	cout << "\n________________________________________________\n";
	cout << "Paguese a la orden de " << getNombre() << endl;
	cout << "La suma de " << getPago() << " Dolares\n";
	cout << "________________________________________________\n";
	cout << "Id del empleado: " << getId( ) << endl;
}