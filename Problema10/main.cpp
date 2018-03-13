#include <iostream>

using namespace std;

int main()
{
    int N,i=1,a =0, contador = 0;
    cout<<"Digite el n-esimo numero primo a saber: "<<endl;
    cin>>N;

    if(N<0){ //Por si ingresan un numero negativo
        cout<<"Error de dato"<<endl;
    }

    else{
        while(a!=N){ //Este ciclo se ejecutara hasta que se cuenten N numeros primos
               contador=0;
               i++; //Ya que el primer numero primo es 2, entonces empieza desde 2
               for(int j=1;j<=i;j++){ //Este for mira cuantos divisores tiene i
                   if(i%j==0) contador +=1; //Cuenta los divisores encontrados
                   }
               if(contador==2){ //Si solo son dos entonces cuenta un numero primo
                   a+=1;
               }

        }
        cout<<"El primo numero "<<N<<" es "<<i<<endl;


    }

    return 0;


}
