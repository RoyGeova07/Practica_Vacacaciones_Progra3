#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int contador = 1; // inicializa contador
    do
    {
        cout << contador << " "; // muestra contador
        contador++;              // incrementa contador
    } while (contador <= 10); // fin de do...while
} 