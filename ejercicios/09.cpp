// Escribe un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos



#include <iostream>

using namespace std;

int main(){

    float a,b,c,d,final = 0 ;

    cout<<"Ingresa la nota del alumno 1";cin>>a;
    cout<<"Ingresa la nota del alumno 2";cin>>b;
    cout<<"Ingresa la nota del alumno 3";cin>>c;
    cout<<"Ingresa la nota del alumno 4";cin>>d;

    final = a+b+c+d;

    cout<<"la nota de los cuatro alumnos es "<<final<<endl;



    return 0;
}