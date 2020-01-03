# include <iostream>
# include <cmath>

using namespace std;



void SumaVectores(double modA, double angA, double modB, double angB, double *modC, double *angC)
{
	double pi = 3.141592654;
	
	double x = (modA*cos(angA*pi/180))+(modB*cos(angB*pi/180));
	double y = (modA*sin(angA*pi/180))+(modB*sin(angB*pi/180));
	
	*modC = sqrt((x*x)+(y*y));
	*angC = (acos( x / *modC)*180)/pi;
	return;
} 

int main(){
	
	double moduloA, anguloA, moduloB, anguloB, modC, angC;
	
	cout << "Ingrese el vector A:" << endl;
	cout << "módulo: " ; cin >> moduloA; 
	cout << "ángulo: " ; cin >> anguloA;
	system("CLS");
	
	cout << "Ingrese el vector B:" << endl;
	cout << "módulo: " ; cin >> moduloB; 
	cout << "ángulo: " ; cin >> anguloB;
	system("CLS");
	
	cout << "A (" << moduloA << ", " << anguloA << ")" << endl;
	cout << "B (" << moduloB << ", " << anguloB << ")" << endl << endl;
	
	SumaVectores(moduloA, anguloA, moduloB, anguloB, &modC, &angC);
	
	cout << "La suma de ambos vectores da como resultado C (" << modC << ", " << angC << ")"<<endl;
}

