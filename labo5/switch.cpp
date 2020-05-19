#include <iostream>

using namespace std;

int main()
{

    int diaSemana;
    cout << "Ingrese el numero del dia de la semana";
    cin >> diaSemana;

    switch (diaSemana)
    {
    case 1:
        cout << "LUNES";
        break;
    case 2:
        cout << "MARTES";
        break;
    case 3:
        cout << "MIERCOLES";
        break;
    case 4:
        cout << "JUEVES";
        break;
    case 5:
        cout << "VIERNES";
        break;
    case 6:
        cout << "SABADO";
        break;
    case 7:
        cout << "DOMINGO";
        break;
    default:
        cout << "NO SE INGRESO UN DIA DE LA SEMANA VALIDO";
        break;
    }
}