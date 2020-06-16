#include <iostream>

using namespace std;

float promedio(float* arreglo,int n){

    float acum = 0.0;
    for(int i=0;i<n;i++){
        acum+= *(arreglo+i);
    }
    float prom = acum / n ;
    return prom;  
}

int contarOcurrencias(int arreglo[],int n,int digito){

    int numOcurrencias = 0;
    for(int i=0;i<n;i++){
        if(arreglo[i] == digito){
            numOcurrencias++;
        }
    }
    return numOcurrencias;

}


int main(){

    int arreglo[12] = {1,3,3,3,4,5,6,3,3,2,1,3};

    int n;
    cout<<"ingresar el digito a comparar: ";
    cin>>n;

    cout<<"El numero de ocurrencias del numero "<<n<<" en el arreglo es "<<contarOcurrencias(arreglo,12,n)<<endl;


}