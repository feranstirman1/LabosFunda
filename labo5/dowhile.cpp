#include <iostream>

using namespace std;

int main(){

/**
 * PROGRAMA QUE PIDE AL MENOS UNA VEZ EL NUMERO, Y NO TERMINA HASTA INGRESAR -1
*/
    int num=-1;
    do
    {
        cout<<"Ingrese un numero que no sea -1: ";
        cin>>num;
    } while (num != -1);

    //resto del programa
    cout<<"ya me sali del do while";
    

}