#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

//devolver valores multiples

//hacer una funcion para sumar y multplicar

            //para passar parametros por referencia
void calcular(int,int,int&,int&);

int messi(){
    int num1,num2,suma=0,producto=0;

    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;

    calcular(num1,num2,suma,producto);

    cout<<"El valor de la suma es: "<<suma<<endl;
    cout<<"El valor del producto es: "<<producto<<endl;

    return 0;
}

void calcular(int num1,int num2,int& suma, int& producto){

    suma=num1+num2;
    producto=num1*num2;

}