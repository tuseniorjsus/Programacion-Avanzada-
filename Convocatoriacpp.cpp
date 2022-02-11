#include <iostream> 
#include <string>
using namespace std;

int mainconvocatoria()
{


	char genero ;
	int edad, answer, resp=0, conte=0, contac=0;

	do {
		cout << "Cual es su edad ";
		cin >> edad;
		do {
			cout << "Cual es su género(M/H/O)";
			cin >> genero;
			if (genero != 'h' && genero != 'H' && genero && genero != 'm' && genero != 'M' && genero != 'o' && genero != 'O')
				cerr << "genero no válido"; 
		} while (genero != 'h' && genero != 'H' && genero && genero != 'm' && genero != 'M' && genero != 'o' && genero != 'O'); 
		if (genero == 'h'||genero == 'H')
		{
			if (edad <= 30)
			{
				cout << "Cual es la raiz cuadrada de 144:  ";
				cin >> answer;
				conte++;
				if (answer == 12)
				{
					cout << "usted puede participar";
					contac++;
				}
				else
					cout << "Usted no puede participar";
			}
			else
				cout << "Usted no puede participar";


		}
		else
			if (edad <= 32)
			{
				cout << "Cual es la raiz cuadrada de 144:  ";
				cin >> answer;
				conte++;
				if (answer == 12)
				{
					cout << "usted puede participar";
					contac++;
				}
				else
					cout << "Usted no puede participar";
			}
			else
				cout << "Usted no puede participar\n";

		do {
			cout << "\nDesea ingresar a mas participantes(1/0)";
			cin >> resp; 
			if (resp != 1 && resp != 0)
			{
				cout << "Favor de ingresar una opcion valida\n";
			}
		} while (resp != 1 && resp != 0);
	} while (resp == 1);
	cout << "El numero de participantes que son elegibles es de: " << conte<<"\n";
	cout << "El numero de participantes que fueron seleccionados es de : " << contac; 
	return 0;
}


	