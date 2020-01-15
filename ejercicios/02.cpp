// Escribe un programa que  leea de la entrada estandar el precio de un producto y muetre en pantalla  estandar el producto al aplicar el iva.

#include <iostream>

using namespace std;

int main(){

    float precio,iva;

    cout<<"ingrese precio sin iva ";cin>>precio;

    iva = precio *1.21;

    cout<<"El precio con iva incluido es de:"<<iva;

    

    return 0;
}