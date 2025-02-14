#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
    
using namespace std;

class Fecha
{
    private:
        int dia,mes,anio; 

    
    public:
        Fecha(int,int,int);//constructro1   
        Fecha(long);//contructor2
        void mostrarFecha();
   
};

//constructor 1
Fecha::Fecha(int _dia,int _mes,int _anio){

    dia=_dia;
    mes=_mes;
    anio=_anio;
    

}

//constructor2
Fecha::Fecha(long fecha){

    anio=int (fecha/10000);//extraer el anio
    mes=int((fecha-anio*10000)/100);//extraer el mes
    dia=int(fecha-anio*10000-mes*100);//extraer el dia

}

void Fecha::mostrarFecha(){


    cout<<"Fecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
    
}



int main(){

    Fecha hoy(30,01,2025);
    Fecha ayer(2912025);

    hoy.mostrarFecha();
    ayer.mostrarFecha();

    return 0;
}