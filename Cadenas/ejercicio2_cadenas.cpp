#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define messi main

int messi(){

    char cadena[30];
    int vocal_A = 0, vocal_E = 0, vocal_I = 0, vocal_O = 0, vocal_U = 0;

    cout << "Digite una cadena de caracteres: ";
    cin.getline(cadena, 30, '\n');

    for(int i = 0; i<30; i++){

        switch(cadena[i]){

            case 'a': vocal_A++; break;
            case 'e': vocal_E++; break;
            case 'i': vocal_I++; break;
            case 'o': vocal_O++; break;
            case 'u': vocal_U++; break;

        }

    }

    cout << "Vocal A: " << vocal_A << endl;
    cout << "Vocal E: " << vocal_E << endl; 
    cout << "Vocal I: " << vocal_I << endl;
    cout << "Vocal O: " << vocal_O << endl;
    cout << "Vocal U: " << vocal_U << endl;
    cout<<"La cantidad de vocales en la cadena es: "<<vocal_A+vocal_E+vocal_I+vocal_O+vocal_U<<endl;

    getch();
    return 0;
    
}