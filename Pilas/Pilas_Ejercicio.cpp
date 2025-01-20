#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main
//hacer un programa para agregar numeros enteros a una pila, hasta que el usuario lo decida,
//despues mostrar todos los numeros introducidos en la pila

struct Nodo
{
    
    int dato;
    Nodo *siguiente;

};

void AgregarPila(Nodo *&,int);
void EliminarElementosPila(Nodo *&,int&);


int roy(){

    Nodo *pila=nullptr;
    int dato;
    char rpt;

    do
    {
        
        cout<<"Digite un numero: ";
        cin>>dato;
        AgregarPila(pila,dato);

        cout<<"\nDeseas otro elemento a pila(s/n): ";
        cin>>rpt;

    } while ((rpt=='S')||(rpt=='s'));

    cout<<"\nScacando los elementos de la pila: "<<endl;
    while (pila !=nullptr)
    {
        
        EliminarElementosPila(pila,dato);
        if (pila !=nullptr)
        {
            
            cout<<dato<<" , ";

        }else{

            cout<<dato<<".";

        }
        

    }
    
    

    return 0;
}

void AgregarPila(Nodo *&pila,int n){

    Nodo *nuevo_nodo=new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;

    cout<<"\tElemento "<<n<<" ha sido agrega a la pila correctamente"<<endl;
    
}

void EliminarElementosPila(Nodo *&pila,int& n){

    Nodo *auxiliar =pila;
    n=auxiliar->dato;
    pila=auxiliar->siguiente;
    delete auxiliar;

}
