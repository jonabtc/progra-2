
# include <iostream>
# include <cmath>

using namespace std;

void TrianguloEqui(double xA, double yA, double xB, double yB, double *xC, double *yC) 
{
	double pi = 3.141592654;
	double AB = sqrt(pow((xA - xB),2) + pow((yA - yB),2));
	
	if (xA!=xB)
	{
		*xC = (xA + xB)/2;
		if((((xA + xB)/2)-(AB*AB))>=0)
			*yC = sqrt(((xA + xB)/2)-(AB*AB));
		else 
			*yC = sqrt(-1*(((xA + xB)/2)-(AB*AB)));
	}
	else
	{
		if((((AB*AB)-((yA + yB)/2)))>=0)
			*xC = sqrt((AB*AB)-((yA + yB)/2));
		else
			*xC = sqrt(-1*((AB*AB)-((yA + yB)/2)));
		*yC = ( yB + yA) / 2;
	}
	return;
}
int main()
{
	double equisA, yeA, equisB, yeB, equisC, yeC;
	
	cout << "Ingrese el punto A: " << endl;
	cout << "Coordenada X: ";	cin >> equisA; 
	cout << "Coordenada Y: ";	cin >> yeA; 
	
	cout << "Ingrese el punto B: " << endl; 
	cout << "Coordenada X: ";	cin >> equisB; 
	cout << "Coordenada Y: ";	cin >> yeB;
	
	TrianguloEqui(equisA, yeA, equisB, yeB, &equisC, &yeC);
	system("CLS");
	cout << "Los puntos del triángulo equilátero son: " << endl
		 << "A (" << equisA << ", " << yeA << ")" << endl
		 << "B (" << equisB << ", " << yeB << ")" << endl
		 << "C (" << equisC << ", " << yeC << ")" <<endl;
	
	return 0;	
}
