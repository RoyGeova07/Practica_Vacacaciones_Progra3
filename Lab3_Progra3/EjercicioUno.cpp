//EJERCICIO 4.17 

// El proceso de encontrar el número más grande (es decir, el máximo de un grupo de números) se utiliza frecuentemente 
//en aplicaciones de computadora. Por ejemplo, un programa para determinar el ganador de un concurso de ventas recibe como 
//entrada el número de unidades vendidas por cada vendedor. El vendedor que haya vendido más unidades es el que gana el con
//curso. Escriba un programa en seudocódigo y después una aplicación en C++ que utilice una instrucción while para determinar 
//e imprimir el mayor número de una serie de 10 números introducidos por el usuario. Su programa debe utilizar tres variables, 
//como se muestra a continuación:
//  contador:  Un contador para contar hasta 10 (es decir, para llevar el registro de cuántos números se han 
//introducido, y para determinar cuando se hayan procesado los 10 números). 
//  numero:  El número actual que se introduce al programa.
//  mayor:  El número más grande encontrado hasta ahora.

#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

int main(){

    int contador =1,numero,mayor;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>mayor;

    while (contador<10)
    {
        
        cout<<"Ingrese otro numero: ";
        cin>>numero;

        if (numero>mayor)
        {
            
            mayor=numero;

        }
        
        contador++;

    }
    
    cout<<"El numero mas grande es: "<<mayor<<endl;

    return 0;

}

