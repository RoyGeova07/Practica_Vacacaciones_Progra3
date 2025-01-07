#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;

struct Promedio
{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno
{

    char nombre[30];
    char sexo[10];
    int edad;
    float promedio;
    // anidar estructura promedio a la estructura alumno
    struct Promedio promedio_alumno;

} alumnos[100];

int messi()
{

    int n_alumnos = 0,mejor_promedio=0, poscion_mayor = 0;
    bool entradaValida = false;


    while (true)
    {

        cout << "Digite el numero de alumnos: ";
        cin >> n_alumnos;

        if (cin.fail())
        {

            cout << "\nError, el valor ingresado no es un numero" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (n_alumnos <= 0)
        {

            cout << "\nError, el valor ingresado tiene que ser mayor a cero" << endl;
        }
        else
        {

            break;
        }
    }

    for (int i = 0; i < n_alumnos; i++)
    {

        cout<<"#"<<i+1<< " Digite el nombre del alumno: ";
        cin.ignore();
        cin.getline(alumnos[i].nombre, 30, '\n');

        entradaValida = false;//reinicia el indicador para la siguiente iteracion.
        while (!entradaValida)
        {

            cout<<"#"<<i+1<<" Digite el sexo del alumno: ";
            cin.getline(alumnos[i].sexo, 10, '\n');

            entradaValida = true;

            for(int i=0; alumnos[i].sexo[i]!= '\0'; i++){

                if(isdigit(alumnos[i].sexo[i])){

                    entradaValida=false;
                    cout << "\nError, el contenido no debe tener numeros. Intente de nuevo" << endl;
                    break;

                }

            }

        }

        while (true)
        {
            
            cout<<"#"<<i+1<<" Digite la edad del alumno: ";
            cin >> alumnos[i].edad;

            entradaValida = true;

            if(cin.fail()){

                cout<<"\nError el valor ingresado no es un numero"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

            }else if(alumnos[i].edad<=0){

                cout<<"\nError el valor ingresado tiene que ser mayor a cero"<<endl;

            }else{

                break;

            }

        }
        
        while(true){

            cout<<"\n"<<"#"<<i+1<<" Alumno Digite la nota 1: ";
            cin>>alumnos[i].promedio_alumno.nota1;

            if (cin.fail())
            {
                
                cout<<"\nError el valor ingresado no es un numero"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');


            }else if(alumnos[i].promedio_alumno.nota1<0){

                cout<<"\nError el valor de la nota no puede ser negativo"<<endl;

            }else{

                break;

            }
            

        }

        while(true){

            cout<<"\n"<<"#"<<i+1<<" Alumno Digite la nota 2: ";
            cin>>alumnos[i].promedio_alumno.nota2;

            if (cin.fail())
            {
                
                cout<<"\nError el valor ingresado no es un numero"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');


            }else if(alumnos[i].promedio_alumno.nota2<0){

                cout<<"\nError el valor de la nota no puede ser negativo"<<endl;

            }else{

                break;

            }
            

        }

        while(true){

            cout<<"\n"<<"#"<<i+1<<" Alumno Digite la nota 3: ";
            cin>>alumnos[i].promedio_alumno.nota3;

            if (cin.fail())
            {
                
                cout<<"\nError el valor ingresado no es un numero"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');


            }else if(alumnos[i].promedio_alumno.nota3<0){

                cout<<"\nError el valor de la nota no puede ser negativo"<<endl;

            }else{

                break;

            }
            

        }
        
        //calcular el promedio final
        alumnos[i].promedio = (alumnos[i].promedio_alumno.nota1 + alumnos[i].promedio_alumno.nota2 + alumnos[i].promedio_alumno.nota3) / 3;

        if (alumnos[i].promedio>mejor_promedio)
        {
            
            mejor_promedio=alumnos[i].promedio;
            poscion_mayor=i;


        }
        

        cout << "\n";
        

    }

    //imprimir los datos de todos los alumnos
    for (int i = 0; i < n_alumnos; i++)
    {

        cout << "\nDatos del alumno #" << i + 1 << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Sexo: " << alumnos[i].sexo << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout<< "Promedio Final " <<alumnos[i].promedio<<endl;

    }

    //imprimir los datos del alumno con mejor promedio
    cout << "\n***DATOS DEL ALUMNO CON MEJOR PROMEDIO***" << endl;
    cout<<"Nombre: "<<alumnos[poscion_mayor].nombre<<endl;
    cout<<"Sexo: "<<alumnos[poscion_mayor].sexo<<endl;
    cout<<"Edad: "<<alumnos[poscion_mayor].edad<<endl;
    cout<<"Promedio Final: "<<alumnos[poscion_mayor].promedio<<endl;

    return 0;
}
