#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main

int **puntero_matriz,**puntero_matriz2,filas,columnas;

void pedirDatos();
void sumarMatrices(int**,int**,int,int);
void MostrarMatrices(int **,int,int);

int roy(){

    pedirDatos();
    sumarMatrices(puntero_matriz,puntero_matriz2,filas,columnas);
    MostrarMatrices(puntero_matriz,filas,columnas);

}

void pedirDatos(){

    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //reservando memoria para la primera matriz
    puntero_matriz=new int*[filas];//reservar memoria para las filas
    for (int i = 0; i < filas; i++)
    {
        
        puntero_matriz[i]=new int[columnas];//reservar memoria para las columnas

    }

    cout<<"\nDigite los elementos de la primera matriz: \n";
    for (int i = 0; i < filas; i++)
    {
        
        for (int j = 0; j < columnas; j++)
        {
            
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz+i)+j);

        }
        

    }


    //reservando memoria para la segunda matriz
    puntero_matriz2=new int*[filas];//reservar memoria para las filas
    for (int i = 0; i < filas; i++)
    {
        
        puntero_matriz2[i]=new int[columnas];//reservar memoria para las columnas

    }

    cout<<"\nDigite los elementos de la primera matriz: \n";
    for (int i = 0; i < filas; i++)
    {
        
        for (int j = 0; j < columnas; j++)
        {
            
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz2+i)+j);

        }
        

    }
    
    


}

void sumarMatrices(int**puntero_matriz,int**puntero_matriz2,int filas,int columnas){

    for (int i = 0; i < filas; i++)
    {
        
        for (int j = 0; j < columnas; j++)
        {
            
            *(*(puntero_matriz+i)+j) += *(*(puntero_matriz2+i)+j);

        }
        

    }
    

}

void MostrarMatrices(int **puntero_matriz,int filas,int columnas){

    cout<<"\nLa suma de las 2 matrices es: \n";
    for (int i = 0; i < filas; i++)
    {
        
        for (int j = 0; j < columnas; j++)
        {
            
            cout<<*(*(puntero_matriz+i)+j)<<" ";

        }
        cout<<"\n";
        

    }
    

}