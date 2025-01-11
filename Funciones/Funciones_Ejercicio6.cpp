#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

template <class tipod>

void Despliegue(tipod dato){

    cout<<"El dato es: "<<dato<<endl;

}

int messi(){

    int dato1=4;
    float dato2=16.67;
    double dato3=567.7890;
    char dato4='a';

    Despliegue(dato1);
    Despliegue(dato2);
    Despliegue(dato3);
    Despliegue(dato4);

    return 0;
}