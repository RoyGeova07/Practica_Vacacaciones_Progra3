#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>
#include <string>

using namespace std;

//Para buscar el elemento en una lista, solo hay que seguir 4 pasos: 

//1. Crear un nuevo nodo(actual)
//Nodo actual   

//2. Igualar ese nuevo nodo(actual) a la lista
//actual = lista

//3. Recorrer la lista.
//4. Determinar si el elemnto existe o no en la lista.

struct Nodo
{
    
    int dato;
    Nodo *siguiente;

};

void Menu();
void InsertarLista(Nodo *&,int);
void MostrarLista(Nodo *);
void BuscarLista(Nodo *,int);

Nodo *lista=nullptr;

int roy(){



    return 0;
}

void Menu(){
    
    int opcion,dato;

    do
    {
        
        cout<<"\t\n:::MENU\n";
        cout<<"1. Inserte elementos a la lista enlazada."<<endl;
        cout<<"2. Mostrar elementos de la lista enlazada."<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        if (opcion==1)
        {
            
            cout<<"Digite un numero: ";
            cin>>dato;


        }
        

    } while (opcion != 3);
    

}

void InsertarLista(Nodo *&lista, int n){

    Nodo *nuevo_nodo=new Nodo();
    nuevo_nodo->dato=n;

    Nodo *auxiliar=lista;
    Nodo *auxiliar2;

    while ((auxiliar!=nullptr)&&(auxiliar->dato<n))
    {
        
        auxiliar2=auxiliar;
        auxiliar=auxiliar->siguiente;

    }

    if (lista==nullptr)
    {
        
        lista=nuevo_nodo;

    }else{

        auxiliar2->siguiente=nuevo_nodo;

    }

    nuevo_nodo->siguiente=auxiliar;

    cout<<"\t\nElemento "<<n<<" insertando a la lista"<<endl;
    

}

void MostrarLista(Nodo *lista){

    Nodo *actual=new Nodo();
    actual=lista;

    if (actual==nullptr)
    {
        
        cout<<"\nLa lista esta vacia."<<endl;

    }

    while (actual!=nullptr)
    {
        
        cout<<"\t"<<actual->dato<<" -> ";
        actual=actual->siguiente;

    }

    cout<<"Null"<<endl;
    
    

}

void BuscarLista(Nodo *lista,int n){

    Nodo *actual2=new Nodo();

}