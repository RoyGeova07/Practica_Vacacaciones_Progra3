#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

//funcion
int EncontrarMaximo(int x, int y);

int messi(){

    int n1, n2;
    int mayor;

    cout<<"Digite dos numeros: ";
    cin>>n1>>n2;

    mayor = EncontrarMaximo(n1,n2);

    cout<<"El numero mayor es: "<<mayor<<endl;

    return 0;
}

//definicion de la funcion
int EncontrarMaximo(int x, int y){

    int max;


    if (x>y)
    {
        
        max=x;

    }else{

        max=y;
    }
    
    return max;

}