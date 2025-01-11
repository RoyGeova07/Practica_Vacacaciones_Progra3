#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

//ejercicio intercambiar el valor de 2 variables utilizando paso de parametros por referencia 

void intercambiar(int&,int&);

int messi(){

    int num1=10,num2=15;

    cout<<"El valor de numero 1 es: "<<num1<<endl;
    cout<<"El valor de numer2 es: "<<num2<<endl;

    intercambiar(num1,num2);

    cout<<"\nEl nuevo valor de numero 1 es: "<<num1<<endl;
    cout<<"El nuevo valor de numero 2 es: "<<num2<<endl;



    return 0;
}

void intercambiar(int& num1,int& num2){

    int aux;

    aux=num1;
    num1=num2;
    num2=aux;
    
}