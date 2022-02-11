#include <iostream> 
#include <string>
#include <array>
using namespace std;

int main()
{
	int answer = 1 ; 
	array<int, 4> Candidatos = { 0,0,0,0 };
	int candidato; 

	do {
		do {
			cout << "Por que candidato va a votar (1/2/3/4)\n";
			cin >> candidato; 

		}while(candidato != 1 && candidato != 2 && candidato != 3 && candidato != 4); 

		Candidatos[candidato - 1] = Candidatos[candidato - 1] + 1; 
		cout << "Quieres seguir votando(1/0)\n"; 
		cin >> answer; 
	}while(answer == 1);

	for (int i = 0; i < 4; i++)
	{
		cout << "Los votos del candidato " << i + 1 << " es de: " << Candidatos[i]<<endl; 
	}
	return 0;
}