//El std::lock_guard es un contenedor que administra automaticamente el bloqueo y
//desbloqueo de un mutex dentro de un bloque de codigo, reduciendo el riesgo de errores
//como olvidar liberar el mutex.
//Caracteristicas:
//• Bloquea el mutex en el constructor.
//• Libera el mutex automaticamente en el destructor.


#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void Tarea(int id){

    lock_guard<mutex> guard(mtx);//aqui bloquea automaticamente
    cout<<"Hilo"<<id<< " accede de forma segura.\n";
    //mutex se libera automaticamente  al salir del bloque

}

int main(){

    thread t1(Tarea,1);
    thread t2(Tarea,2);

    t1.join();
    t2.join();

    return 0;

}

//Ventajas:
//• Previene deadlocks debido a errores de programacion.
//• Facilita el manejo seguro de excepciones al liberar el mutex automaticamente si ocurre
//una excepcion.