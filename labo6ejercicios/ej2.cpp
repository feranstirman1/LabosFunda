#include <iostream>
#include "math.h"

using namespace std;

int contarDigitos(int numero){ //275 27 2 0

    int numeroDigitos = 0;
    //0 1 2 3
    while(numero>0){
        numero = numero /10;
        numeroDigitos++;
    }
    return numeroDigitos;
}

int invertirNumero(int numero){

    //numero: 275 27 2 0
    //digitoActual: 5 7 2
    //potencia: 100 10 1
    //exponente: 2 1 0 -1
    //num invertido: 0 500 570 572
    int exponente = contarDigitos(numero) - 1;
    int numeroInvertido = 0;
    while(numero>0){
        int digitoActual = numero%10;
        double potencia = pow(10,exponente);
        numeroInvertido += digitoActual * potencia;
        numero = numero/10;
        exponente--;
    }
    return numeroInvertido;

}

int main(){

    int numero;
    cout<<"Ingrese el numero: ";
    cin>>numero;

    cout<<"El numero al invertirlo es: "<<invertirNumero(numero)<<endl;
}