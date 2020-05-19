#include <iostream>
#include "math.h"

using namespace std;

int main(){

/*
    PROGRAMA QUE INDICA SI EL DISCRIMINANTE DE LA EC. CUAD. TIENE SOLUCION REAL O NO
    */
    float a,b,c;
    cout<<"Ingrese los valores de a b y c: ";
    cin>>a>>b>>c;

    float disc = pow(b,2) - 4*a*c;

    if(disc>= 0){
        cout<<"SI SE PUEDE OBTENER SOLUCION REAL";
    }else{
        cout<<"NO TIENE SOLUCION REAL";
    }

}