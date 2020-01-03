#ifndef APUESTA_H
#define APUESTA_H

class Apuesta
{
private:
	int valor; //Valor de la apuesta.

protected:
	int apuesta; // (1)Local (2)Empate (3)Visitante

public:
	Apuesta(int v);
	~Apuesta(void);

	int getValor(); // Retorna el valor de la apuesta.
	virtual void getApuesta()=0; // Lee la apuesta desde la pantalla
	virtual bool gano(int resultado)=0; // Verifica si gano en base al resultado
	virtual int getGana(int resultado)=0; // Retorna el valor que gano
	virtual char getTipo(); // Retorna el tipo de la apuesta
};
#endif
