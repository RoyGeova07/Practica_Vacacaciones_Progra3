#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>

using namespace std;

#define messi main

int messi(){

    char cadena[50];
    int longitud = 0;
    bool palindromo = true;

    cout << "Ingrese una cadena de texto: ";
    cin.getline(cadena,50,'\n');

    longitud = strlen(cadena);

    //aqui se verifica si la cadena es un palindromo
    for (int verifica = 0; verifica < longitud/2; verifica++)
    {
        
        if(cadena[verifica] != cadena[longitud-1-verifica]){
            palindromo = false;
            break;
        }

    }
    
    if(palindromo){

        cout<<"La cadena es un palindromo"<<endl;
        cout<<"La cadena invertida es: "<<strrev(cadena)<<endl;

    }else{

        cout<<"La cadena no es un palindromo"<<endl;
        cout<<"La cadena invertida es: "<<strrev(cadena)<<endl;

    }
        
    getch();
    return 0;
}