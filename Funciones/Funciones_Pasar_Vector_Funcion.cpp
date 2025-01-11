#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

            //muestra /  tamanio del vecto       
void cuadrado(int vec[], int);
void muestra(int vec[],int);

int messi(){

    const int TAM=5;
    int vec[TAM] = {1,2,3,4,5};

    cuadrado(vec,TAM);
    muestra(vec,TAM);

    return 0;
}

void cuadrado(int vec[], int tamanio){

    for (int i = 0; i < tamanio; i++)
    {
        
        vec[i]=vec[i]*vec[i];

    }
    

}

void muestra(int vec[],int tamanio){

    for (int i = 0; i < tamanio; i++)
    {
        
        cout<<vec[i]<< " ";

    }
    

}

