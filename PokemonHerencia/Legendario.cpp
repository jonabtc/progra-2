#include "Legendario.h"
#include <iostream>
using namespace std;

string Legendario::Normal = "Normal";
string Legendario::Especial = "Especial";
string Legendario::Supremo = "Supremo";
string Legendario::Secundario = "Lucha";

Legendario::Legendario()
{
	clase = "Normal";

}
Legendario::Legendario(string name, string type, string clas)
	:Evolucion(name, type)
{
	clase = clas;
	
}
void Legendario::SetAtaqueExtra(string attack)
{
	ataqueExtra = attack;
	Secundario = attack;
}
string Legendario::Atacar()
{
	return Evolucion::Atacar();
}
string Legendario::Atacar(string attack)
{
	Legendario::Atacado(attack);
	return attack;
}
void Legendario::Atacado(string attack)
{
	
	
	if (energia > 1)
	{
		if (attack == "Lucha")
		{
			if (tipo == "Tierra")
			{
				int a = 10;

				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{		energia -= a; energia += a * 0.25;
			}
			}

			if (tipo == "Aire")
			{
				int a = 40;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}

			if (tipo == "Fuego")
			{
				int a = 50;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}

			if (tipo == "Agua")
			{
				int a = 30;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}

		}
		if (attack == "Hielo")
		{
			if (tipo == "Tierra")
			{
				int a = 30;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
			if (tipo == "Aire")
			{
				int a = 30;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
			if (tipo == "Fuego")
			{
				int a = 40;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
			if (tipo == "Agua")
			{
				int a = 10;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
		}

		if (attack == "Tormenta")
		{
			if (tipo == "Tierra")
			{
				int a = 40;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
			if (tipo == "Aire")
			{
				int a = 10;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
			if (tipo == "Fuego")
			{
				int a = 20;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
			if (tipo == "Agua")
			{
				int a = 30;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
		}
		if (attack == "Llamas")
		{
			if (tipo == "Tierra")
			{
				int a = 50;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
			if (tipo == "Aire")
			{
				int a = 20;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
			if (tipo == "Fuego")
			{
				int a = 10;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
			if (tipo == "Agua")
			{
				int a = 40;
				if (clase == "Normal")
					energia -= a;
				if (clase == "Especial")
				{
					energia -= a; energia += a*0.15;
				}
				if (clase == "Supremo")
				{
					energia -= a; energia += a * 0.25;
				}
			}
		}
	}
	else
	{
		cout << nombre << " ya no puede luchar" << endl;
	}
}
void Legendario::mostrar()
{
	cout << nombre << "[" << tipo << ":" << energia << "]" << "{" << ataqueExtra << "}" << endl;
}
