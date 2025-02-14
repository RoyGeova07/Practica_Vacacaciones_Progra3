#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
#include <limits>
#include <stdlib.h>
#include <cstdlib>
#include <thread>

using namespace std;

void Tarea(){

    cout<<"Ejecutando en un hilo separado.\n";

}

void ImprimirMensaje(const string& mensaje){

    cout<<mensaje<<endl;

}

void TareaLarga(){

    cout<<"Hilo en ejecucion...\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout<<"Hilo terminado.\n";

}

int main(){

    thread hilo(TareaLarga);
    cout<<"Esperando que el hilo termine..\n";
    hilo.join();
    cout<<"Hilo completado, continuando ejecucion principal.\n";

   // string mensaje="hola desde un hilo\n";
    //thread hilo(ImprimirMensaje,ref(mensaje));
    //hilo.join();

    return 0;
}