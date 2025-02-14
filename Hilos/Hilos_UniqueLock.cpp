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

    //unique_lock<mutex>

} 