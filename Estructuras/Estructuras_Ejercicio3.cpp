#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

#define messi main

using namespace std;

struct Empleado
{

    char nombre[20];
    float Salario;


}emp[100];

int messi(){

    int n_empleados,poscion_mayor=0, poscion_menor=0;
    float mayor=0, menor=999999;

    cout<<"Digite el numero de empleados: ";
    cin>>n_empleados;

    for (int i=0; i<n_empleados; i++)
    {
        
        cout<<"#"<<i+1<<" Digite su nombre: ";
        cin.ignore();
        cin.getline(emp[i].nombre, 20, '\n');
        cout<<"#"<<i+1<<" Digite su salario: ";
        cin>>emp[i].Salario;

        //Empleado con mayor salario
        if(emp[i].Salario>mayor)
        {

            mayor=emp[i].Salario;
            poscion_mayor=i;

        }

        //Empleado con menor salario
        if(emp[i].Salario<menor)
        {

            menor=emp[i].Salario;
            poscion_menor=i;

        }

        cout<<"\n";

    }

    //impriendo los datos
    cout<<"\nDatos del empleado con mayor salario"<<endl;
    cout<<"Nombre: "<<emp[poscion_mayor].nombre<<endl;
    cout<<"Salario: "<<emp[poscion_mayor].Salario<<endl;

    cout<<"\nDatos del empleado con menor salario"<<endl;
    cout<<"Nombre: "<<emp[poscion_menor].nombre<<endl;
    cout<<"Salario: "<<emp[poscion_menor].Salario<<endl;
    

    getch();
    return 0;
}