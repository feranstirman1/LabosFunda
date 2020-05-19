#include <iostream>

using namespace std;

int main(){

    /*
    EJERCICIO QUE HACE LA SUMA DE LOS PRIMEROS 10 NUMEROS NATURALES USANDO FOR
    */
    int acum = 0;
    for(int i = 1 ; i<11 ; i++){
        acum+=i;
    }
    cout<<"suma: "<<acum;

}