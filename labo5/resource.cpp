#include <iostream>
using namespace std;

int main()
{
    /*
    PROGRAMA QUE MUESTRA UNA SERIE DE NUMEROS "ALEATORIOS" DE ACUERDO A DIVERSAS CONDICIONES
    */
    cout << "\n\n Print a mystery series:\n";
    cout << "-------------------------\n";
    cout << " The series are: \n";

    int nm1 = 1;
    while (true)
    {
        ++nm1; //2 6 7 5
        if ((nm1 % 3) == 0)
            continue;
        if (nm1 >= 80)
            break;
        if ((nm1 % 2) == 0)
        {
            nm1 += 3;
        }
        else
        {
            nm1 -= 3;
        }
        cout << nm1 << " "; //5 4 2
    }
    cout << endl;
    return 0;
}