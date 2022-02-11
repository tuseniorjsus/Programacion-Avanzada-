#include <iostream> 
#include <string>
using namespace std;

int main()
{
	

	bool genero = true;
	int edad, answer, resp, conte, contac; 

    do{
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
			cout << "Cual es la raiz cuadrada de 144";
			cin >> answer;
            conte++; 
			if (answer == 12)
            {
				cout << "usted puede participar";
                contac++; }
			else
				cout << "Usted no puede participar";
		}
		else
			cout << "Usted no puede participar"; 
		
        do{
    cout<<"Desea ingresar a más participantes(1/0)"; 
    if (resp != 1&& resp!= 0) 
    {
        cout<<"Favor de ingresar una opcion válida\n"; 
    }
        }while(resp != 1&& resp!= 0); 
    }while(resp == 1);


	return 0;
}