#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define messi main

int messi(){

    int a[]={5,9,6,4,3,2,7,8,1,10};
    int i,dato;
    char bandera='F';

    //Busqueda Secuencial
    i=0;
    dato=4;
    while ((bandera=='F')&&(i<10)){
        if (a[i]==dato){

            bandera='V';

        }
        i++;

    }
    
    if (bandera=='F'){

        cout<<"El numero no existe en el arreglo"<<endl;
    }else if(bandera=='V'){
                                                            //Se le resta 1 a la posicion para que muestre la posicion real del arreglo
        cout<<"El numero ha sido encontrado en la posicion: "<<i-1<<endl;\

    }
    
    
    getch();
    return 0;
}