#include <iostream>

using namespace std;

int main()
{
    int n,suma=0,contador=0,promedio=0;

    while(true){ //while(true) para que me pida hasta que yo le diga basta

        cout << "Ingrese un numero" << endl; //Empieza a pedir numeros
        cin>>n;
        if(n!=0){ //Si n!=0 vamos sumando todos los numeros ingresados y vamos contando cuantos van
            suma=suma+n;
            contador+=1;
        }
        else if(n==0){ // Si n=0 sacamos el promedio, que seria la suma sobre el contador, y rompemos el ciclo
            promedio=suma/contador;
            break;
        }


    }
    cout<<"El promedio es: "<<promedio<<endl;






    return 0;
}
