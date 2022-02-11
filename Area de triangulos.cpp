#include <iostream> 
#include <string>
using namespace std;

int mainTriangulos()
{
    int op, i;
    char c;
    float lado, altura, perimetro = 0, area, base, perimetrot = 0;
    do
    {
        cout << "Bienvenido al menu:\n";
        cout << "1.Triangulo equilatero\n";
        cout << "2.Triangulo escaleno\n";
        cout << "3.Triangulo isoceles\n";
        cout << "Elige una opcion: ";
        cin >> op;
        switch (op)
        {
        case 1:
        {
            cout << "Ingrese el valor del lado:";
            cin >> lado;
            cout << "\n";
            cout << "Ingrese el valor de la altura: ";
            cin >> altura;
            area = (lado * altura) / 2;
            perimetro = lado * 3;
            cout << "\n";
            cout << "El area del triangulo es " << area << "\n";
            cout << "El perimetro del triangulo es " << perimetro << "\n";;
            break;
        }
        case 2:
        {
            cout << "Ingrese el valor de la base: ";
            cin >> base;
            cout << "\n";
            cout << "Ingrese el valor de la altura";
            cin >> altura;
            cout << "\n";
            for (i = 1; i <= 2; i++)
            {
                cout << "Coloque los dos lados restantes del triangulo: ";
                cin >> lado;
                perimetro = perimetro + lado;

            }
            area = base * altura;
            perimetro = perimetro + base;
            cout << "El area del triangulo es " << area << "\n";
            cout << "El perimetro del triangulo es " << perimetro << "\n";;
            break;
        }
        case 3:
        {
            cout << "Ingrese el valor de la base: ";
            cin >> base;
            cout << "\n";
            cout << "Ingrese el valor de la altura";
            cin >> altura;
            cout << "\n";
            cout << "Ingrese el valor de los lados iguales: ";
            cin >> lado;
            cout << "\n";
            area = (base * altura) / 2;
            perimetro = base + (lado * 2);
            cout << "El area del triangulo es " << area << "\n";
            cout << "El perimetro del triangulo es: " << perimetro << "\n";
            break;
        }
        default:
        {
            cout << "ERROR, No existe la opción.";
            break;
        }

        }
        cout << "Quiere sacar el area y perimetro de otro triangulo?(s/n)\n";
        cin >> c;

    } while (c != 'n');
    return 0; 
}
