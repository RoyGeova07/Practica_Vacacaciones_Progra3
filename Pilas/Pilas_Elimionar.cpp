#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;


//para eliminar elementos de una pila, se siguen 4 pasos

//1. crear una variable *auxiliar de tipo nodo
//Pila -> 5 -> 10 -> nullptr 

//2. igualar el n a auxiliar->dato

//3. Pasar pila a siguiente nodo

//4. Eliminar aux

struct Nodo
{
    
    int dato;
    Nodo *siguiente;

};

void AgregarPila(Nodo *&,int);
void EliminarPila(Nodo *&, int &);

int main(){

    Nodo *pila= nullptr;
    int dato; 

    cout<<"Digite un numero: ";
    cin>>dato;
    AgregarPila(pila,dato);

    cout<<"Digite otro numero: ";
    cin>>dato;
    AgregarPila(pila,dato);

    cout<<"\nSacando los elementos de la pila: ";
    while (pila !=nullptr )//mientras no sea el final de pila
    {
        
        EliminarPila(pila,dato);
        if (pila !=nullptr)//si la pila es diferente de nullptr, significa que hay mas elementos
        {
            
            cout<<dato<<" , ";

        }else{

            cout<<dato<<".";//si hay un punto, es que ya no hay as elementos dentro de la pila

        }
        

    }
    

    
    return 0;
}

void AgregarPila(Nodo *&pila,int n){

    Nodo *nuevo_nodo=new Nodo();//se crea un espacio para crear el nodo
    nuevo_nodo->dato=n;// rellenar el dato
    nuevo_nodo->siguiente=pila;//pasar la pila al numero siguiente
    pila=nuevo_nodo;//el ultimmo paso, es igualar a pila a nuevo nodo

    cout<<"\nElemento: "<<n<<" Agregado a pila correctamente"<<endl;

}

void EliminarPila(Nodo *&pila, int &n){

    Nodo *auxiliar =pila;//creamos un nodo auxiliar e igualarlo a pila
    n= auxiliar->dato;// igualar n a axuliar dato, 
    pila=auxiliar->siguiente;// pila es igual a auxiliar siguiente
    delete auxiliar;


}