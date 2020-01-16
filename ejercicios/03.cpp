// realice un programa que leea los siguientes datos de una persona : edad tipo entero sexo tipo chart  altura tipo real
// tras leer los datos , el programa debe mostrarlos en la salida estandar!!
                                                                                                                                                                                                                                                                            
#include <iostream>

using namespace std;

int main(){

    int edad;
    float altura;
    // char sexo [10] guarda hasta 10 caracteres
    char sexo;

    cout<<"ingrse su edad"; cin>>edad;
    cout<<"ingrese su sexo"; cin>>sexo;
    cout<<"igrese su altura"; cin>>altura;

    cout<<"su edad es:"<<edad<<endl;
    cout<<"su sexo es: "<<sexo<<endl;
    cout<<"su altura es"<<altura<<endl;


    return 0;

    // Evaluar errores. Ejecute el programa del ejercicio anterior con entradas erroneas y observe los resultados .Por ejemplo , introduzca un dato de tipo caracter donde va un tipo int 
}