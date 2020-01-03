//Jonathan Ocles
//Deber2.1: Juego de bolitas al azar

# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

int main(){
	int a[10]={0};
	srand(time(0));
	
	for (int i=0;i<200;i++)
	{
		a[rand()%10]+=1;	
	}

	for (int i=0; i<10;i++)
	{
		cout <<" "<<i+1<<":  "<<a[i]<<"| ";
		for (int j=0;j<=a[i];j++)
			cout << "*";
		cout << endl;		
	}
	system("PAUSE");
}
