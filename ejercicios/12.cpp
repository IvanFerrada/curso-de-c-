#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float x,y,resultado = 0; 

    cout<<"Digite el valor de x";cin>>x;
    cout<<"Digite el valor de y";cin>>y;

// Sacar la raiz cuadrada libreria  #include <math.h >  emjemplo resultado ((sqrt(x)) / elevar al cuadrado(pow(y,2)-1);
    resultado = (sqrt(x)) / (pow(y,2) -1 );

    cout<<"El resultado es "<<resultado<<endl;

    return 0;
}