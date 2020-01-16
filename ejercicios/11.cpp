// Escribe un programa que lea de la entrada estandar los datos catetos de un triangulo rectangulo y escribe en la salida estandar su hipotenusa

#include <iostream>

using namespace std;

int main(){

    float cap1,cap2,hipotenusa = 0;

    cout<<"cateto1";cin>>cap1;
    cout<<"cateto2";cin>>cap2;

    hipotenusa = cap1 + cap2;

    cout<<"la suma de los catetos es "<<hipotenusa;


    return 0;
}