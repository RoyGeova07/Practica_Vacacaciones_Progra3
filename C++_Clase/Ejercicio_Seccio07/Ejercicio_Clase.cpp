#include <iostream>
using namespace std;

int main(){

    int numeros[5];

    //aqui se lee cinco numeros del usuario
    cout<<"Ingrese cinco numeros entre 1 y 30: ";
    for (int i = 0; i < 5; i++)
    {
        
        cin>>numeros[i];

    }


    //aqui se imprimira una linea de asteriscos por cada numero
    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < numeros[i]; j++)
        {
            
            cout<<"*";

        }
        cout<<endl;
        

    }
    

    return 0;
}