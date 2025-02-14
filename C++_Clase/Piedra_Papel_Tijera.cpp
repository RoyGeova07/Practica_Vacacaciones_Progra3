#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <limits>
#include <cstdlib>//para random
#include <ctime>
#include <algorithm>



using namespace std;

//VOY HACER MI PROPIAR FUNCIONA DE EQUALSIGNORECAS ya que c++ no lo tiene 
bool equalsIgnoreCase(const string& uno, const string& dos){

    if (uno.length()  != dos.length())// si la longitud de uno es disitina a la de dos retorna falsa.
    //es asi porque no tiene sentido seguir comparando si una cadena es mss larga que la otra.
    {

        return false;

    }

    //aqui recorremos cada caracter de uno y dos 
    //size_t es un tipo de dato sin signo para indices y tamanios (entonces est evita advertencias del compilador)

    //EJEMPLO DE RECORRIDO
    // i = 0 -> comparar uno[0] con dos[0]
    // i= 1 -> comparar uno[1] dos[1]

    for (size_t i = 0; i < uno.length(); i++)
    {
        
        if (tolower(uno[i]) != tolower(dos[i]))
        {
            
            return false;

        }

    }

    return true;

}


int main(){


    cout<<"Bienvenido a los minijuegos"<<endl;
    int opcion;

    while (opcion!=13)
    {
       
        while (true)
        {
           
        cout<<"\n:::::MENU DE JUEGOS::::"<<endl;
        cout<<"1. Juego piedra, papel o tijera"<<endl;
        cout<<"2. Adivinar el numero"<<endl;
        cout<<"3. Palabra al reves"<<endl;
        cout<<"4. Identificar sumas"<<endl;
        cout<<"5. Piramide"<<endl;
        cout<<"6. Palindromo y vocales"<<endl;
        cout<<"7. Mayor y menor ingresados"<<endl;
        cout<<"8. Piramide exotica"<<endl;
        cout<<"9. Generar Diamante"<<endl;
        cout<<"10. Triangulo de floyd"<<endl;
        cout<<"11. Juego Ahorcado"<<endl;
        cout<<"12. Juego Adivinar numero"<<endl;
        cout<<"13. salir "<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;

        if (cin.fail())
        {
            
            cout<<"ERROR, SELECIONE UNA OPCION VALIDA."<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');


        }else if(opcion<=0){

            cout<<"ENSERIO ELEJISTE EL NUMERO 0?"<<endl;

        }else{

            break;

        }
        

        }

        if (opcion==1)
        {
            
            bool JuggarDeNuevo=true;
            bool EntradaValida=false;
            string respuesta;
            srand(time(0));
            int tu=0, maquina=0;

            while (JuggarDeNuevo)
            {
                
                string Usuario;
                string Herramientas[] = {"Piedra","Papel","Tijeras"};
                string pc = Herramientas[rand()%3];//aqui la computadra elegira entre las 3 opcione aleatoriamente

                cout<<"\nBienvenido al juego de piedra,papel y tijeras"<<endl;
                cout<<"Ingrese el nombre de la herramienta que usara: "<<endl;
                cout<<"Piedra?"<<endl;
                cout<<"Papel?"<<endl;
                cout<<"Tijeras?"<<endl;

                while (!EntradaValida)
                {
                    
                    cout<<"Herramienta: ";
                    cin>>Usuario;

                    if (equalsIgnoreCase(Usuario,"Piedra")||equalsIgnoreCase(Usuario,"Papel")||equalsIgnoreCase(Usuario,"Tijeras"))
                    {
                        
                        EntradaValida=true;

                    }else{

                        cout<<"ERROR, ESCOJA LO QUE SE LE PIDE."<<endl;

                    }
                    

                }

                //se muestra lo que eligio
                cout<<"\nTu eleccion: "<<Usuario<<endl;
                cout<<"Eleccion de la PC: "<<pc<<endl;
                

                //aqui se determina quien gano
                if (equalsIgnoreCase(Usuario,pc))
                {

                    cout<<"EMPATE!!!!!!!!"<<endl;

                }else if ((equalsIgnoreCase(Usuario,"Piedra")&&equalsIgnoreCase(pc,"Tijeras"))|| (equalsIgnoreCase(Usuario,"Papel")&&equalsIgnoreCase(pc,"Piedra"))|| (equalsIgnoreCase(Usuario,"Tijeras")&&equalsIgnoreCase(pc,"Papel"))){

                    cout<<"FELICIDADES, GANASTE!!!"<<endl;
                    tu++;
                    
                }else{
                    
                    cout<<"PERDISTE!!!"<<endl;
                    maquina++;

                }
                
                cout<<"\nResultados"<<endl;
                cout<<"Tu: "<<tu<<endl;
                cout<<"Maquina: "<<maquina<<endl;


                cout<<"Quieres jugar de nuevo? (si/no): ";
                cin>>respuesta;

                if (!equalsIgnoreCase(respuesta,"si"))
                {
                    
                    JuggarDeNuevo=false;

                }
                
                EntradaValida=false;

            }
            

        }else if (opcion==2){

            srand(time(0));
            int intentos=10;
            bool acertado =false;
            int NumeroDeUsuario;
            int NumeroAleatorio=(rand() %100)+1;
            bool JugarDeNuevoNumeros=true;
            string respuesta;

            while (JugarDeNuevoNumeros)
            {

             cout<<"\nBienvenido al juego de adivinar numeros, tienes 10 intentos, tienes que adivinar un entre 1 y 100"<<endl;

                for (int contador = 1; contador <= intentos; contador++)
                {
                
                    cout<<"\nIntento "<<contador<<" ingrese un numero, si no ingresa un numero pierde el intento: ";
                    cin>>NumeroDeUsuario;
                
                    if (NumeroDeUsuario==NumeroAleatorio)
                    {
                    
                        cout<<"Felicidades Ganaste!!, el numero era: "<<NumeroAleatorio<<endl;
                        acertado=true;
                        break;

                    }else if(NumeroDeUsuario<NumeroAleatorio){

                        cout<<"El numero que buscas es mayor"<<endl;

                    }else{

                        cout<<"El numero que buscas es menor"<<endl;

                    }
                

                }

                if (!acertado)
                {
                
                    cout<<"\nLastimosamente ya no te quedan mas intentos!!, PERDISTE, el numero era: "<<NumeroAleatorio<<endl;

                }

                cout<<"Quieres jugar de nuevo? (si/no): ";
                cin>>respuesta;
                
                while (cin.fail())
                {
                    
                    cout<<"ERROR: elige entre si o no: "<<endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    cin>>respuesta;

                }
                

                if (!equalsIgnoreCase(respuesta,"si"))
                {
                            
                    JugarDeNuevoNumeros=false;

                }

            
            }            

        }else if(opcion==3){
            
            string cadena;
            int longitud=0;
            bool palindromo=true;

            cout<<"\nBienvenido a la seccion del palindromo"<<endl;
            cout<<"Definicion de un palindromo: Palabra o frase cuyas letras estan dispuestas" 
            <<" de tal manera que resulta la misma leida de izquierda a derecha que de derecha a izquierda"<<endl;

            cout<<"\nIngrese una palabra: "<<endl;
            cin>>cadena;

            longitud=cadena.length();

            for (int  i = 0; i < longitud/2; i++)
            {
                
                if (cadena[i]!=cadena[longitud-1-i])
                {
                    
                    palindromo=false;
                    break;

                }
                

            }

            string reves=cadena;
            reverse(reves.begin(),reves.end());
            
            if (palindromo)
            {
                
                cout<<"El texto es un palindromo"<<endl;
                cout<<"La cadena invertida es: "<<reves<<endl;

            }else{

                cout<<"El texto no es un palindromo"<<endl;
                cout<<"La cadena invertida es: "<<reves<<endl;

            }
            

        }else if(opcion==4){

            int numero=0;
            string entrada;
            int suma=0;
            string dSuma;
            bool PrimerDigito=true;


            cout<<"Bienvenido a la seccion de identificar cifras"<<endl;
            cout<<"Ingrese varios numeros a sumar: ";
            cin>>entrada;

            numero=stoi(entrada);
            
            while (numero>0)
            {
                
                int digito=numero%10;
                suma+=digito;
                numero/=10;

                if (PrimerDigito)
                {
                    
                    dSuma +=to_string(digito);
                    PrimerDigito = false;
         

                }else{

                    dSuma=to_string(digito)+ " + "+dSuma;

                }

                
            }
            cout<<"La suma de los digitos: "<<dSuma<<" = "<<suma<<endl;
            



        }else if(opcion==5){

            int numero;

            cout<<"\n**Bienvenido al ejercicio de suma**"<<endl;
            cout<<"Ingrese un numero para construir la piramide: "<<endl;
            cin>>numero;

            for (int contador = 1; contador <=numero ; contador++)
            {
                
                for (int contador2 = 1; contador2 < contador; contador2++)
                {
                    
                    cout<<"  ";

                }
                for (int contador3 = contador; contador3 <=numero ; contador3++)
                {
                    
                    cout<<contador3<<" ";

                }

                for (int contador4 = numero-1; contador4 >= contador; contador4--)
                {
                    
                    cout<<contador4<<" ";

                }
                cout<<endl;
                

            }
            


        }else if(opcion==6){

            string palabra;

            cout<<"Ingrese una palabra: ";
            getline(cin,palabra);

            int longitud= palabra.length();
            bool palindromo=true;

            for (int i = 0; i < longitud/2; i++)
            {
                
                if (palabra[i]!=palabra[longitud-1-i])
                {
                    
                    palindromo=false;
                    break;

                }
                

            }

            if (palindromo)
            {
                
                cout<<"La palabra ingresada es un palindromo"<<endl;

                int cantidadVocales=0;
                int CantidadA=0,CantidadE=0,CantidadI=0,CantidadO=0,CantidaU=0;


                for (int i = 0; i < longitud; i++)
                {
                    
                    char letra=tolower(palabra[i]);
                    if (letra=='a' || letra=='e'||letra=='i'||letra=='o'||letra=='u')
                    {
                        
                        cantidadVocales++;

                    }

                    if (letra=='a')
                    {
                        
                        CantidadA++;

                    }
                    else if (letra=='e')
                    {
                        /* code */
                    }
                    else
                    {
                        /* code */
                    }
                    
                    

                }
                
                

            }
            
            


        }else if(opcion==7){



        }else if(opcion==8){



        }else if(opcion==9){



        }else if(opcion==10){



        }else if(opcion==11){



        }else if(opcion==12){



        }else if(opcion==13){



        }else{

            cout<<"ERRORRRRRR"<<endl;

        }
        


        


    }
    

    return 0;
}