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

    //se utiliaza 2 nodos auxiliares para poder mantener el control sobre la estructura de la lista 
    //mientras se recorren los nodos para encontrar el lugar correcto donde insertar el nuevo nodo

    //PROPOSITO DEL NODO AUXILIAR 1:  
    //este Nodo se utiliza para recorrer la lista desde el inicio(lista) hasta encontrar la posicion donde
    //el nuevo nodo debe ser insertado

    //PROPOSITO DEL NODO AUXILIAR 2: 
    //este nodo es necesario para apuntar al nodo anterior al que auxiliar1 esta apuntando
    //es importante porque cuando se inserta el nuevo nodo, el nodo anterior debe actulizar su puntero
    //*siguiente* para apuntar el nuevo nodo


    Nodo *auxiliar1=lista;
    Nodo *auxiliar2;


    //4. Insertar los elementos a la lista
    //son 3 casos: 

    //Lista -> null
    //          __      __
    //Lista -> |__| -> |__| -> null

    //vamor a tener 2 casos para insertar elementos en la lista:
    // - Al principio -> osea insertar elementos al principio 
    // - En medio o al final -> insertar elementos en medio o al final es lo mismo

    //se usa un while para que los elementos de la lista se inserten de forma ordenada

    while ((auxiliar1!=nullptr)&&(auxiliar1->dato<n))//este ciclo recorre la lista enlazada para 
    //encontrar el lugar adecuado donde insertar el nuevo nodo de acuerdo con su valor (n)
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