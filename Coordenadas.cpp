//Jonathan Ocles

//Coordenadas.cpp Encuentra si un punto se encuentra dentro de un triángulo mediante coordenadas.


#include <iostream>

using namespace std;

int main()
{
	int aX, bX, cX, mX, aY, bY, cY, mY;
	
	cout << "Ingrese las coordenadas del punto A: " << endl;
	cout << "En x= ";
	cin >> aX;
	cout << "En y= ";
	cin >> aY;
	system ("cls");
	
	cout << "Ingrese las coordenadas del punto B: " << endl;
	cout << "En x= ";
	cin >> bX;
	cout << "En y= ";
	cin >> bY;
	system ("cls");
	
	cout << "Ingrese las coordenadas del punto C: " << endl;
	cout << "En x= ";
	cin >> cX;
	cout << "En y= ";
	cin >> cY;
	system ("cls");
	
	cout << "Ingrese las coordenadas del punto M: " << endl;
	cout << "En x= ";
	cin >> mX;
	cout << "En y= ";
	cin >> mY;
	system ("cls");
	
	cout << "Las coordenadas ingresadas son:" << endl;
	cout << "A(" << aX << "," << aY << ")\n" 
		 << "B(" << bX << "," << bY << ")\n"
		 << "C(" << cX << "," << cY << ")\n"
		 << "M(" << mX << "," << mY << ")\n"<<endl;
		 
	int unoPosicion = (aX-cX)*(bY-cY)-(aY-cY)*(bX-cX); //Calcula la posición del triángulo ABC
	
	int dosPosicion = (aX-mX)*(bY-mY)-(aY-mY)*(bX-mX); //Calcula la posición del triángulo ABM
	int tresPosicion = (aX-cX)*(mY-cY)-(aY-cY)*(mX-cX); //Calcula la posición del triángulo AMC
	int cuatroPosicion = (mX-cX)*(bY-cY)-(mY-cY)*(bX-cX); //Calcula la posición del triángulo MBC
	
	if (unoPosicion > 0)
	{
		if((dosPosicion > 0)&&(tresPosicion > 0)&&(cuatroPosicion > 0))
			cout << "\nM esta dentro del triangulo formado por los puntos A, B y C" << endl;
		else 
			cout << "\nM no esta dentro del triangulo formado por los puntos A, B y C" << endl;
	}
	else 
	{
		if((dosPosicion < 0)&&(tresPosicion < 0)&&(cuatroPosicion < 0))
			cout << "\nM esta dentro del triangulo formado por los puntos A, B y C" << endl;
		else 
			cout << "\nM no esta dentro del triangulo formado por los puntos A, B y C" << endl;
	}
	
	return 0;
}
