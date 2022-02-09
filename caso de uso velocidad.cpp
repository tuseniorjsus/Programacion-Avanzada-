#include <iostream> 
using namespace std;
#include <math.h>


int mainvelocidad()
{
	double vel, min, seg, cente, distancia, time; 
	cout << "Cuanta distancia recorrio el corredor en m\n"; 
	cin >> distancia; 
	cout << "INGRESA TU TIEMPO(minutos, segundos, centesimas)\n"; 
	cin >> min>> seg >> cente; 
	if (min > 0)
		min = min * 60; 
	if (cente > 0)
		cente = cente * 0.01; 
	time = cente + min + seg; 
	cout << "Tu tiempo en segundos es: " << time<<"\n";
	vel = distancia / time; 
	vel = (vel * 3600) / 1000; 
	cout << "La velocidad en km/h del patinador es de: " << vel << endl; 

	return 0; 
}