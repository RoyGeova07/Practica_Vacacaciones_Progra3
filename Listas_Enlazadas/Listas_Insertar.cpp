#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>
#include <string>

using namespace std;

#define roy main

//para poder insertar elementos a un lista solo hay que seguir 4 pasos

//1. Crear un nuevo nodo
//list->nullptr

//2. Asignar un nuevo_nodo->dato el elemento que queremos incluir a la lista

//3. crear 2 nodos auxiliares y asignar la lista al primero de ellos 

//4. insertar el elemento a lista

struct Nodo
{
    
    int dato;
    Nodo *siguiente;

};


void InsertarLista(Nodo *&,int);

int roy(){

    Nodo *lista=nullptr;

    int dato;

    cout<<"Ingrese un numero: ";
    cin>>dato;
    InsertarLista(lista,dato);

    cout<<"Ingrese un numero: ";
    cin>>dato;
    InsertarLista(lista,dato);

    cout<<"Ingrese un numero: ";
    cin>>dato;
    InsertarLista(lista,dato);
    
    return 0;
}

void InsertarLista(Nodo *&lista,int n){

    Nodo *nuevo_nodo=new Nodo();
    nuevo_nodo->dato=n;

    Nodo *auxiliar1=lista;
    Nodo *auxiliar2;

    while ((auxiliar1!=nullptr)&&(auxiliar1->dato<n))
    {
        
        auxiliar2=auxiliar1;
        auxiliar1=auxiliar1->siguiente;

    }

    if (lista==auxiliar1)
    {
        
        lista=nuevo_nodo;

    }else{

        auxiliar2->siguiente=nuevo_nodo;

    }

    nuevo_nodo->siguiente=auxiliar1;
    
    cout<<"\tElemento "<<n<<" insertado a la lista"<<endl;
    

}