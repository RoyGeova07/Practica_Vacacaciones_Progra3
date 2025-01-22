#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main

//para eliminar elementos de una cola solo hay que seguir 3 pasos: 

//1. obtener el valor de un nodo
//2. crear un nodo auxiliar y asignarle el frente de una cola
//3. eliminar el nodo del frente de la cola 

struct Nodo
{
    
    int dato;
    Nodo *siguiente;

};

void InsertarElementosCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
void EliminarElementoCola(Nodo *&,Nodo *&,int&);

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

    cout<<"\nQuitando los nodos de la cola: "<<endl;
    while (frente!=nullptr)//mientras el frente de la cola sea diferente de null
    //si el frente, si la primera posicion de la cola es diferente de null, significa que hay mas nodos
    //en la cola, por lo tanto hay mas nodos que se pueden eliminar 
    {
        
        EliminarElementoCola(frente,fin,dato);
        if (frente!=nullptr)
        {
            
            cout<<dato<<" , ";

        }else{//si es el ultimo elemento, saldra con un puntito '.';

            cout<<dato<<".";

        }
        

    }
    



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

bool cola_vacia(Nodo *frente){

    return (frente==nullptr)? true : false;

}

//funcion para eliminar elementos de la cola
void EliminarElementoCola(Nodo *&frente, Nodo *&fin, int &n){

    n=frente->dato;
    Nodo *auxiliar=frente;


    if (frente==fin)//esto significa que solo hay un elemento de la cola 
    {
        
        frente=nullptr;
        fin=nullptr;

    }else{

        frente=frente->siguiente;

    }
    delete auxiliar;
    

}