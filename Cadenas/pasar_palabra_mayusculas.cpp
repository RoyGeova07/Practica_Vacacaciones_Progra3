#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>

using namespace std;

#define messi main

//pasar a mayusculas una cadena de texto strupr();
//pasar a miniuculas una cadena de texto strlwr();

int messi(){

    char nombre[] = "Roy";
    char nombre2[]="LIONEL MESSI";

    strupr(nombre);
    strlwr(nombre2);

    cout<<nombre<<endl;
    cout<<nombre2<<endl;

    getch();
    return 0;
}