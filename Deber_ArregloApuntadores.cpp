# include <iostream>
# include <cstdlib>

using namespace std;

int main()
{
	cout << "Autor: Jonathan Ocles" << endl;
	
	int m[20], *a[20], *numeroAux;
	char opcion;
	for(int i=0;i<20;i++)
		m[i]=100+rand()%900;
	


	for (int i=0;i<20;i++) 
	{
		a[i] = &m[i];
	}
	
	cout << "Ingrese el tipo de orden en que desea ver el arreglo:" << endl
		 << "a: Orden Original\nb: Por el dígito de la derecha\nc: Por el dígito del centro\nd: Por el dígito de la izquierda\ne: Salir" << endl;
		 
	cin >> opcion;
	system("CLS");
	
	while(opcion!='e')
	{
		switch(opcion)
		{
			case 'a':
				for(int i=0;i<20;i++) 
					cout << m[i] << endl;
				system("PAUSE");
				system("CLS");
				cout << "Ingrese el tipo de orden en que desea ver el arreglo:" << endl
		 		<< "a: Orden Original\nb: Por el dígito de la derecha\nc: Por el dígito del centro\nd: Por el dígito de la izquierda\ne: Salir" << endl;
				cin >> opcion;
				break;
			case 'b':
					for (int i = 0; i<20;i++)
					{
						for (int j=i+1;j<20;j++)
							if((*a[i]%10)>=(*a[j]%10))
							{
				 		     	numeroAux = a[j];
                     		    a[j] = a[i];
                       		    a[i] = numeroAux;
							}		
					}

					for(int i=0;i<20;i++) 
						cout <<*a[i] << endl;
				system("PAUSE");
				system("CLS");
				cout << "Ingrese el tipo de orden en que desea ver el arreglo:" << endl
		 		<< "a: Orden Original\nb: Por el dígito de la derecha\nc: Por el dígito del centro\nd: Por el dígito de la izquierda\ne: Salir" << endl;
				cin >> opcion;
				break;
			case 'c':
				for (int i = 0; i<20;i++)
				{
					for (int j=i+1;j<20;j++)
						if((*a[i]%100)>=(*a[j]%100))
						{
					      	numeroAux = a[j];
                   	        a[j] = a[i];
                   	     	a[i] = numeroAux;
						}		
				}
				for(int i=0;i<20;i++) 
						cout <<*a[i] << endl;
				system("PAUSE");
				system("CLS");
				cout << "Ingrese el tipo de orden en que desea ver el arreglo:" << endl
		 		<< "a: Orden Original\nb: Por el dígito de la derecha\nc: Por el dígito del centro\nd: Por el dígito de la izquierda\ne: Salir" << endl;
				cin >> opcion;
				break;
			case 'd':
				for (int i = 0; i<20;i++)
				{
					for (int j=i+1;j<20;j++)
						if((*a[i]%1000)>=(*a[j]%1000))
						{
					      	numeroAux = a[j];
                   	        a[j] = a[i];
                   	     	a[i] = numeroAux;
						}		
				}
				for(int i=0;i<20;i++) 
						cout <<*a[i] << endl;
				system("PAUSE");
				system("CLS");
				cout << "Ingrese el tipo de orden en que desea ver el arreglo:" << endl
		 		<< "a: Orden Original\nb: Por el dígito de la derecha\nc: Por el dígito del centro\nd: Por el dígito de la izquierda\ne: Salir" << endl;
				cin >> opcion;
				break;
			default: 
				cout << "ELIGA UNA DE LAS OPCIONES VALIDAS" << endl;
				system("PAUSE");
				system("CLS");
				cout << "Ingrese el tipo de orden en que desea ver el arreglo:" << endl
		 		<< "a: Orden Original\nb: Por el dígito de la derecha\nc: Por el dígito del centro\nd: Por el dígito de la izquierda\ne: Salir" << endl;
				cin >> opcion;
				break;
				
		}
	}
	system("PAUSE");
	return 0;
}

