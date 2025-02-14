#include <iostream>
using namespace std;

class Figura
{
    private:



    public:

    virtual void IngresarDatos()=0;//aqui es un metodo virtual puro
    virtual double CalcularArea()=0;
    virtual void MostrarResultado(){

        cout<<"El are es: "<<CalcularArea()<<endl;

    }

    virtual ~Figura() {}//eesto es un destructor virtual    

};

//esta clase se dervia
class Rectangulo : public Figura
{
private:

    double ancho,alto;

public:

    void IngresarDatos() override{

        cout<<"Ingrese el ancho del rectangulo: ";
        cin>>ancho;
        cout<<"Ingrese el alto del rectangulo: ";
        cin>>alto;

    }

    double CalcularArea() override {

        return ancho*alto;

    }

};


class Circulo : public Figura
{
    private:

    double radio;
    
    public:

    void IngresarDatos() override {

        cout<<"Ingrese el radio del circulo: ";
        cin>>radio;

    }

    double CalcularArea() override{

        return 3.1416 * radio * radio;

    }
    
};


int main(){

    Figura* figura;

    int opcion;

    cout<<"Seleccione una figura para calcular el area: "<<endl;
    cout<<"1. Rectangulo"<<endl;
    cout<<"2. Circulo"<<endl;
    cout<<"opcion: ";
    cin>>opcion;

    if (opcion==1)
    {
        
        figura=new Rectangulo();

    }
    else if (opcion==2)
    {
        
        figura=new Circulo();

    }
    else
    {
        cout<<"Opcion no valida"<<endl;
        return 1;
    }

    figura->IngresarDatos();
    figura->MostrarResultado();


    delete figura;//aqui libera memoria

    return 0;
    

}





