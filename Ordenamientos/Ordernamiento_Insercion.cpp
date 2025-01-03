#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define messi main

int messi(){

    int Numeros[] = {4, 2, 3, 1, 5};
    int i, j, aux;

    //Algoritmo de insercion
    for (int i = 0; i < 5; i++)
    {
        
        j=i;
        aux=Numeros[i];

        while(j>0&&aux<Numeros[j-1]){

            Numeros[j]=Numeros[j-1];
            j--;

        }

        Numeros[j]=aux;

    }

    cout<<"Orden Ascendente: ";
    for (int i=0;i<5;i++)
    {

        cout<<Numeros[i]<<" ";

    }

    cout<<"\nOrden Descendente: ";
    for (int i=4;i>=0;i--)
    {

        cout<<Numeros[i]<<" ";

    }


    getch();
    return 0;
}