#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

float numero;

void pedirdatos(){

    cout<<"Ingrese un numero"<<endl;
    cin>>numero;

}

float quitarnumero(float n){

    int entero=n;
    float resultado  = n-entero;

    return resultado;

}

int messi (){

    pedirdatos();

    cout<<"La parte fraccionaria del numero es: "<<quitarnumero(numero)<<endl;



    return 0;
}