#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include "Libro_Calificaciones.h"
#include <iomanip>// manipuladores de flujo parametrizados  
using std::setprecision;// establece la precisión numérica de salid

Libro_Calificaciones::Libro_Calificaciones(string nombre){

    EstablecerNombre(nombre);

}

void Libro_Calificaciones::EstablecerNombre(string nombre){

    if (nombre.length()<=25)
    {
        
        NombreCurso=nombre;

    }else{

        NombreCurso=nombre.substr(0,25);
        cout<<"El nombre \"" <<nombre<<"\" excede la longitud  maxima (25).\n"<<"Se limito nombreCurso a los primeros 25 caracteres.\n"<<endl;

    }
    

}

string Libro_Calificaciones::ObtenerNombreCurso(){

    return NombreCurso;

}

void Libro_Calificaciones::MostrarMensaje(){

    cout<<"Bienvenido al libro de calificiones para \n"<<ObtenerNombreCurso()<<"!\n"<<endl;

}

void Libro_Calificaciones::DeterminarPromedioClase(){

    
    int total,contadorCalificaciones, Calificacion;
    double promedio;

    total=0;
    contadorCalificaciones=0;

    // itera hasta leer el valor centinela del usuario
    while (Calificacion!=-1)
    {
        
        total +=Calificacion;
        contadorCalificaciones = contadorCalificaciones+1;

        cout<<"Escriba la calificacion o -1 para salir: ";
        cin>>Calificacion;

    }
    
    if (contadorCalificaciones !=0)
    {
        
        // calcula el promedio de todas las calificaciones introducidas
        promedio=static_cast<double>(total) / contadorCalificaciones;

        
        cout<<"\nEl total of las "<<contadorCalificaciones<<" calificaciones introducidas es "<<total<<endl;
        cout<<"El promedio de la clase es "<<setprecision(2)<<fixed<<promedio<<endl;

    }else{

        cout<<"No se introdujeron calificiones "<<endl;

    }
    
    

}



int main(){

    Libro_Calificaciones milibrito("CS101 Programacion en C++");

    milibrito.MostrarMensaje();
    milibrito.DeterminarPromedioClase();

}