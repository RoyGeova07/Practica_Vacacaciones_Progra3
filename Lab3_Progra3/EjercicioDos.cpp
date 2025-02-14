//Escriba una aplicación en C++ que utilice una instrucción while y la secuencia de escape de tabulación \t para impri
//mir la siguiente tabla de valores:
// N 10*N 100*N 1000*N
// 1 10 100 1000
// 2 20 200 2000
// 3 30 300 3000
// 4 40 400 4000
// 5 50 500 500

#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;


int main(){


    int N=1;

    //aqui es encabezado de la tabla

    cout << "N\t10*N\t100*N\t1000*N" << endl;

    //aqui bucle para imprimir los valores de 1 a 5
    while (N<=5)
    {
        
        cout << N << "\t" << 10 * N << "\t" << 100 * N << "\t" << 1000 * N << endl;
        N++;

    }
    


    return 0 ;
}