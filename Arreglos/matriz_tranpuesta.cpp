#include <iostream>
#include <conio.h>
#include <random>
#include <sstream>

using namespace std;

#define messi main

int messi(){

    int numeros[3][3];

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
    
    cout<<"Matriz transpuesta: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {

            cout<<numeros[j][i]<<" ";

        }
        cout<<endl;
        

    }

    getch();
    return 0;
}