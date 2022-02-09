#include <iostream> 
using namespace std;

int mainedades()
{
	bool genero = true;
	int edad, answer; 
	cout << "Cual es su edad "; 
	cin >> edad; 
	cout << "Es usted un hombre (1/0) ";
	cin >> genero; 
	if (genero == true)
	{
		if (edad <= 30)
		{
			cout << "Cual es la raiz cuadrada de 144:  ";
			cin >> answer;
			if (answer == 12)
				cout << "usted puede participar";
			else
				cout << "Usted no puede participar";
		}
		else
			cout << "Usted no puede participar"; 


	}
	else
		if (edad <= 32)
		{
			cout << "Cual es la raiz cuadrada de 144";
			cin >> answer;
			if (answer == 12)
				cout << "usted puede participar";
			else
				cout << "Usted no puede participar";
		}
		else
			cout << "Usted no puede participar"; 
		
	return 0; 
}