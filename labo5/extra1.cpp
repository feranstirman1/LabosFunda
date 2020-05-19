#include <iostream>

using namespace std;

int main(){

    /*
    PROGRAMA QUE VERIFICA SI UN NUMERO ES DE 3 DIGITOS O NO    
    */
    int numero;
    cout<<"ingrese el numero: ";
    cin>>numero;

    if(numero>=100 && numero<=999){
        cout<<"SI ES UN NUMERO DE 3 DIGITOS";
    }else{
        cout<<"NO ES UN NUMERO DE 3 DIGITOS";
    }

}