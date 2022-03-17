#include <iostream>
#include <array>
#include < algorithm>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std; 
const int nEquipos =5; 
int main()
{
	srand(time(0)); 
	int dado, partido1, partido2, total, mayor; 
	array<int,nEquipos>puntajes; 
	array<string, nEquipos> nombres; 
	array<int, nEquipos>::iterator ipuntajes;
	array<string, nEquipos>::iterator  inombres, inombresf;
	inombres = nombres.begin(); 
	inombresf = nombres.end(); 
	
	 

	for (int i = 0; i < nEquipos; i++)
	{
		cout << "Ingresa el nombre del equipo: \n"; 
		getline(cin, nombres[i]); 
		dado = 1 + (rand() % 3);
		partido1 = dado; 
		dado = 1 + (rand() % 3);
		partido2 = dado; 
		total = partido1 + partido2; 
		puntajes[i] = total; 

	}
	sort(inombres, inombresf);
	for (string nom : nombres)
	{
		cout << "Nombre: " << nom << " \n";
	}


}
