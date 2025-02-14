// 4.20 El programa de resultados de un examen de las fi guras 4.16 a 4.18 asume que cualquier valor introducido por el usuario 
//que no sea un 1 debe ser un 2. Modifi que la aplicación para validar sus entradas. Para cualquier entrada, si el valor introducido 
//es distinto de 1 o 2, debe seguir iterando hasta que el usuario introduzca un valor correcto

#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

int main(){

    int aprobados=0;
    int reprobados=0;
    int contador=1;
    int resultado;

    while (contador<=10)
    {
        
        cout<<"Ingrese el resultado del estudiante "<<contador<<" (1 = Aprobado, 2 = Reprobado): ";
        cin>>resultado;

        while (resultado!=1&&resultado!=2)
        {
            
            cout<<"Entrada no valida. Por favor, Ingrese 1 (Aprobado) o 2 (Reprobado): ";
            cin>>resultado;

        }

        if (resultado==1)
        {
            
            aprobados++;

        }else{

            reprobados++;

        }
        contador++;
        

    }

    cout<<"\nResumen del examen:\n";
    cout<<"Aprobados: "<<aprobados<<endl;
    cout<<"Reprobados: "<<reprobados<<endl;

    if (aprobados>=8)
    {
        
        cout<<"Bono para el instructor!"<<endl;

    }
    
    

    return 0;
}