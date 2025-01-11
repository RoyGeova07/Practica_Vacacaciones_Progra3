#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

//paso de parametros por referencia

void valores_nuevos(int&,int&);

int messi(){

    int numero1,numero2;

    cout<<"Digite 2 numeros: ";
    cin>>numero1>>numero2;

    valores_nuevos(numero1,numero2);

    cout<<"El nuevo valor del primer numero es: "<<numero1<<endl;

    cout<<"El nuevo varlo del segundo numero es: "<<numero2<<endl;

    return 0;
}

// el & sirve para pasar la direccion de memoria, significa la direccion de 
void valores_nuevos(int& xnum, int& ynum){

    cout<<"El valor del primer numero es: "<<xnum<<endl;
    cout<<"El valor del segundo numoer es: "<<ynum<<endl;

    //cambiar los valores
    xnum=10;
    ynum=7;

}