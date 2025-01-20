#include <iostream>
#include <conio.h>
#include <limits>
#include <stdlib.h>

using namespace std;

#define roy main

struct Alumno
{
    
    char nombre[30];
    int edad;
    float promedio;

}alumno[3],*puntero_alumno= alumno;

void pedirDatos();
void CalcularMejorPromedioAlumno(Alumno*);

int roy(){

    pedirDatos();
    CalcularMejorPromedioAlumno(puntero_alumno);

    return 0;
}

void pedirDatos(){

    for (int i = 0; i < 3; i++)
    {
        //PRECAUCION: SIN cin.ignore EL BUFFER SE LLENA Y EL PROGRAMA SE SALTA EL "DIGITE SU NOMBRE"
        if (i>0)
        {
            
            cin.ignore(numeric_limits<streamsize>::max(),'\n');//ESTO LO QUE HACE ES QUE VACIA EL BUFFER

        }
        
        cout<<"Digite su nombre: ";
        cin.getline((puntero_alumno+i)->nombre,30,'\n');
        cout<<"Digite su edad: ";
        cin>>(puntero_alumno+i)->edad;
        cout<<"Digite su promedio: ";
        cin>>(puntero_alumno+i)->promedio;
        cout<<"\n";

    }
    

}

void CalcularMejorPromedioAlumno(Alumno *puntero_alumno){

    float mayor=0.0;
    int pos=0;

    for (int i = 0; i < 3; i++)
    {
        
        if ((puntero_alumno+i)->promedio>mayor)//sin punteros: puntero_alumno[i].promedio
        {
            
            mayor = (puntero_alumno+i)->promedio;//comprobar el mayor promedio del alumno
            pos=i;//aqui se guarda la posicion del mayor promedio
            
        }
        

    }

    //aqui se imprimira los datos con mayor promedio
    cout<<"\nEl alumno con mejor promedio es: \n";
    for (int i = 0; i < 3; i++)
    {
        
        if((puntero_alumno+i)->promedio==mayor){

            
            cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
            cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
            cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
            cout<<"\n";

        }

    }
    
    

}