#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>
#include <string>

using namespace std;

//para poder mostrar elementos se sigue 3 pasos:

//1. crear un nuevo nodo

//2. Igualar ese nuevo nodo(actual a la lista)

//3. recorrer la lista  de inicio a fin

struct Nodo
{
    
    int dato;
    Nodo *siguiente;

};

void Menu();
void InsertarLista(Nodo *&,int);
void MostrarLista(Nodo *);

Nodo *lista=nullptr;

int main(){

    Menu();



    return 0;
}

void InsertarLista(Nodo *&lista,int n){

    Nodo *nuevo_nodo=new Nodo();
    nuevo_nodo->dato=n;

    Nodo *auxiliar=lista;
    Nodo *auxiliar2;

    while ((auxiliar!=nullptr)&&(auxiliar->dato<n))
    {
        
        auxiliar2=auxiliar;
        auxiliar=auxiliar->siguiente;
    

    }

    if (lista==auxiliar)
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

void Menu(){

    int opcion,dato;

    do
    {
        
        cout<<"\t\n::MENU::"<<endl;
        cout<<"1. Inserte elementos a la lista enlazada."<<endl;
        cout<<"2. Mostrar elementos de la lista enlazada."<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        if (opcion==1)
        {
         
            cout<<"Digite un numero: ";
            cin>>dato;
            InsertarLista(lista,dato);
            
        }else if(opcion==2){

            MostrarLista(lista);

        }else if(opcion==3){

            cout<<"Saliendo del programa"<<endl;

        }else{

            cout<<"\nOpcion no valida"<<endl;

        }
        

    } while (opcion != 3);
    

}