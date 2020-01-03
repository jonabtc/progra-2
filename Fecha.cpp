//Autor: Jonathan Ocles
//Fecha: 26 de Marzo 2015

#include <iostream>
#include "Fecha.h"
#include <ctime>
using namespace std;

Fecha::Fecha(int a, int m, int d) //Contructor con todos los datos
{
	setAnio(a);
	setMes(m);
	setDia(d);
}
Fecha::Fecha()
{
	time_t p = time(NULL);
	struct tm* now = localtime(&p);
	anio = now->tm_year + 1900;
	mes = now->tm_mon + 1;
	dia = now->tm_mday;
}
void Fecha::setMes(int m)
{
	if (m >= 1 && m <= 12)
		mes = m;
	else
		mes = 1;
}
int Fecha::getMes()
{
	return mes;
}

void Fecha::setAnio(int a)
{
	anio = a;
}
int Fecha::getAnio() 
{
	return anio;
}
void Fecha::setDia(int d) // Valida la entrada del día
{


	if (getMes() == 1 || getMes() == 3 || getMes() == 5 || getMes() == 7 || getMes() == 8 || getMes() == 10 || getMes() == 12)
	{
		if (d > 0 && d <= 31)
			dia = d;
		else
			dia = 1;
	}
	if (getMes() == 2)
	{
		if (getBisiesto())
		{
			if (d > 0 && d <= 29)
				dia = d;
			else
				dia = 1;
		}
		else
		{
			if (d > 0 && d <= 28)
				dia = d;
			else
				dia = 1;
		}
	}


	if (getMes() == 4 || getMes() == 6 || getMes() == 9 || getMes() == 11){

		if (d > 0 && d <= 30)
			dia = d;
		else
			dia = 1;
	}
}
int Fecha::getDia()
{
	return dia;
}
void Fecha::setBisiesto( int a)
{
	bool b;
	if ((a % 4 == 0) && !((a % 100 == 0) && (a % 400 != 0)))
	{
		b = true;
	}
	else
	{
		b = false;
	}
	bisiesto = b;
}
bool Fecha::getBisiesto()
{
	return bisiesto;
}
void Fecha::SumaRestaAnio(int a, bool b) //suma o resta un entero a un año
{
	if (b)
		setAnio(getAnio() + a);

	else
		setAnio(getAnio() - a);
}
void Fecha::SumaMeses(int entero, bool b)
{
	int m = getMes();
	int a = getAnio();

	if (b)
	{
		for (int i = 0; i < entero; i++)
		{
			if (m == 12 && i < entero)
			{
				a += 1;
				m = 1;
			}
			else
				m++;
		}
	}
	else
	{
		for (int i = 0; i < entero; i++)
		{
			if (m == 1 && i < entero)
			{
				a -= 1;
				m -= 1;
			}
			else
				m -= 1;
		}
	}
	setAnio(a);
	setMes(m);
}
void Fecha::mesCorto()
{
	switch (mes)
	{
	case 1:cout << "ene"; break;
	case 2:cout << "feb"; break;
	case 3:cout << "mar"; break;
	case 4:cout << "abr"; break;
	case 5:cout << "may"; break;
	case 6:cout << "jun"; break;
	case 7:cout << "jul"; break;
	case 8:cout << "ago"; break;
	case 9:cout << "sep"; break;
	case 10:cout << "oct"; break;
	case 11:cout << "nov"; break;
	case 12:cout << "dic"; break;		
	}
}

void Fecha::mostrarCorto1() // Permite mostrar en la pantalla una Fecha
{
	
		
	cout << anio << ":"; mesCorto();cout << ":"	<< dia;
}
void Fecha::mostrarCorto2() // Permite mostrar en la pantalla una Fecha
{
	
		
	cout << anio << ":"; mesCorto();cout << ":"	<< dia;
}
void Fecha::mesLargo()
{
	switch (mes)
	{
	case 1:cout << "enero"; break;
	case 2:cout << "febrero"; break;
	case 3:cout << "marzo"; break;
	case 4:cout << "abril"; break;
	case 5:cout << "mayo"; break;
	case 6:cout << "junio"; break;
	case 7:cout << "julio"; break;
	case 8:cout << "agosto"; break;
	case 9:cout << "septiembre"; break;
	case 10:cout << "octubre"; break;
	case 11:cout << "noviembre"; break;
	case 12:cout << "diciembre"; break;		
	}
}
void Fecha::mostrarLargo() // Permite mostrar en la pantalla una Fecha
{	
	diaDeLaSemana(); cout << "," << dia << " de "; mesLargo(); cout << " de " << anio;
}
void Fecha::diaDeLaSemana()
{
    int regular[]={0,3,3,6,1,4,6,2,5,0,3,5};
	int bisiesto[]={0,3,4,0,2,5,0,3,6,1,4,6};
	int d=getDia(),m=getMes(),a=getAnio();
	int result1,result2,result3,result4,result5;
	if((a%4==0) && !(a%100==0))
	{
  	  m=bisiesto[m-1];
	}
	else if (a%400==0)
	{
    m=bisiesto[m-1];
	}
	else
	{
	    m=regular[m-1];
	}
	result1=(a-1)%7;
	result2=(a-1)/4;
	result3=(3*(((a-1)/100)+1))/4;
	result4=(result2-result3)%7;
	result5=d%7;
	int x=(result1+result4+m+result5)%7;
    
	switch(x)
	{
	case 0:cout << "Domingo"; break;
	case 1:cout << "Lunes"; break;
	case 2:cout << "Martes"; break;
	case 3:cout << "Miercoles"; break;
	case 4:cout << "Jueves"; break;
	case 5:cout << "Viernes"; break;
	case 6:cout << "Sabado"; break;	
	}
}
void Fecha::SumaDias(int entero, bool b)
{
	int d=getDia();
	int m=getMes();
	int a=getAnio();
	for (int i=0;i<entero;i++)
	{
	
	if(b)
	{
		if(m== 1 || m == 3 ||m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			{
				if (d<=31)
					d++;
				else
				{
					d=1;
					m++;	
				}
			}
		if (m == 2)
			{
				if (getBisiesto())
					{
						if (d <= 29)
							d++;
						else
						{
							d = 1;
							m++;	
						}
					}
				else
					{
						if (d <= 28)
							d++;
						else
						{
							d = 1;
							m++;	
						}
					}
					
			}
		if (m == 4 || m == 6 || m == 9 || m == 11)
			{
				if (d <= 30)
					 d++;
				else
				{
					d=1;
					m++;
				}
			}
		if(m==12&&i<entero)
	{
		a++;
		setAnio(a);
	}	
			
	}	
	else
	{
		if(m== 1 || m == 3 ||m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			{
				if (d>=1 && d <= 31)
					d--;
				else
				{
				
				if (d > 31)
					d = 29;
				else
				{
					d=30;
					m--;	
				}
				}
			}
		if (m == 2)
			{
				if (getBisiesto())
					{
						if (d >= 1&&d<=29)
							d--;
						else
						{
						if (d>29)
							{
								d=28;
							}
						else
						{
							d = 29;
							m--;	
						}
						}
					}
				else
					{
						if (d >= 1 && d <= 28)
							d--;
						else
						{
						if (d > 28)
							d=27;
						else
						{
							d = 28;
							m--;	
						}
						}
					}
					
			}
		if (m == 4 || m == 6 || m == 9 || m == 11)
			{
				if (d >=1 && d <= 30)
					 d++;
				else
				{
				 if(d>30)	
				 	d=29;
					else
					{
					d=30;
					m--;
					}
				}
			}	
	}
	setDia(d);setMes(m);
	if(m==1&&i<entero)
	{
		a--;
		setAnio(a);
	}
}	
}
