#include <iostream>
#include <conio.h>
#include <random>
#include <string.h>
#include <stdlib.h>
#include <limits>

#define messi main

using namespace std;


void cambioDolar(int, int&,int&,int&,int&,int&,int&);
void cambioLempiras(int, int&,int&,int&,int&,int&,int&,int&,int&,int&);

int messi(){

    int Billeton,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;

    int Uno=0,Dos=0,Cinco=0,Diez=0,Veinte=0,Cincuenta=0,Cien=0,Doscientos=0,Quinientos=0;

    cout<<"Ingrese un Billeton : "<<endl;
    cin>>Billeton;

    cambioDolar(Billeton,cien,cincuenta,veinte,diez,cinco,uno);

    cout<<"EN BASE EN DOLARES"<<endl;
    cout<<"Valor de 100: "<<cien<<endl;
    cout<<"Valor de 50: "<<cincuenta<<endl;
    cout<<"Valor de 20: "<<veinte<<endl;
    cout<<"Valor de 10: "<<diez<<endl;
    cout<<"Valor de 5: "<<cinco<<endl;
    cout<<"Valor de 1: "<<uno<<endl;

    cambioLempiras(Billeton,Quinientos,Doscientos,Cien,Cincuenta,Veinte,Diez,Cinco,Dos,Uno);

    cout<<"\nEN LEMPIRAS"<<endl;
    cout<<"Valor de 500: "<<Quinientos<<endl;
    cout<<"Valor de 200: "<<Doscientos<<endl;
    cout<<"Valor de 100: "<<Cien<<endl;
    cout<<"Valor de 50: "<<Cincuenta<<endl;
    cout<<"Valor de 20: "<<Veinte<<endl;
    cout<<"Valor de 10: "<<Diez<<endl;
    cout<<"Valor de 5: "<<Cinco<<endl;
    cout<<"Valor de 2: "<<Dos<<endl;
    cout<<"Valor de 1: "<<Uno<<endl;



    return 0;
}

void cambioDolar(int Billeton,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco, int& uno){

    //calcular billetes de 100
    cien=Billeton/100;
    Billeton= Billeton%100;//calcular lo que quedo

    cincuenta= Billeton/50;
    Billeton=Billeton%50;

    veinte=Billeton/20;
    Billeton=Billeton%20;

    diez=Billeton/10;
    Billeton=Billeton%10;

    cinco=Billeton/5;
    Billeton=Billeton%5;

    uno=Billeton;

}

void cambioLempiras(int Billeton, int& Quinientos,int& Doscientos,int& Cien,int& Cincuenta,int& Veinte,int& Diez,int& Cinco,int& Dos,int& Uno){

    Quinientos=Billeton/500;
    Billeton%=500;

    Doscientos= Billeton/200;
    Billeton%=200;

    Cien=Billeton/100;
    Billeton%=100;

    Cincuenta=Billeton/50;
    Billeton%=50;

    Veinte=Billeton/20;
    Billeton%=20;

    Diez=Billeton/10;
    Billeton%=10;

    Cinco=Billeton/5;
    Billeton%=5;

    Dos=Billeton/2;
    Billeton%=2;

    Uno=Billeton;


}