#include <iostream>
#include <conio.h>
#include <random>
#include <sstream>

using namespace std;

#define messi main

int messi(){

    int numeros[3][3];
    int suma=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            cout<<"Ingrese un numero: " <<"["<<i<<"]"<<"["<<j<<"]: "<<endl;
            cin>>numeros[i][j];


        }
        
    }

    cout<<"Matriz original: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<numeros[i][j]<<" ";
        }

        cout<<endl;   
    }
    
    //suma de matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma+=numeros[i][j];
        }
        
    }

    cout<<"La suma de los elementos de la matriz es: "<<suma<<endl;

    return 0;
}