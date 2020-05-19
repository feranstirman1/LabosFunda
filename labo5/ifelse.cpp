#include <iostream>

using namespace std;

int main(){

    float numero;
    cout<<"Ingrese el numero: ";
    cin>>numero;

    if(numero>0){
        cout<<"EL NUMERO ES POSITIVO";
    }else if(numero<0){
        cout<<"EL NUMERO ES NEGATIVO";
    }else{
        cout<<"EL NUMERO ES 0";
    }

}