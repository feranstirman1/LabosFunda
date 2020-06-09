#include <iostream>

using namespace std;


int sumaTotal(int a,int b,int n){

    int acum = 0;
    for(int i=a;i<=b;i++){
        if(n%i == 0){
            cout<<i<<" ";
            acum+=i;
        }
    }
    cout<<endl;
    return acum;


}

int main(){

    int a=2,b=25,n=100;
    cout<<"Suma total: "<<sumaTotal(a,b,n);

}