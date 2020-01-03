// Clase Empleado
// Autor: Pablo Yépez

#include <string>
using std::string;

#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;

#include "Empleado.h"

Empleado::Empleado() 
: nombre("Sin nombre"), id("Sin id")
{	setPago(0);
}
Empleado::Empleado(string Nombre, string Id)
: nombre(Nombre), id(Id)
{	setPago(0);
}
Empleado::~Empleado(void)
{	
}

string Empleado::getNombre() // Obtiene Nombre
{
return nombre;
}
string Empleado::getId() // Obtiene Id
{
return id;
}
double Empleado::getPago() //Obtiene pago
{
	return pago_neto;
}
void Empleado::setNombre(string newNombre)
{
	nombre = newNombre;
}
void Empleado::setId(string newId)
{
	id = newId;
}
void Empleado::setPago (double pago)
{
	pago_neto = pago;
}
void Empleado::imprimeCheque( ) 
{
	cout << "\n________________________________________________\n";
	cout << "Paguese a la orden de " << getNombre() << endl;
	cout << "La suma de " << getPago() << " Dolares\n";
	cout << "________________________________________________\n";
	cout << "Id del empleado: " << getId( ) << endl;
}
