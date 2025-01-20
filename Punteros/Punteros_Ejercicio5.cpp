#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;

#define roy main

int roy(){

    int numeros[100];
    int *direccion_numeros;
    int menor=99999;
    int nelementos;

    while (true)
    {
        
        cout<<"Ingrese el espacio del arrelgo: "<<endl;
        cin>>nelementos;

        if (cin.fail())
        {
            
            cout<<"\nEl elemento que ingreso, no es un numero."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

        }else if(nelementos<=0){

            cout<<"\nNo puede ser menor o igual a 0"<<endl;

        }else{

            break;

        }

    }

    for (int i = 0; i < nelementos; i++)
    {

        while (true)
        {
                
        cout<<i+1<<". Digite un numero: ";
        cin>>numeros[i];

        if (cin.fail())
        {
            
            cout<<"\nElemento invalido."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

        }else{

            break;

        }
        

        }

    }
    
    direccion_numeros=numeros;

    for (int i = 0; i < nelementos; i++)
    {
        
        if (*direccion_numeros<menor)
        {
            
            menor=*direccion_numeros;

        }
        direccion_numeros++;

    }

    cout<<"\nEl menor elemento es: "<<menor<<endl;
    cout<<"Posicicion en memoria: "<<direccion_numeros<<endl;
    
    

    return 0;
}