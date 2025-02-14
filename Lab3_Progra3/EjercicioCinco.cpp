// instrucción continue para terminar una iteración de una instrucción for.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    for (int cuenta = 1; cuenta <= 10; cuenta++) // itera 10 veces
    {
        if (cuenta == 5) // si cuenta es 5,
            continue;    // omite el codigo restante en el ciclo

        cout << cuenta << " ";
    } // fin de for

    cout << "\nSe uso continue para no imprimir el 5" << endl;
    return 0; 
} 