//Jonathan Ocles

#include <iostream>

using namespace std;

int main()
{
	int arreglo[100];
	int array[12];
	int numero1, numero2, aux1, aux2;
	cout <<"\t Ingrese dos numeros con no mas de 8 digitos cada uno\n\n  Primer numero: ";
	cin >> numero1;
	cout <<"  Segundo numero: ";
	cin >> numero2;
	
	cout << "\n\t "<<numero1<<endl<<"\t+ "<<numero2<<endl<<"\t__________" << endl;
	for (int i =0; numero1>0;i++)
	{
		aux1=i;
		arreglo[i] = numero1 % 10;
		numero1 /= 10;
//	cout << arreglo [i];
	}
	cout << endl<<"\t  ";
	for (int i =0; numero2>0;i++)
	{
		aux2=i;
		array[i] = numero2 % 10;
		numero2 /= 10;
//	cout << array [i];
	}
	if (aux2>=aux1)
	{		
		for(int i=aux2;i>=0;i--){
			int suma = array[i] + arreglo[i];			
			if (suma>9){
				suma = suma - 10;
				cout << suma;
			}
			else 
				cout << suma;
				}
	}
	else 
	{
		for(int i=aux1;i>=0;i--){
			int suma = array[i] + arreglo[i];			
			if (suma>9){
				suma = suma - 10;
				cout << suma;
			}
			else 
				cout << suma;
				}
	}
	
	
}
