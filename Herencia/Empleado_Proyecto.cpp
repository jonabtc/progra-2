#include "Empleado_Proyecto.h"
#include <iostream>

using namespace std;

Empleado_Proyecto::Empleado_Proyecto()
{
	numero = 0;
}
Empleado_Proyecto::Empleado_Proyecto(string nombre, string id) :Empleado(nombre, id)
{
	numero = 0;
}
Empleado_Proyecto::~Empleado_Proyecto(){}
void Empleado_Proyecto::SetProyecto_Valor(string Proyecto, double val)
{
	setPago(getPago()+val);
	proyecto[numero] = Proyecto;
	valor[numero] = val;
	numero++;
}
void Empleado_Proyecto::imprimeCheque()
{
	cout << "\n________________________________________________\n";
	cout << "Paguese a la orden de " << getNombre() << endl;
	cout << "La suma de " << getPago() << " Dolares\n";
	for (int i = 0; i < numero; i++)
		cout << proyecto[i] << "   $" << valor[i] << endl;
	cout << "Cantidad de proyectos realizados: " << numero << endl;
	cout << "________________________________________________\n";
	cout << "Id del empleado: " << getId() << endl;
	
	
}