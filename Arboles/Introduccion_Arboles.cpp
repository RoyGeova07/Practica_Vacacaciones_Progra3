#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

//un arbol es un estrutura de datos no lineal

//un arbol consta de un conjunto finito de elementos, denominados nodos y un conjunto finito de lineas
//dirigidas, denominadas ramas, que conectan los nodos

//existen nodos hijos y las hojas

//como se define un nodo?

//Necesitamos un nodo que apunte a otros nodos

struct Nodo
{
    
    int dato;
    Nodo *derecha;//este nodo puede apunta a la derecha 
    Nodo *Izquierda;//este nodo apunto a la izquierda

};

//Propiedades de un arbol: 

//Longitud de un camino: Es el numero de ramas que uno tiene q pasar para llegar de un nodo hacia otro
// y siempre comieza desde el nodo raiz


int main(){

    

    return 0;
}