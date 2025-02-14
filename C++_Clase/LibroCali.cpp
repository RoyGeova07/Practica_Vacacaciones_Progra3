#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "libroo.h"

LibroCalificaciones::LibroCalificaciones(string nombre){

    EstablecerNombre(nombre);

}

void LibroCalificaciones::EstablecerNombre(string nombre){

    if (nombre.length()<=25)
    {
        
        NombreCurso=nombre;

    }else{

        NombreCurso=nombre.substr(0,25);
        cout<<"El nombre \"" <<nombre<<"\" excede la longitud  maxima (25).\n"<<"Se limito nombreCurso a los primeros 25 caracteres.\n"<<endl;

    }
    

}

string LibroCalificaciones::ObtenerNombreCurso(){

    return NombreCurso;

}

void LibroCalificaciones::MostrarMensaje(){

    cout<<"Bienvenido al libro de calificiones para \n"<<ObtenerNombreCurso()<<"!\n"<<endl;

}

void LibroCalificaciones::DeterminarPromedioClase(){

    
    int total,contadorCalificaciones, Calificacion,promedio;

    total=0;
    contadorCalificaciones=1;

    while (contadorCalificaciones<=10)
    {
        
        cout<<"Escriba una calificacion: ";
        cin>>Calificacion;
        total+=Calificacion;
        contadorCalificaciones=contadorCalificaciones+1;

    }

    promedio = total/10;

    cout<<"\nEl total de las calificaciones es "<<total<<endl;
    cout<<"El promedio de la clase es "<<promedio<<endl;
    

}



int main(){

    LibroCalificaciones milibrito("CS101 Programacion en C++");

    milibrito.MostrarMensaje();
    milibrito.DeterminarPromedioClase();

}

