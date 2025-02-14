#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void hiloJoinable(){

    cout<<"Hilo Iniciando..\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout<<"Hilo Joinable terminado...\n";

}

void hiloDetached(){

    cout<<"Hilo Detached iniciando..\n";
    this_thread::sleep_for(chrono::seconds(5));
    cout<<"Hilo Detached completado.\n";

}

int main(){

    thread t1(hiloJoinable);
    thread t2(hiloDetached);

    t2.detach();
    t1.join();

    cout<<"El programa principal finalizo.\n";

    return 0;
}

//En este codigo:
//• El hilo t1 es joinable, por lo que el programa principal lo
//espera antes de continuar.
//• El hilo t2 es detached, por lo que sigue ejecutandose en
//segundo plano incluso despues de que el programa
//principal haya terminado su parte principal.