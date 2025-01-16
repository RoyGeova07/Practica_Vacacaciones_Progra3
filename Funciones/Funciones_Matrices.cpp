#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

                            //filas,colu
                            //siempre poner el numero de columnas
void mostrarMatriz(int m[][3], int,int);
void elevarAlCuadrado(int m[][3],int,int);
void mostrarNuevaMatriz(int m[][3],int,int);

int messi(){
    //el numero de filas y el numero de columnas debe ser de tipo constante
    const int  nFILAS=2;
    const int COLUMNAS=3;
    int m[nFILAS][COLUMNAS] = {{1,2,3},4,5,6};

    mostrarMatriz(m,nFILAS,COLUMNAS);
    elevarAlCuadrado(m,nFILAS,COLUMNAS);
    mostrarNuevaMatriz(m,nFILAS,COLUMNAS);

    return 0;
}

void mostrarMatriz(int m[][3],int filas,int columnas){

    //mostrar matriz
    cout<<"MOSTRANDO MATRIZZZ"<<endl;
    for (int i = 0; i < filas; i++)
    {
        
        for (int j = 0; j < columnas; j++)
        {
            
            cout<<m[i][j]<< " ";

        }
        cout<<'\n';
        

    }
    

}

void elevarAlCuadrado(int m[][3],int filitas, int columnitas){

    for (int i = 0; i < filitas; i++)
    {
        
        for (int j = 0; j < columnitas; j++)
        {
            
            m[i][j]*=m[i][j];

        }
        

    }
    

}

void mostrarNuevaMatriz(int m[][3], int filotas, int columnotas){


    cout<<"\nMOSTRANDO NUEVA MATRIZ ELEVEADA AL CUADRADO"<<endl;
    for (int i = 0; i < filotas; i++)
    {
        
        for (int j = 0; j < columnotas; j++)
        {
            
            cout<<m[i][j]<<" ";

        }
        cout<<"\n";
        

    }
    
   


}