#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

#define messi main

using namespace std;

struct Info_Direccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct Empleado
{
    char nombre[20];
    struct Info_Direccion dir_empleado;
    double salario;

}Empleados[2];

int messi(){

    for (int i = 0; i < 2; i++)
    {
        
        cout<<"Digite su nombre: ";
        cin.ignore(); //para limpiar el buffer y no se salte el getline
        cin.getline(Empleados[i].nombre, 20, '\n');

        cout<<"Digite su direccion: ";
        cin.getline(Empleados[i].dir_empleado.direccion, 30, '\n');

        cout<<"Digite su ciudad: ";
        cin.getline(Empleados[i].dir_empleado.ciudad, 20, '\n');

        cout<<"Digite su provincia: ";
        cin.getline(Empleados[i].dir_empleado.provincia,20,'\n');

        cout<<"Digite su salario: ";
        cin>>Empleados[i].salario;

        cout<<"\n";

       

    }

    //imprimiendo los datos

    for(int i=0; i<2; i++){

        cout<<"Nombre del empleado: "<<Empleados[i].nombre<<endl;
        cout<<"Direccion: "<<Empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<Empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<Empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<Empleados[i].salario<<endl;
        cout<<"\n";

    }

    

    getch();
    return 0;
}

