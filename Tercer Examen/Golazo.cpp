#include "Apuesta.h"
#include "Simple.h"
#include "Doble.h"
#include <iostream>
using namespace std;

int main()
{
	Apuesta *m[5];
	char op;
	int val, resul;

	for (int i=0; i<5; i++)
	{	cout<< i+1 <<": Valor de la apuesta? "; cin >> val;
		cout<<"(S)Simple, (D)Doble ? "; cin >> op;

		if (op=='S' || op=='s')
			m[i] = new Simple(val);
		else
			m[i] = new Doble(val);
		
		m[i] -> getApuesta();
		cout << endl;		
	}
	cout << "Resultado del partido (1)Local (2)Empate (3)Visitante:";
	cin >> resul;

	for (int i=0; i<5; i++)
	{	
		if (m[i]->gano(resul))
			cout << i+1 << m[i]->getTipo() << " Gana: " << m[i]->getGana(resul) << endl;
		else
			cout << i+1 << m[i]->getTipo() << " No gana" << endl;	}
	return 0;
}
