//• Un hilo detached se ejecuta de forma independiente del hilo principal.
//• Al usar el método detach(), el programador libera cualquier control directo sobre el hilo.
//• Esto significa que el hilo continúa ejecutándose incluso si el programa principal avanza o
//termina.

//Características:
//• No es posible sincronizar el hilo secundario con el hilo principal.
//• Útil para tareas de fondo o procesos independientes.
//• Los recursos asociados al hilo se liberan automáticamente al finalizar su ejecución.

#include <iostream>
#include <thread>

using namespace std;

void TareaLarga(){

    cout<<"Hilo en ejecucion en segundo plano\n";
    this_thread::sleep_for(chrono::seconds(5));
    cout<<"Tarea en segundo plano completada\n";

}


int main(){

    thread hilo(TareaLarga);//aqui se crear el hilo
    hilo.detach();//hilo separado del hilo principal
    cout<<"El hilo esta ejecutandose en segundo plano.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"El programa principal termino sin separar el hilo.\n";

    return 0;

}

//Consideraciones Importantes:
//• Una vez que un hilo se separa, no es posible volver a controlarlo ni sincronizarlo con el
//hilo principal.
//• Es fundamental asegurarse de que cualquier recurso compartido utilizado por el hilo
//detached permanezca válido hasta que el hilo termine. De lo contrario, puede provocar
//comportamiento indefinido