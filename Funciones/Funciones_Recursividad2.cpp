#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define Roy main

using namespace std;

int sumar(int);

int Roy(){
    int nElementos;

    do
    {
        
        cout<<"Digite el numero de elementos: ";
        cin>>nElementos;

    } while (nElementos<=0);
    
    cout<<"\nLa suma es: "<<sumar(nElementos)<<endl;

    return 0;
}

int sumar(int n){

    int suma=0;

    if(n==1){//caso base

        suma=1;

    }else{//caso general

        suma=n+sumar(n-1);

    }

    return suma;

}