//El std::unique_lock es una herramienta mas flexible que std::lock_guard.
//• Ademas de bloquear y desbloquear automaticamente un mutex, permite un control mas
//granular.
//Caracteristicas:
//• Puede diferir el bloqueo (modo deferred).
//• Puede transferir la propiedad del bloqueo entre objetos.
//• Compatible con std::condition_variable.

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void Tarea(int id){

    unique_lock<mutex> lock(mtx);//aqui lo bloque automaticamente
    cout<<"Hilo "<<id<<" esta en la seccion critica.\n";
    lock.unlock();//aqui los desbloque automaticamente.
    cout<<"Hilo "<<id<<" ha liberado del recurso.\n";

} 

int main(){

    thread t1(Tarea,1);
    thread t2(Tarea,2);

    t1.join();
    t2.join();

    return 0;

}