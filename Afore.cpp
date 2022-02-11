#include<iostream>
#include<math.h>
using namespace std;
int mainAfore()
{
	char opp;
	int op;
	double saldo, total, totalt;
	do {
		
		    cout << "Cual es su saldo: ";
		    cin >> saldo;
	  do {
		  cout << "Bienvenido al menu:\n";
		  cout << "1. Entre 18 y 36\n";
		  cout << "2. Entre 37 y 45\n";
		  cout << "3. Entre 45 y 59\n";
		  cout << "4. Mayor a 60\n";
		  cout << "En que rango de edad esta(eliga un numero): ";
		  cin >> op;
		  if (op != 1 && op != 2 && op != 3 && op != 4)
			  cerr << "Ingrese una opcion valida\n";

		} while (op != 1 && op != 2 && op!= 3 && op !=4);
		switch (op)
		{
		case 1:
		{
			total = saldo * 0.08;
			totalt = saldo + total;
			break;
		}
		case 2:
		{
			total = saldo * 0.07;
			totalt = saldo + total;
			break;
		}
		case 3:
		{
			total = saldo * 0.06;
			totalt = saldo + total;
			break;
		}
		case 4:
		{
			total = saldo * 0.05;
			totalt = saldo + total;
			break;
		}
		default:
		{
			cout << "Esa opción no existe.\n";
			totalt = 0;
			total = 0;
			break;
		}
		}
		cout << "Rendimiento generado: " << total << "\n";
		cout << "Total de saldo: " << totalt << "\n";
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "Quieres sacar otro saldo(s/n)?\n";
		cin >> opp;

	} while (opp != 'n');

	system("PAUSE()");
	return 0;

}