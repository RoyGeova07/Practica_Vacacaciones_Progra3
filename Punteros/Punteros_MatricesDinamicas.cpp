#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main

void pedirDatos();
void mostrarMatriz(int **,int,int);

//puntero de punteros, un puntero que apunta a otro puntero
int **puntero_matriz,filas,columnas;

int roy(){

    pedirDatos();
    mostrarMatriz(puntero_matriz,filas,columnas);

    //liberando las columnas
    for (int i = 0; i < filas; i++)
    {
        
        delete[] puntero_matriz[i];

    }
    
    //liberando las filas
    delete[] puntero_matriz;


    return 0;
}

void pedirDatos(){

    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //reservar memoria para la matriz dinamica
    puntero_matriz=new int*[filas];//reservando memoria para las filas
    for (int i = 0; i < filas; i++)
    {
        
        puntero_matriz[i]=new int[columnas];//reservando memoria para las columnas

    }

    cout<<"\nDigitando elementos de la matriz: "<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
        
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz+i)+j); // puntero_matriz[i][j] || :o

        }
        
    }
    
    

}

void mostrarMatriz(int **puntero_matriz,int filas,int columnas){

    cout<<"\nIMPRIMIENDO MATRIZ:"<<endl;
    for (int i = 0; i < filas; i++)
    {
        
        for (int  j= 0; j < columnas; j++)
        {
            
            cout<<*(*(puntero_matriz+i)+j)<<" ";// puntero_matriz[i][j] || :o

        }
        cout<<"\n";
        

    }
    

}