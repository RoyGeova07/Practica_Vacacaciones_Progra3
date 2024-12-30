#include <iostream>
#include <string.h>
using namespace std;
#include <conio.h>
#define messi main

int messi(){

    char palabra[] = "Barcelona";
    char palabra2[] = {'B','a','r','c','e','l','o','n','a','\0'};
    char nombre[30];


    cout << "Ingrese su nombre: ";     
    cin.getline(nombre,30,'\n'); 

    cout<<nombre<<endl;


    getch();
    return 0;
}
