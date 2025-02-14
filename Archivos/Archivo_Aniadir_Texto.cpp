#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Alladir(){

    ofstream Archivo;
    string texto;

    Archivo.open("Roy_Geova",ios::app);//aqui abrimos el archivo en modo alladir texto en el 

    if (Archivo.fail())
    {
        
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);

    }

    cout<<"Digite el texto que quiere aniadir: ";
    getline(cin,texto);
    
    Archivo<<texto<<endl;

    Archivo.close();//aqui cerramos el archivo

}

int main(){

    Alladir();

    return 0;
}