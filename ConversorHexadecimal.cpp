//Conversor Hexadecimal
//Jonathan Ocles


#include <iostream>

using namespace std;

int main(){
	int decimal, i, j, arreglo[100];
	cout << "Ingrese el un valor decimal: ";
	cin >> decimal;
	i = 0;
	while (decimal > 0)
	{
		arreglo[i]=decimal%16;
		decimal/=16;
		i++;	
	}
	for(j=i-1;j>=0;j--)
		switch (arreglo[j]){
			default:
				cout << arreglo[j];
				break;
			case 10:
				cout << 'A';
				break;
			case 11: 
				cout << 'B';
				break;
			case 12:
				cout << 'C';
				break;
			case 13:
				cout << 'D';
				break;
			case 14:
				cout << 'E';
				break;
			case 15:
				cout << 'F';
				break;
				
		}
		
	cout << endl;
	return 0;
}
