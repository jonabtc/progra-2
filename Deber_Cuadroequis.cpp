//Jonathan Ocles
//Deber2.2: Tablero semejante al juego buscaminas

# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

int main()
{

	int a[10][10] = { 0 }, n, auxiliar = 0;
	cout << "Ingrese el número de marcas: ";
	cin >> n;
	srand(time(0));

	while (auxiliar < n)
	{
		while (a[rand() % 10][rand() % 10] != 'x')
		{
			a[rand() % 10][rand() % 10] = 'x';
			auxiliar++;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[i][j] == 'x')
			{
				if (a[i - 1][j - 1] != 'x')
					a[i - 1][j - 1] += 1;
				if (a[i - 1][j] != 'x')
					a[i - 1][j] += 1;
				if (a[i - 1][j + 1] != 'x')
					a[i - 1][j + 1] += 1;
				if (a[i][j - 1] != 'x')
					a[i][j - 1] += 1;
				if (a[i][j + 1] != 'x')
					a[i][j + 1] += 1;
				if (a[i + 1][j - 1] != 'x')
					a[i + 1][j - 1] += 1;
				if (a[i + 1][j] != 'x')
					a[i + 1][j] += 1;
				if (a[i + 1][j + 1] != 'x')
					a[i + 1][j + 1] += 1;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[i][j] == 'x')
				cout << "X ";
			else
				cout << a[i][j] << " ";
		}
		cout << endl;
	}
	system("PAUSE");
}