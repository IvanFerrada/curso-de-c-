// Escribe la siguiente expresion en c++

#include <iostream>

using namespace std;

int main(){
    float a,b,resultado =0;

    cout<<"Digite el valor de a";cin>>a;
    cout<<"Digite el valor de b";cin>>b;

    resultado = (a/b) +1;

// precision redondea entre dos digitos el resultado
    cout.precision(2);
    cout<<"el resultado es:"<<resultado;    




    return 0;
}