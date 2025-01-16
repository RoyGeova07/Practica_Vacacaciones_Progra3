#include <iostream>
#include <conio.h>

using namespace std;

#define roy main

//numero par e impar con punterosss

int roy(){

    int numero,*direccion_numero;

    cout<<"Digite un numero: "<<endl;
    cin>>numero;

    direccion_numero=&numero;//guardando la posicion de memoria

    if (*direccion_numero%2==0)
    {
        cout<<"El numero "<<*direccion_numero<<" es par"<<endl;
        cout<<"La posicion de memoria es: "<<direccion_numero<<endl;

    }else{

        cout<<"El numero "<<*direccion_numero<<" es impar"<<endl;
        cout<<"La posicion de memoria es: "<<direccion_numero<<endl;

    }

    //recordar = si ponemos el " * = asterisco "  delante de tu variable puntero, lo que pasara es que estararas
    //señalando lo que hay dentro de la posicion de memoria, si no se quiere la posicion de memoria, le quitas el 
    // "   *     ".
    



    return 0;
}