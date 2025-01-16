#include <iostream>
#include <conio.h>

using namespace std;

#define roy main

// & = direccion de la variable

int roy(){

    //un puntero es una variable que va almacenar la direccion de memoria

    int num,*dir_num;

    num=20;
    dir_num=&num;

    cout<<"Numero: "<<*dir_num<<endl;
    //imprimir la posicion de memoria exacta donde se esta guardando el numero
    cout<<"Direccion de memoria: "<<dir_num<<endl;

    return 0;
}