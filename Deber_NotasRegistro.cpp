# include <iostream>
# include <iomanip>

using namespace std;
void Imprimir(int notas, int **a, int estu)
{
	for (int i = 0; i < estu; i++)
	{
		cout << "Notas del Estudiante No. " << i + 1 << ": ";
		for (int j = 0; j < notas; j++)
			cout << a[i][j] << setw(2) << "|" << setw(2);
		cout << endl;
	}cout << endl;
	return;
}
int Cantidad_Notas(int notas, int estu)
{
	int  cantidad = 0;
	for (int i = 0; i < estu; i++)
		for (int j = 0; j < notas; j++)
			cantidad++;

	return cantidad;
}
void Promedio(int notas, int **a, int estu)
{
	double suma;
	for (int i = 0; i < estu; i++)
	{
		suma = 0;
		for (int j = 0; j < notas; j++)
		{
			suma += a[i][j];
		}
	cout << "El promedio del Estudiante No. " << i + 1 << " es de " << suma / notas << endl;
	}

	return;
}
int NotaMayor(int notas, int **a, int estu)
{
	int mayor=0;
	for (int i = 0; i < estu; i++)
		for (int j = 0; j < notas; j++)
		{
			if (a[i][j] > mayor)
				mayor = a[i][j];
		}

	return mayor;
}

int main()
{
	cout << "Autor: Jonathan Ocles" << endl;
	int **p, **q, notas;
	char opcion;

	cout << "Ingrese la cantidad de estudiantes: "; cin >> notas;
	
	int estudiantes = notas;
	
	p = new int *[estudiantes];
	
	for (int i = 0; i < estudiantes; i++)
		p[i] = new int[notas];

	for (int i = 0; i < estudiantes; i++)
	{
		cout << "Ingrese las " << notas << " notas del Estudiante No. " << i + 1 << endl;

		for (int j = 0; j < notas; j++)
		{

			cout << "Nota " << j + 1 << ": "; cin >> p[i][j];

			if ((p[i][j] > 10) || (p[i][j] < 1))
			{
				cout << "INGRESO INCORRECTO, por favor ingrese la nota nuevamente" << endl;
				j--;
			}
		}
		system("CLS");
	}
	cout << "== Menu ==" << endl << "a: Consultar las notas" << endl << "b: Ingresar nuevas notas" << endl << "c: Salir" << endl;
	cin >> opcion;
while(opcion!='c')
	{
		
		switch (opcion)
		{
		case 'a':
		{
			
			system("CLS");
			cout << "== CONSULTA DE NOTAS ==" << endl;
			Imprimir(notas, p, estudiantes);
			Promedio(notas, p, estudiantes);
			cout << "\nLa cantidad total de notas ingresadas es " << Cantidad_Notas(notas, estudiantes)
				<< ". Y la nota mayor es "<< NotaMayor(notas, p, estudiantes) << "." << endl;
				
			cout << endl; system("PAUSE"); system("CLS");
			cout << "== Menu ==" << endl << "a: Consultar las notas" << endl << "b: Ingresar nuevas notas" << endl << "c: Salir" << endl;
			cin >> opcion;
			break;
		}
		case 'b':
			{
				int inc;
				cout << "Cuantas notas adicionales desea ingresar?" << endl; cin >> inc;
				q = new int *[estudiantes];
				for (int i = 0; i < estudiantes; i++)
						q[i] = new int[notas+inc];
						
					for (int i = 0; i < estudiantes; i++){ 
							for (int j = 0; j < notas; j++)
									q[i][j] = p[i][j];
									}
				delete [] *p; delete [] p;
				
				for (int i = 0; i < estudiantes; i++)
				{
					cout << "Ingrese las " << notas+inc << " notas del Estudiante No. " << i + 1 << endl;
					
					for (int k = 0; k < notas; k++)
						cout << "Nota " << k + 1 << ": " << q[i][k] << endl;
						
					int j = 0;
					for (j = notas; j < (notas+inc); j++)
					{
						cout << "Nota " << j + 1 << ": "; cin >> q[i][j];
	
						if ((q[i][j] > 10) || (q[i][j] < 1))
						{
							cout << "INGRESO INCORRECTO, por favor ingrese la nota nuevamente" << endl;
							j--;
						}
					}
				}
				p = q;
				notas = notas+inc;			
				cout << endl; system("PAUSE"); system("CLS");
				cout << "== Menu ==" << endl << "a: Consultar las notas" << endl << "b: Ingresar nuevas notas" << endl << "c: Salir" << endl;
				cin >> opcion;
				break;
			}
		default:
			{
				cout << "Ingrese una de las opciones validas descritas.";
				cout << endl; system("PAUSE"); system("CLS");
				cout << "== Menu ==" << endl << "a: Consultar las notas" << endl << "b: Ingresar nuevas notas" << endl << "c: Salir" << endl;
				cin >> opcion;
				break;
				
			}
	}
}
}

