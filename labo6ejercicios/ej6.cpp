#include <iostream>

using namespace std;

int contarOcurrencias(int numero,int digito){

    int contador = 0;
    while(numero>0){
        int digitoActual = numero%10;
        if(digitoActual == digito){
            contador++;
        }
        numero = numero/10;
    }
    return contador;

}

int main(){

    int numero,digito;
    cout<<"iNGRESE NUMERO: ";
    cin>>numero;
    cout<<"INGRESE DIGITO: ";
    cin>>digito;

    cout<<"El numero de ocurrencias es: "<< contarOcurrencias(numero,digito)  <<endl;

}