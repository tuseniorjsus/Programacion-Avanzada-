#include <iostream> 
#include <string>
using namespace std;

int maincarritodesuper()
{
	float limiteCard, total=0, super, contador=0; 
	bool flag = 0; 
	int resp = 0;

	cout << "Ingresa el limite de la tarjeta de credito:  ";
	cin >> limiteCard; 
	do {
		do
		{


			cout << "De cuanto fue la compra: ";
			cin >> super;
			total = total + super;
			contador++;
			flag = 0; 
			if (total > limiteCard)
			{
				cout << "Esta compra supera el limite de precio establecido en su tarjeta: no se puede realizar\n";
				total = total - super;
				contador--;
				flag = 1;

			}
			super = 0;
			


		} while (total <= limiteCard && flag == 0);
		cout << "El total de las compras fue de: $" << total << "\n";
		cout << "El presupuesto restante es de: " << (limiteCard - total) << "\n";
		cout << "El numero de compras fue de: " << contador <<"\n";
		do {

			cout << "Desea continuar con sus compras?? (1/0)";
			cin >> resp;
			if (resp != 1 && resp != 0)
			{
				cout << "Favor de ingresar una opcion válida";
			
			}
		} while (resp != 1 && resp != 0);
	} while (resp == 1);


	return 0;
}