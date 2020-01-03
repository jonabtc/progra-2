// Clase Empleado
// Autor: Pablo Yépez

#ifndef EMPLEADO_H
#define EMPLEADO_H


#include <string>
using std::string;

class Empleado
{
private:
	string nombre; // Nombre del empleado
	string id; // Identificacion del empleado

protected:
	double pago_neto; // Pago de salario

public:
	Empleado( ); // Constructor Default
	Empleado(string Nombre, string Id); // COnstructor con datos del empleado
	~Empleado(); // Destructor

	string getNombre(); // Obtiene Nombre
	string getId(); // Obtiene Id
	double getPago(); //Obtiene pago
	void setNombre(string newNombre);
	void setId(string newId);
	void setPago(double pago);
	void imprimeCheque() ;
};

#endif 
