#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

//sacar el valor absoluto de un numero

//prototipo de la funcion
template <class TIPOD> //este engloba a todos los tipos de datos, podemos mandarle cualquier tipo de dato
void MostrarAbsoluto(TIPOD numero);

int messi(){

    int num1=-4;
    float num2=-56.57;
    double num3=-123.5678;

    MostrarAbsoluto(num1);
    MostrarAbsoluto(num2);
    MostrarAbsoluto(num3);

    return 0;
}

template <class TIPOD>
void MostrarAbsoluto(TIPOD numero){

    if(numero<0){

        numero=numero*-1;

    }

    cout<<"El valor absoluto del numero es: "<<numero<<endl;

}