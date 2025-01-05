#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

#define messi main

using namespace std;

struct Alumno
{
    
    char nombre[20];
    int edad;
    double promedio;


};

int messi(){

    Alumno alumnos[3];

    for (int i=0; i<3; i++)
    {
        
        cout<<"Digite su nombre: ";
        cin.ignore();
        cin.getline(alumnos[i].nombre, 20, '\n');
        cout<<"Digite su edad: ";
        cin>>alumnos[i].edad;
        cout<<"Digite su promedio: ";
        cin>>alumnos[i].promedio;
        cout<<"\n";



    }

    //comprobar cual de los 3 alumnos tiene mejor promedio  
    Alumno mejor_alumno = alumnos[0];

    for (int i = 0; i < 3; i++)
    {
        
        if(alumnos[i].promedio>mejor_alumno.promedio)
        {

            mejor_alumno=alumnos[i];

        }

    }

    cout<<"\n\n**EL MEJOR ALUMNO**"<<endl;
    cout<<"Nombre: "<<mejor_alumno.nombre<<endl;
    cout<<"Edad: "<<mejor_alumno.edad<<endl;
    cout<<"Promedio: "<<mejor_alumno.promedio<<endl;
    
   
    getch();
    return 0;
}
