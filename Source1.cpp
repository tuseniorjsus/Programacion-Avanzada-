#include <iostream> 
#include <string>
using namespace std;

int mainsource1()
{
	int i; 
	string nom[3];
	int edad[3];
	
	
	
	for (i = 0; i < 6; i++)
	{
		if (i < 3)
		{
			cout << "Ingresa el nombre del alumno\n";
			cin >> nom[i];
			cout << "Ingresa la edad del alumno\n";
			cin >> edad[i];
		}
		if (i >= 3)
		{
			cout << "El nombre del alumno " << (i - 2) << ": " << nom[i - 3]<<endl;
			cout << "La edad del alumno " << (i - 2) << ": " << edad[i - 3]<<"\n";
		}
	}
	
	
	

	return 0;
}