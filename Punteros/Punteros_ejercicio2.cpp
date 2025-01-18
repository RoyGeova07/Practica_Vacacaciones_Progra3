#include <iostream>
#include <conio.h>

using namespace std;

#define roy main

int main(){

    int numero,*direccion_numero;
    bool numprimo=true;

    cout<<"Digite un numero: " <<endl;
    cin>>numero;

    direccion_numero=&numero;

    if (*direccion_numero<=1)
    {

        numprimo=false;

    }else{

        for (int i = 2; i < *direccion_numero; i++)
        {
            
            if (*direccion_numero%i==0)
            {
                numprimo=false;
                break;
            }
            

        }
        

    }

    if(numprimo){

        cout<<*direccion_numero<<" es primo."<<endl;
        cout<<"La posicion de la memoria es: "<<direccion_numero<<endl;

    }else{

        cout<<*direccion_numero<<" no es primo"<<endl;
        cout<<"La posicion de la memoria es: "<<direccion_numero<<endl;


    }
    


    return 0;
}