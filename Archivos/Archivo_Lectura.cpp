#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void LeerArchivo(){


    ifstream Archivo;
    string texto;

    Archivo.open("Roy_Geova",ios::in);//Abrimos el archivo en modo lectura
    
    if (Archivo.fail())
    {
        
        cout<<"No se pudo Abrir el archivo"<<endl;
        exit(1);

    }

    while (!Archivo.eof())//mientras no sea el final del archivo
    {
                    
                    //toda la informacion que estan en el archivo,se guardara en la variable de texto
        getline(Archivo,texto);
        cout<<texto<<endl;

    }

    Archivo.close();//cerramos el archivo
    
    

}

int main(){

    LeerArchivo();

    return 0;
}