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


void Menu();
void InsertarLista(Nodo *&,int);
void MostrarLista(Nodo *);
void BuscarLista(Nodo *,int);

//para poder eliminar un elemento x de la lista, solo hay que seguir 5 pasos: 

//1. preguntar si la lista o esta vacia
//2. crear un *auxiliar_borrar y *anterior=null;
//3. igualar *aux_borrar
//4. Recorrer la lista
//5. Eliminar el elemento

void EliminarNodo(Nodo *&,int);

Nodo *Lista=nullptr;


int main(){

    Menu();

    return 0;
}

void InsertarLista(Nodo *&Lista,int n){

    Nodo *nuevo_nodo=new Nodo();
    nuevo_nodo->dato=n;

    Nodo *auxiliar=Lista;
    Nodo *auxiliar2;

    while ((auxiliar!=nullptr)&&(auxiliar->dato<n))
    {
        //aqui auxiliar2 apunta al auxiliar1 con el primer dato
        auxiliar2=auxiliar;
        //despies de eso a auxiliar1, lo corremos al otro lado para que apunte al siguiente numero
        auxiliar=auxiliar->siguiente;

    }

    if (Lista==auxiliar)
    {
        
        Lista=nuevo_nodo;

    }else{

        auxiliar2->siguiente=nuevo_nodo;

    }

    nuevo_nodo->siguiente=auxiliar;

    cout<<"\tElementos "<<n<<" insertando a la lista"<<endl;
    
    

}

void BuscarLista(Nodo *lista,int n){

    Nodo *actual=new Nodo();
    actual=lista;

    bool bandera=false;

    //mientras la lista no haya llegado a su fin 
    while ((actual!=nullptr)&&(actual->dato<=n))         
    {
        
        if (actual->dato==n)
        {
            
            bandera=true;

        }

        actual=actual->siguiente;        

    }

    if (bandera==true)
    {
        
        cout<<"\nEl elemento "<<n<<" esta en la lista"<<endl;

    }else{

        cout<<"\nEl elemento "<<n<<" esta en la lista"<<endl;

    }
    
    

}

void EliminarNodo(Nodo *&lista,int n){


    if (lista!=nullptr)
    {
        
        Nodo *auxiliar_borrar;
        Nodo *anterior=nullptr;
        auxiliar_borrar=lista;

        //recorrer la lista
        while ((auxiliar_borrar!=nullptr)&&(auxiliar_borrar->dato!=n))
        {
            
            anterior=auxiliar_borrar;
            auxiliar_borrar=auxiliar_borrar->siguiente;

        }

        //condicional donde el elemento no ha sido encontrado
        if (auxiliar_borrar==nullptr)
        {
            
            cout<<"\nEl elemento no existe "<<endl;

        }else if(anterior==nullptr){//condicional si el elemento a eliminar es el primero del puntero

            lista=lista->siguiente;
            delete auxiliar_borrar;
            cout<<"\nElemento "<<n<<" eliminado exitosamente"<<endl;

        }else{//condicional donde el elemento esta en la lista pero, no es el primer nodo

            anterior->siguiente=auxiliar_borrar->siguiente;
            delete auxiliar_borrar;
            cout<<"\nElemento "<<n<<" eliminado exitosamente"<<endl;

        }
        
        

    }

    
}

void MostrarLista(Nodo *lista){

    Nodo *actual=new Nodo();
    actual=lista;

    if (actual==nullptr)
    {
        
        cout<<"\nLa lista esta vacia"<<endl;
   

    }

    while (actual!=nullptr)
    {
        
        cout<<"\t"<<actual->dato<<" -> ";
        actual=actual->siguiente;

    }

    cout<<"null"<<endl;
    
    

}

void Menu(){

    int opcion,dato;

    do
    {
        
        cout<<"\t\n:::::MENU:::::\n";
        cout<<"1. Insertar Elemento a la lista. "<<endl;
        cout<<"2. Mostrar ElementoS a la lista. "<<endl;
        cout<<"3. Buscar Elementos a la lista. "<<endl;
        cout<<"4. Eliminar Elmento a la lista. "<<endl;
        cout<<"5. Salir del programa."<<endl;
        cout<<"Ingrese una opcion :"<<endl;
        cin>>opcion;

        if (opcion==1)
        {
            
            cout<<"\nIngrese un numero: "<<endl;
            cin>>dato;
            InsertarLista(Lista,dato);

        }else if(opcion==2){

            MostrarLista(Lista);

        }else if(opcion==3){

            cout<<"\nIngrese el numero a encontrar: ";
            cin>>dato;
            BuscarLista(Lista,dato);

        }else if(opcion==4){

            cout<<"\nIngrese el numero a eliminar: ";
            cin>>dato;
            EliminarNodo(Lista,dato);

        }else if(opcion==5){

            cout<<"\nPrograma terminado"<<endl;

        }else{

            cout<<"ERROR: Elemento no valido."<<endl;

        }
        

    } while (opcion!=5);
    

}