// la calificacion final de un estudiante es la media ponderada de tres notas la nota de practicas que cuenta con un 30% del total ,la nota teorica que cuenta con un 60% y la nota de paticipacion que cuenta con un 10% restante. Escriba un programa que lea de la entreada estandar las tres notas de un alumno y escriba en la salida estandar su nota final


#include <iostream>

using namespace std;

int main(){

    float practica,teorica,participacion,notaFinal;

    cout<<"digite la nota del alumno de teoria";cin>>teorica;
    cout<<"digite la nota del alumno de participacion";cin>>participacion;
    cout<<"digite la nota del alumno de practicas";cin>>practica;

    practica *= 0.30;
    participacion *= 0.10;
    teorica *= 0.60;

    notaFinal = practica + teorica + participacion;    

    cout<<"La nota final es: "<<notaFinal<<endl;
    



    return 0;
}