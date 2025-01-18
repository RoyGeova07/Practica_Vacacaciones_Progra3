#include <iostream>
#include <conio.h>

using namespace std;

#define roy main

int roy(){

    int numeros[10],*direccion_numeros;

    for (int i = 0; i < 10; i++)
    {
        
        cout<<"Digite un numero ["<<i<<"]: "<<endl;
        cin>>numeros[i];

    }
    
    direccion_numeros=numeros;//posicion de memoria comienza numeros

    for (int i = 0; i < 10; i++)
    {
        if (*direccion_numeros%2==0)
        {
            cout<<"El numero "<<numeros[i]<<" es par"<<endl;
            cout<<"Posicion en memoria: "<<direccion_numeros<<endl;


        }
        direccion_numeros++;
        
    }
    

    return 0;
}