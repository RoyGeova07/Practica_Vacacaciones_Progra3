#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Analisis.h"

void Analisis::ProcesarResultadoExamen(){

    int Aprobados=0;
    int Reprobados=0;
    int ContadorEstudiantes=1;
    int Resultado;

    while (ContadorEstudiantes<=10)
    {
        
        cout<<"Escriba el resultado (1 = aprobado, 2 = reprobado): ";
        cin>>Resultado;

        if (Resultado==1)
        {
            Aprobados++;

        }else{

            Reprobados++;

        }

        ContadorEstudiantes++;
        

    }

    cout<<"Aprobados "<<Aprobados<<" \nReprobados "<<Reprobados<<endl;

    if (Aprobados>8)
    {
        
        cout<<"Aumentar colegiatura"<<endl;

    }
    
}

int main(){

    Analisis aplicacion;
    aplicacion.ProcesarResultadoExamen();

}