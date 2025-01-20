#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main

//para inserta elementos en la pila, jay que seguir 4 pasos

//1. crear espacio en memoria para almacenar nodo: Pila=null;
//2. cargar el valor dentro del nodo(Dato)
//3. cargar el puntero pila dentro del nodo(*siguiente)
//4. asignar el nuevo nodo a pila

struct Nodo
{
    
    int dato;
    Nodo *siguiente;

};

void AgregarPila(Nodo *&,int);


int roy(){

    Nodo *pila= nullptr; 
    int n1,n2;

    cout<<"Digite un numero: ";
    cin>>n1;
    AgregarPila(pila,n1);

    cout<<"Digite otro numero: ";
    cin>>n2;
    AgregarPila(pila,n2);


    return 0;
}

void AgregarPila(Nodo *&pila,int n){

    Nodo *nuevo_nodo=new Nodo();//se crea un espacio para crear el nodo
    nuevo_nodo->dato=n;// rellenar el dato
    nuevo_nodo->siguiente=pila;//pasar la pila al numero siguiente
    pila=nuevo_nodo;//el ultimmo paso, es igualar a pila a nuevo nodo

    cout<<"\nElemento: "<<n<<" Agregado a pila correctamente"<<endl;

}