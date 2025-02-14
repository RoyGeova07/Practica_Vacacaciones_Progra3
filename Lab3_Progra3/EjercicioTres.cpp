
// 4.19 Utilizando una metodología similar a la del ejercicio 4.17, encuentre los dos valores más grandes de los 10 que se intro
//dujeron. [Nota: debe introducir cada número sólo una vez.]

#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;


int main(){

    int contador =1,numero,mayor,mayor2;

    cout<<"Ingrese el primer numero: ";
    cin>>mayor;

    cout<<"Ingrese el segundo numero: ";
    cin>>numero;

   
    if (numero>mayor)
    {
        mayor2=mayor;//aqui el anterior mayoir ahora es el segundo mayor
        mayor=numero;

    }else{

        mayor2=numero;//nuevo segundo mayor

    }

    while (contador<=8)
    {
        
        cout<<"Ingrese otro numero: ";
        cin>>numero;

        if (numero>mayor)
        {
            
            mayor2=mayor;//aqui el anterior mayoir ahora es el segundo mayor
            mayor=numero;//nuevo mayor

        }
        else if (numero>mayor2)
        {
            
            mayor2=numero;//nuevo segundo mayor
            
        }
        contador++;
        
    }

    cout<<"El numero mas grande es: "<<mayor<<endl;
    cout<<"El segundo numero mas grande es: "<<mayor2<<endl;


    return 0;

}