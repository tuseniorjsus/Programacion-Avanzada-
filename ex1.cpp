#include <iostream> 
#include <string>
#include <array>
#include <vector>

using namespace std;

int mainex1()
{
	string clave = "1234", secreto = "enero", answer, key;
	int flag =0; 
	
	
	for (int i = 0; i < 3; i++) 
	{
		
			cout << "Cual es la clave de 4 digitos  de la cuenta ??\n";
			cin >> key;
		

	
		
		if (key[0] == clave[0] && key[1] == clave[1] && clave[2] == key[2] && key[3] == clave[3]) 
		{
			flag = 1; 
			i = 3; 
		}
		else
		{
			cout << "La clave es incorrecta intente de nuevo\n"; 
		}
	}

	if (flag == 0)
	{
	  cout<<"Se ha vencido el numero de intentos\n";
	}
	else
	{
		cout << "Cual es el mes de tu cumpleaños\n"; 
		cin >> answer; 
		if (answer == secreto)
		{
			cout<<"Sea bienvenido a su cuenta\n"; 
		}
		else
		{
			cout << "Mensaje incorrecto, fin del programa"<<endl; 
		}
	}

	
	
	
	

	return 0;
}