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
    // anidar estructura promedio a la estructura alumno
    struct Promedio promedio_alumno;

} alumno1;

int messi()
{

    float promedio_final;

    bool entradaValida = false;

    cout << "Digite su nombre: ";
    cin.getline(alumno1.nombre, 30, '\n');
    while (!entradaValida)
    {
        cout << "Digite su sexo: ";
        cin.getline(alumno1.sexo, 10, '\n');

        entradaValida=true;

        for (int i = 0; alumno1.sexo[i]!= '\0'; i++)
        {
            if(isdigit(alumno1.sexo[i])){

                entradaValida=false;
                cout << "\nError, el contenido no debe tener numeros. Intente de nuevo" << endl;
                break;

            }

        }
        


    }

    while (true)
    {

        cout << "Digite su edad: ";
        cin >> alumno1.edad;

        if (cin.fail())
        {

            cout << "\nError, el valor ingresado no es un numero" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // este sirve para descartar el valor ingresado

        }else if (alumno1.edad <= 0){

            cout << "\nError, el valor ingresado tiene que ser mayor a cero" << endl;

        }else{

            break;
        }
    }

    // Solicitar las notas del alumno
    cout << "\n***NOTAS DEL ALUMNO***: \n";
    while (true)
    {

        cout << "Digite la nota 1: ";
        cin >> alumno1.promedio_alumno.nota1;

        if (cin.fail())
        {

            cout << "\nError, el valor ingresado no es un numero" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // este sirve para descartar el valor ingresado

        }else if(alumno1.promedio_alumno.nota1 <= 0){

            cout << "\nError, el valor ingresado tiene que ser mayor a cero" << endl;

        }else{

            break;
        }
    }

    while (true)
    {

        cout << "Digite la nota 2: ";
        cin >> alumno1.promedio_alumno.nota2;

        if (cin.fail())
        {

            cout << "\nError, el valor ingresado no es un numero" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // este sirve para descartar el valor ingresado

        }else if (alumno1.promedio_alumno.nota2 <= 0){

            cout << "\nError, el valor ingresado tiene que ser mayor a cero" << endl;

        }else{

            break;
        }
    }

    while (true)
    {

        cout << "Digite la nota 3: ";
        cin >> alumno1.promedio_alumno.nota3;

        if (cin.fail())
        {

            cout << "\nError, el valor ingresado no es un numero" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // este sirve para descartar el valor ingresado

        }else if(alumno1.promedio_alumno.nota3 <= 0){

            cout << "\nError, el valor ingresado tiene que ser mayor a cero" << endl;

        }else{

            break;
        }
    }
    promedio_final = (alumno1.promedio_alumno.nota1 + alumno1.promedio_alumno.nota2 + alumno1.promedio_alumno.nota3) / 3;

    cout << "\n***DATOS DEL ALUMNO***: \n";
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Sexo: " << alumno1.sexo << endl;
    cout << "Edad: " << alumno1.edad << endl;
    cout << "Promedio final: " << promedio_final << endl;

    return 0;
}
