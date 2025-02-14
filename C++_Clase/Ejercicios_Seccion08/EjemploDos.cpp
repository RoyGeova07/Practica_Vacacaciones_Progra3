// Tirar un dado de seis lados 6,000,000 de veces

#include <iostream>
#include <string>
#include <iomanip>
using std::setw;
using std::cout;
using std::endl;

//simula 6,000,000 de tiros de un dado. Cada entero en el rango de 1 a 6 debe aparecer aproximadamente 
//1,000,000 veces. Esto se confi rma en la ventana de resultados,

int main(){

    int frecuencial=0;
    int frecuencial2=0;
    int frecuencial3=0;
    int frecuencial4=0;
    int frecuencial5=0;
    int frecuencial6=0;

    int cara;//aqui esta varibale va a almacenar que se tiro recientemente

    //aqui sintetiza los resultados de tirar un dado 6,000,000 veces
    for (int i = 0; i <= 6000000; i++)
    {

        cara=1+rand()%6;//numero aleatorio del 1 al 6
        switch (cara)
        {
        case 1:

            ++frecuencial;//aqui incrementa el contador de 1s
           
            break;

        case 2: 

            ++frecuencial2;

            break;

        case 3: 

            ++frecuencial3;

            break;

        case 4: 

            ++frecuencial4;

            break;

        case 5: 

            ++frecuencial5;

            break;

        case 6:

            ++frecuencial6;

            break;
        default:

            cout<<"El programa no llega aqui"  <<endl;

            break;
        }

    }//aqui finr de dor


    cout<<"Cara"<<setw(13)<<"Frecuencia"<<endl;//aqui imprime los encabezados
    cout<<"   1."<<setw(13)<<frecuencial
    <<"\n   2."<<setw(13)<<frecuencial2
    <<"\n   3."<<setw(13)<<frecuencial3
    <<"\n   4."<<setw(13)<<frecuencial4
    <<"\n   5."<<setw(13)<<frecuencial5
    <<"\n   6."<<setw(13)<<frecuencial6<<endl;



    return 0;
}
