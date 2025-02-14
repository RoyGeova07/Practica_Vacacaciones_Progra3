#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>//esta libreria proporciona manipuladores de entrada y salida para formatear datos
// en flujos

#include <iomanip>
using std::setw;

#include <cstdlib>//contiene lel protipo de funcion para rand
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int tirarDados(){

    int dado1=1+rand()%6;
    int dado2=1+rand()%6;

    int suma = dado1+dado2;

    cout<<"El jugador tiro "<<dado1<<" + "<<dado2<<" = "<<suma<<endl;

    return suma;

}

int main(){

    enum Estado{CONTINUAR,GANO,PERDIO};

    int miPuntos;
    Estado EstadoJuego;

    srand(time(0));

    //primer tiro del dado
    int sumaDeDados=tirarDados();

    // determina el estado del juego y el punto (si es necesario), con base en el primer tiro
    switch (sumaDeDados)
    {
    case 7://gana en el primer tiro
        
    case 11:// -- -- - -
    EstadoJuego= GANO;
    
    break;


    case 2: 
    case 3:
    case 12: 
    EstadoJuego=PERDIO;

    break;

    default://no gano ni perdio, por lo que recuerda el punto
        EstadoJuego=CONTINUAR;
        miPuntos=sumaDeDados;
        cout<<"El punto es "<<miPuntos<<endl;
    
        break;
    }

    while (EstadoJuego==CONTINUAR)
    {

        sumaDeDados=tirarDados();

        if (sumaDeDados==miPuntos)
        {
            
            EstadoJuego=GANO;

        }else{

            if (sumaDeDados==7)
            {
                
                EstadoJuego=PERDIO;

            }
            

        }
        

    }

    if (EstadoJuego==GANO)
    {
        
        cout<<"El jugador gana"<<endl;

    }else{

        cout<<"El jugador pierde"<<endl;

    }
    
    

    return 0;
}