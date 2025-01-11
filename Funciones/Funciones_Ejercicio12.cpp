#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

void pedirDatos();
void numImpares(int vec[], int);

int vec[100],tam;

int messi(){

    pedirDatos();
    numImpares(vec,tam);

    return 0;
}

void pedirDatos(){

    cout<<"Digite el tamanio del vector: ";
    cin>>tam;

    for (int i = 0; i < tam; i++)
    {
        
        cout<<i+1<<". Digite un numero: ";
        cin>>vec[i];

    }
    


}

void numImpares(int vec[], int tam){

    int vecImpares[100];
    int aux=0;

    for (int i = 0; i < tam; i++)
    {
        
        if(vec[i]%2!=0){

            vecImpares[aux]=vec[i];
            aux++;

        }   

    }

    cout<<"\nImprimiendo los elementos impares del vector: "<<endl;
    for (int i = 0; i < aux; i++)
    {
        cout<<vecImpares[i]<< " ";
    }
    
    

}