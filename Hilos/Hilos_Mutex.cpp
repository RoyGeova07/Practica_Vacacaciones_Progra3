//Un mutex es un mecanismo para garantizar que solo un hilo pueda acceder a una seccion

//critica (porcion de codigo que opera sobre recursos compartidos) a la vez.

//Caracteristicas principales:
//• Bloquea el acceso al recurso compartido para otros hilos mientras esta en uso por uno.
//• Es el bloque basico de sincronización en C++.
//Metodos principales:
//• lock(): Bloquea el mutex si no esta bloqueado. Si esta bloqueado, el hilo se suspende
//hasta que este disponible.
//• unlock(): Libera el mutex.
//• try_lock(): Intenta bloquear el mutex sin bloquear el hilo si no esta disponible.


#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void Tarea(int id){

    mtx.lock();//aqui bloque el mutex
    cout<<"Hilo "<<id<< " esta accediendo a la seccion critica.\n";
    mtx.unlock();//aqui libera el mutex

}

int main(){

    thread t1(Tarea,1);
    thread t2(Tarea,2);

    t1.join();
    t2.join();

    return 0;

}

//• Problemas Potenciales: Si se olvida llamar a unlock() despues de lock(), el recurso
//permanecerá bloqueado, lo que puede causar deadlocks