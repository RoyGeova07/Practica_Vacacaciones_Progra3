#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int cuadrado(int); 

int main()
{
    int a = 10; 

    cout << a << " al cuadrado: " << cuadrado(a) << endl; 
    return 0;                                             
} 

// devuelve el cuadrado de un entero
int cuadrado(int x) // x es una variable local
{
    return x * x; // calcula el cuadrado y devuelve el resultado
} 