#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
    
using namespace std;

class Rectangulo
{

    private: 
        float largo,ancho;

    public: 
        Rectangulo(float,float);
        void Perimetro();
        void Area();

};

Rectangulo::Rectangulo(float _largo,float _ancho){

    largo=_largo;
    ancho=_ancho;

}

void Rectangulo::Perimetro(){

    float _perimetro;

    _perimetro=(2*largo)+(2*ancho);

    cout<<"El perimetro es: "<<_perimetro<<endl;


}

void Rectangulo::Area(){

    float _Area;

    _Area=largo*ancho;

    cout<<"El area es: "<<_Area<<endl;

}


int main(){

    //instanciar una clase es lo mismo que crear un objeto
    Rectangulo r1(11,7);

    r1.Area();
    r1.Perimetro();
    

    return 0;
}