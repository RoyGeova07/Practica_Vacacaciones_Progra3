#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>//esta libreria proporciona manipuladores de entrada y salida para formatear datos
// en flujos

#include <iomanip>
using std::setw;

#include <cstdlib>//contiene lel protipo de funcion para rand
using std::rand;

int main(){

    //aqui iterara 20 veces
    for (int contador = 0; contador < 20; contador++)
    {
        
        //aqui elije un numero aleatorio de 1 a 6 y lo imprime 
        cout<<setw(10)<<(1+rand() %6);

        //si contador puede dividirse entre 5, empieza una nueva linea de salida 
        if (contador%5==0)
        {
            
            cout<<endl;

        }
        

    }
    

    return 0;
}