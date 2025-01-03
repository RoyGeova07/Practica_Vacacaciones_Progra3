#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define messi main

//Introduccion a metodo burbuja

int messi(){

    int Numeros[] = {4, 2, 3, 1, 5};
    int i, j, aux;

    //Algoritmo de burbuja
    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0;  j<5; j++)
        {
            
            if(Numeros[j]>Numeros[j+1]){

                aux=Numeros[j];
                Numeros[j]=Numeros[j+1];
                Numeros[j+1]=aux;

            }

        }
        

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