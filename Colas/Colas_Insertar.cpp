#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main

//para poder insertar elementos a una cola, solo hay que seguir 3 pasos: 

//1. Crear un espacio en memoria para almacenar un nodo.
//frente -> null;
//fin -> null;

//2. Asignar ese nuevo nodo al dato que queremos insertar.
//3. Asignar Punteros frente y fin hacia el nuevo nodo.

struct Nodo
{
    
    int dato;
    Nodo *siguiente;

};

void InsertarElementosCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);

int roy(){

    Nodo *frente =nullptr;
    Nodo *fin =nullptr;

    int dato;

    cout<<"Digite un numero: ";
    cin>>dato;
    InsertarElementosCola(frente,fin,dato);

    cout<<"Digite un numero: ";
    cin>>dato;
    InsertarElementosCola(frente,fin,dato);

    cout<<"Digite un numero: ";
    cin>>dato;
    InsertarElementosCola(frente,fin,dato);


    return 0;
}

void InsertarElementosCola(Nodo *&frente,Nodo *&fin,int n){

    Nodo *nuevo_nodo=new Nodo();

    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente = nullptr;

    if (cola_vacia(frente))
    {
        
        frente=nuevo_nodo;

    }else{

        fin->siguiente=nuevo_nodo;

    }
    
    fin=nuevo_nodo;

    cout<<"\tElemento '"<<n<<"' insertado a cola correctamente"<<endl;

}

//funcion para saber si la cola esta vacia o no, no hay dato por referencia porque no va a cambiar
bool cola_vacia(Nodo *frente){

    return (frente==nullptr)? true : false;

//    if (frente==nullptr)
//    {
        
//      return true;

//    }else{
//      return false;

//    }
    

}