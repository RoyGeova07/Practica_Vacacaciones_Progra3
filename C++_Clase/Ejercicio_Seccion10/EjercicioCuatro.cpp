#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
unsigned long factorial(unsigned long); // prototipo de funcion
int main()
{
    
    // calcula los factoriales del 0 al 10
    for (int contador = 0; contador <= 10; contador++)
        cout << setw(2) << contador << "! = " << factorial(contador)
             << endl;
    return 0; 

} 

// definicion recursiva de la función factorial
 unsigned long factorial( unsigned long numero )
 {
 if ( numero <= 1 ) // evalua el caso base
 return 1; // casos base: 0! = 1 y 1! = 1
 else // paso recursivo
 return numero * factorial( numero - 1 );
 } // fin de la funcion factorial