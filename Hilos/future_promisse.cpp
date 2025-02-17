//std::future y std::promise
// • Estas herramientas permiten la comunicacion entre hilos, proporcionando un mecanismo
// para que un hilo obtenga resultados de otro hilo.
// Uso Tipico:
// • std::promise se usa para proporcionar un valor o resultado desde un hilo.
// • std::future se utiliza para obtener ese valor en otro hilo

#include <iostream>
#include <thread>
#include <future>

using namespace std;

void Calcular(promise<int> prom){

    int resultado=42;//calculo pesado
    prom.set_value(resultado);
    
}

int main(){

    promise<int> prom;
    future<int> fut=prom.get_future();

    thread hilo(Calcular,move(prom));

    cout<<"El resultado es: "<<fut.get()<<"\n";

    hilo.join();

    return 0;
}