//Autor: Jonathan Ocles
//Fecha: 26 de Marzo 2015
#ifndef FECHA_H
#define FECHA_H
class Fecha
{
private:
	int anio; //Anio de la fecha
	int mes; //Mes de la fecha
	int dia; //Dia de la fecha
	bool bisiesto;
public:
	Fecha();
	Fecha(int a, int m, int d);
	void setAnio(int a);
	int getAnio(); 
	void setMes(int m); 
	int getMes();
	void setDia(int d); 
	int getDia(); 
	void setBisiesto(int a);
	bool getBisiesto();
	void leerFecha();
	void SumaRestaAnio(int a, bool b); // Si b es true suma un entero a un año , si es false resta un entero a un año. 
	void SumaMeses(int entero, bool b); // Si b es true suma un entero a los meses, si es false resta  un entero a los meses
	void SumaDias(int entero, bool b); // Si b es true suma un entero a los dias, si es false resta un entero a los dias.
	void mesCorto();
	void mesLargo();
	void mostrarCorto1();
	void mostrarCorto2();
	void mostrarLargo();
	void diaDeLaSemana();
};
#endif
