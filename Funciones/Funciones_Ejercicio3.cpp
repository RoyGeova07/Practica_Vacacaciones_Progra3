#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

void al_cuadrado(float x);

void al_cuadrado(float x){

    float elevar_cuadrado= x*x;

    cout<<"El resultado es: "<<elevar_cuadrado<<endl;

}

float num1=2.2;

int messi(){

    al_cuadrado(num1);

    return 0;
}

