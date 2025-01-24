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
void InsertarElementosLista(Nodo *&,int);
void MostrarElementosLista(Nodo *);
void BuscarElementosLista(Nodo *,int);
void EliminarNodo(Nodo *&,int);


//--------------------------------------
void EliminarLista(Nodo *&,int&); //el dato lo pasamos por referencia porque
// vamos a tachar todos los elementos de la lista

//para poder eliminar todos los elementos de la lista, hay que seguir 4 pasos.
//1. Crear nodo *aux e igualarlo al inicio de la lista
//2. guardar el dato que queremos eliminar dentro de *auxiliar
//3. Pasar la lista a siguiente nodo 
//4. Eliminar aux

Nodo *lista=nullptr;


int main(){

    Menu();

    return 0;
}


    
void Menu(){

    int opcion,dato,confirmacion;

    do
    {

        cout<<"\t\n:::MENU:::\n"<<endl;
        cout<<"1. Insertar Nodo Lista."<<endl;
        cout<<"2. Mostrar Lista."<<endl;
        cout<<"3. Buscar Nodo Lista"<<endl;
        cout<<"4. Eliminar nodo lista."<<endl;
        cout<<"5. Eliminar lista"<<endl;
        cout<<"6. Salir del programa"<<endl;
        cout<<"Ingrese una opcion: "<<endl;
        cin>>opcion;

        if (opcion==1)
        {
            
            cout<<"Ingrese un numero: ";
            cin>>dato;
            InsertarElementosLista(lista,dato);

        }else if(opcion==2){

            MostrarElementosLista(lista);

        }else if(opcion==3){

            cout<<"Ingrese un numero a buscar: ";
            cin>>dato;
            BuscarElementosLista(lista,dato);

        }else if(opcion==4){

            cout<<"Ingrese el numero a eliminar: ";
            cin>>dato;
            EliminarNodo(lista,dato);

        }else if(opcion==5){

            cout<<"Estas seguro de vaciar la lista? "<<endl;
            cout<<"Presione 1 para confirmar o 2 para cancelar accion: "<<endl;
            cin>>confirmacion;

            while (confirmacion <1 || confirmacion > 2)
            {
                
                cout<<"\nERROR, SELECCIONE UNA OPCION VALIDA, intentelo de nuevo: "<<endl;
                cin>>confirmacion;


            }

            if (confirmacion==2)
            {

                cout<<"\nPeticion RECHAZADA"<<endl;
                continue;
                
            }
            
            
            
            while (lista!=nullptr)
            {
                
                EliminarLista(lista,dato);
                cout<<"\nLista eliminada exitosamente"<<endl;

            }
            cout<<"\n";

        }else if(opcion==6){

            cout<<"Programa terminado"<<endl;

        }else{

            cout<<"\nERROR: Opcion invalia";

        }
        
        

        
    } while (opcion!=6);
    

}

void InsertarElementosLista(Nodo *&lista,int n){

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

    cout<<"Elemento "<<n<<" insertado en la lista"<<endl;
    
    

}

void MostrarElementosLista(Nodo *lista){

    Nodo *actual=new Nodo();
    actual=lista;

    if (actual==nullptr)
    {

        cout<<"\nLista vacia"<<endl;

    }

    while (actual!=nullptr)
    {
        
        cout<<actual->dato<<" -> ";
        actual=actual->siguiente;

    }
    
    cout<<"null"<<endl;
    

}

void BuscarElementosLista(Nodo *lista,int n){

    Nodo *actual=new Nodo();
    actual=lista;

    bool bandera=false;

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
        
        cout<<"Elemento "<<n<<" ha sido encontrado"<<endl;

    }else{

        cout<<"Elemento "<<n<<" no ha sido enontrado"<<endl;

    }
    

}

void EliminarNodo(Nodo *&lista, int n){

    if (lista !=nullptr)
    {
        
        Nodo *auxiliar_borrar;
        Nodo *anterior=nullptr;
        auxiliar_borrar=lista;

        while ((auxiliar_borrar!=nullptr)&&(auxiliar_borrar->dato!=n))
        {
            
            anterior=auxiliar_borrar;
            auxiliar_borrar=auxiliar_borrar->siguiente;

        }

        if (auxiliar_borrar==nullptr)
        {
            
            cout<<"\nElemento no existe"<<endl;

        }else if(anterior==nullptr){

            lista=lista->siguiente;
            delete auxiliar_borrar;
            cout<<"\nElemento "<<n<<" eliminado exitosamente"<<endl;

        }
        
        

    }
    

}

void EliminarLista(Nodo *&lista,int &n){

        Nodo *auxiliar = lista;
        n=auxiliar->dato;
        lista= auxiliar->siguiente;
        delete auxiliar;

}