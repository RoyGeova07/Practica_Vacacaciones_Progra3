#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>//esta libreria proporciona manipuladores de entrada y salida para formatear datos
// en flujos

#include <iomanip>
using std::setw;

#include <cstdlib>//contiene lel protipo de funcion para rand
using std::rand;
using std::srand;

int main(){


    unsigned seed;//aqui se almacena la semilla introducida por el usuario

    cout<<"Introduzca una semilla: ";
    cin>>seed;
    srand(seed);


    for (int contador = 1; contador <= 10; contador++)
    {
        
        //aqui elige un numero aleatorio entre 1 y 6 y lo imprime 
        cout<<setw(10)<<(1+rand()%6);

        //si el contador puede dividirse entre 5, empieza una nueva linea de salida 
        if (contador%5==0)
        {
            
            cout<<endl;

        }
        

    }
    

    return 0;
}