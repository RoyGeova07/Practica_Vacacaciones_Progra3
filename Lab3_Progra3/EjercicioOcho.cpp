//5.16 Modifi que el programa de la fi gura 5.6, de manera que se utilicen sólo enteros para calcular el interés compuesto. [Suge
//rencia: trate todas las cantidades monetarias como números integrales de centavos. Luego “divida” el resultado en su porci

#include <iostream>
#include <iomanip> // Para setw y setfill
#include <cmath>   // Para la función pow

using namespace std;

int main() {

    // Se trabaja con centavos para evitar decimales
    int principal = 100000; // 1000 dolares representados en centavos (1000 * 100)
    int tasa = 5; // 5% de interes anual (se trabaja con enteros)
    
    // Mostrar encabezado
    cout << "Año" << setw(25) << "Monto en deposito" << endl;

    // Bucle para calcular interes compuesto
    for (int anio = 1; anio <= 10; anio++) {
        // Calculo del monto en centavos usando solo enteros
        int monto = principal * pow(1 + tasa / 100.0, anio);

        // Convertir de centavos a dolares y centavos
        int dolares = monto / 100; // Parte entera en dolares
        int centavos = monto % 100; // Parte fraccionaria en centavos

        // Mostrar el resultado con formato adecuado
        cout << setw(4) << anio << setw(17) << "$" << dolares << "." 
             << setfill('0') << setw(2) << centavos << endl; // Asegura 2 digitos en centavos
    }

    return 0;
}