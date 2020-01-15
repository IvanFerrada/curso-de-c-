// Escribe un programa que lea de la entrada estandar  dos numeros y muestre en la salida estandar su suma resta multiplicacion y division


#include <iostream>

using namespace std;

int main(){

    int nm1,nm2,suma = 0,resta = 0,multiplicacion = 0, division = 0;

    cout<<"ingresa un numero"; cin>>nm1;
   

    cout<<"ingresa otro numero"; cin>>nm2;
    
    suma = nm1 + nm2;
    resta = nm1 - nm2;
    multiplicacion = nm1 * nm2;
    division =  nm1 / nm2;
   
   cout<<"la suma es :"<<suma<<endl;
   cout<<"la resta es:"<<resta<<endl;
   cout<<"la multiplicacion es:"<<multiplicacion<<endl;
   cout<<"la division es:"<<division<<endl;

 

    return 0;
}



