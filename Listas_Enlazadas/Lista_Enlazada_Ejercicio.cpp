#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>
#include <string>

using namespace std;

struct Nodo
{
    
    int dato;
    Nodo *siguiente;

};


void Insertar_Nodo_A_Lista(Nodo *&,int);
void MostrarLista(Nodo *);
//no pasa por referencia porque no cambiara su valor
void Calcular_Mayor_Menor(Nodo *);

int main(){

    Nodo *lista=nullptr;
    int dato;
    char respuesta;

    do
    {
        
        while (true)
        {
            cout<<"Digite un numero: ";
            cin>>dato;
            
            if (cin.fail())
            {
                
                cout<<"\nERROR: Ingreso un elemento no valido, vuelva a intentarlo."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');

            }else{

                Insertar_Nodo_A_Lista(lista,dato);//aqui se agregar un nuevo elemento a la lista
                cout<<"Dese agregar otro nodo(s/n): ";
                cin>>respuesta;
                break;
                

            }
            

        }
        

    } while (respuesta == 's' || respuesta == 'S');
    

    cout<<"\nLos elementos de la lista son los siguientes:"<<endl;
    MostrarLista(lista);

    Calcular_Mayor_Menor(lista);

    return 0;
}

//aqui se agregar los elementos al final de la lista
void Insertar_Nodo_A_Lista(Nodo *&lista,int n){

    Nodo *nuevo_nodo=new Nodo();    
    Nodo *auxiliar;

    //aqui se rellana los nuevos campos de los nodos
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=nullptr;

    //aqui se comprueba que si la lista esta vacia 
    if (lista==nullptr)
    {
        //si la lista esta vacia, agregamos el nuevo que ya tenemos se lo agregamos a la lista
        lista=nuevo_nodo;//aqui se agrega el primer elemento a la lista

    }else{//si no esta vacia 
    //en este caso vamos a decir que auxiliar vamos a puntarlo al inicio de la lista, que auxiliar este
    //al principio de esta

        auxiliar=lista;//auxiliar apunta al inicio de la lista 
        
        //ahora como quiero agregar un nuevo elemento a la lista,pero la lista no esta vacia,
        //voy hacer que ese auxiliar este avance,hasta que ya no haye un nuevo elemento, ahi es donde se
        //agregar un nuevo elemento

        //mientras auxiliar siguiente sea diferente de null, vamos a recorrer la lista
        while (auxiliar->siguiente!=nullptr)
        {

            auxiliar=auxiliar->siguiente;//aqui se avanza posiciones a la lista
            
        }
        //cuando llegue al final de la lista
        auxiliar->siguiente=nuevo_nodo;//agregamos el nuevo nodo a la lista
        

    }
    cout<<"\nElemento '"<<n<<"' agregado a lista exitosamente\n"<<endl;
    
}

void MostrarLista(Nodo *lista){

    //mientras no sea el final de la lista
   while (lista!=nullptr)
   {
    
    cout<<lista->dato<<" -> ";
    lista=lista->siguiente;//aqui avanzamos un posicion en lista

   }
   cout<<"null";
   
   

}

//aqui se calcula el mayor y menor de la lista
void Calcular_Mayor_Menor(Nodo *lista){

    int mayor=0,menor=9999999;

    //recorremos la lista
    while (lista !=nullptr)
    {
        
        if ((lista->dato) >mayor)//aqui se calcula cual es el mayor
        {
            
            mayor=lista->dato;

        }
        if ((lista->dato) < menor)//aqui se calcula cual es el menor de la lista
        {
            
            menor=lista->dato;

        }
        lista=lista->siguiente;//aqui avanzamos una posicion en lista
        
        

    }

    cout<<"\nEl mayor elemento es: "<<mayor<<endl;
    cout<<"El menor elemento es: "<<menor<<endl;
    

}