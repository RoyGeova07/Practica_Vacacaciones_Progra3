#include <iostream>
#include <stdlib.h>
#include <fstream>//libreria de c++ para archivos.
#include <string>

using namespace std;

void Escribir(){

    ofstream archivo;//denominar el nombre del archivo
    string NombreArchivo,frase;

    cout<<"Ingrese un nombre para el archivo: "<<endl;
    getline(cin,NombreArchivo);

    archivo.open(NombreArchivo.c_str(),ios::out);//Aqui estamos abriendo el archivo

    if (archivo.fail())
    {
        
        cout<<"No se pudo abrir el archivo."<<endl;
        exit(1);//si no se abre el archivo, se cerrar el programa automaticamente

    }

    cout<<"\nDigite un texto para el archivo: "<<endl;
    getline(cin,frase);

    archivo<<frase;

    archivo.close();//cerramos el archivo
    

}

int main(){

    Escribir();

    system("pause");

    return 0;
}