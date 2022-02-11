#include <iostream> 
#include <string>
using namespace std;

int mainHabitaciones()
{
    // Declarando variables
    float largo, ancho, area, area_c_aux, area_c_total = 0;
    int habi, c=0;
    // Solicitud de info
    cout << "Ingresa el largo del terreno: ";
    cin >> largo;
    cout << "Ingresa el ancho del terreno: ";
    cin >> ancho;
    // Calculando area total del terreno
    area = ancho * largo;
    cout << "El area del terreno es: " << area << "\n";

    cout << "Cuantas habitaciones desea construir\n";
    cin >> habi;
    for (int i = 0; i < habi; i++)
    {
        cout << "Dame el area del cuarto " << i + 1 << ": ";
        cin >> area_c_aux;
        area_c_total = area_c_total + area_c_aux;
    }
    if (area_c_total < area)
    {
        cout << "\n Sugiero un jardin de area " << area - area_c_total<<endl;
    }
    else
    {
        cerr << "El area de los cuartos supera el area del terreno :( \n";
    }


    system("PAUSE()");
    return 0;
}
