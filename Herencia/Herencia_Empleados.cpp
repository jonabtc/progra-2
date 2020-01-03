// Herencia_Empleados.cpp : Defines the entry point for the console application.
// Autor: Pablo Yepez

#include <string>
#include <cstdlib>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

#include "Empleado.h"
#include "Empleado_Extra.h"
#include "Empleado_Proyecto.h"
int main()
{
	Empleado juancito("Juancito", "12345");

	juancito.setPago(1234.56);
	juancito.imprimeCheque();
	cout << endl;
	cout << endl;


	Empleado_Extra pepito("Pepito", "4325");
	pepito.setPago(1000);
	pepito.setNumHoras(5);
	pepito.setTarifaExtras(8.5);
	pepito.imprimeCheque();
	cout << endl;
	Empleado_Proyecto mauricon("Mauricon", "8723");
	mauricon.setPago(2222.2);
	mauricon.SetProyecto_Valor("Pintar", 2345);
	mauricon.SetProyecto_Valor("Pintaras", 2344);
	mauricon.SetProyecto_Valor("Pintaremos", 2347);
	mauricon.imprimeCheque();

	system("PAUSE");
	return 0;
}

