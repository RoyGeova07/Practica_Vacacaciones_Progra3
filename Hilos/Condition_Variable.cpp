//• La std::condition_variable se utiliza para coordinar la ejecucion entre hilos, permitiendo
// que un hilo espere hasta que se cumpla una condicion especifica.
// • Es util en problemas clasicos como productor-consumidor.
// Metodos principales:
// • wait(): Suspende el hilo hasta que se notifique la condicion.
// • notify_one(): Despierta un hilo que espera la condicion.
// • notify_all(): Despierta todos los hilos que esperan la condicion


#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

using namespace std;

mutex mtx;
condition_variable cv;
queue<int> buffer;
const int maxBuffer=5;

void Productor(int id){

    for (int i = 0; i < 10; i++)
    {
        
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] {return buffer.size() < maxBuffer;});
        buffer.push(i);

        cout<<"Productor "<<id<< " produjo: "<<i<<"\n";
        cv.notify_all();

    }
    

}

void Consumidor(int id){

    for (int i = 0; i < 10; i++)
    {
        
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] {return !buffer.empty(); });
        int item=buffer.front();
        buffer.pop();
        cout<<"Consumidor "<<id<<" consumio: "<<item<<"\n";
        cv.notify_all();

    }
    

}

int main(){

    thread p1(Productor,1);
    thread c1(Consumidor,1);

    p1.join();
    c1.join();

    return 0;
}

//Flujo del Ejemplo:
// • El productor agrega elementos al buffer si hay espacio disponible.
// • El consumidor elimina elementos del buffer si no esta vacio.
// • Ambos hilos se notifican mutuamente usando cv.notify_all() para desbloquear al otro
// cuando corresponde