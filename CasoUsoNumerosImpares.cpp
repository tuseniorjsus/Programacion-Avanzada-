#include <iostream> 
#include <string>
using namespace std;

int mainImpares()
{
	int upper, lower, suma=0, inicio, fin;
	
	cout << "Ingresa el limite inferior del rango de numeros:\n";
	cin >> lower;
	cout << "Ingresa el limite superior del rango de numeros:\n";
	cin >> upper; 
	inicio = lower; 
	fin = upper; 
	for (lower; lower < upper+1; lower++)
	{
		if (lower % 2 == 0||lower==13)
		{
			continue;
		}
		
		
		cout << lower<<"\n";
		suma = suma + lower;
	
	}
	cout << "\nLa suma total de los numeros impares del rango: " << inicio << "--" << fin << " es de: "<<suma<<endl; 
	return 0;
}
