#ifndef DOBLE_H
#define DOBLE_H

#include "Apuesta.h"

class Doble : public Apuesta
{
	public:
		Doble(int v);
		~Doble();
		void getApuesta(); // Lee la apuesta desde la pantalla
		bool gano(int resultado); // Verifica si gano en base al resultado
		int getGana(int resultado);
		char getTipo();
	protected:
		int apuesta2;
};

#endif
