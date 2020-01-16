// Escribe un framento de programa que intercambie los valores de las variables 

#include <iostream>

using namespace std;

int main(){
    
    int a,b,aux;

    cout<<"Digite el valor de a";cin>>a;
    cout<<"Digite el valor de b";cin>>b;

    aux = a;
    a = b;
    b = aux;

    cout<<"el valor de A es "<<a<<endl;
    cout<<"el valor de B es "<<b<<endl;

    return 0;
}