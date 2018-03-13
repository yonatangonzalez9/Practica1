#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero: " << endl;
    cin>>n;

    for(int i=1;i<=n;i++){ //Ciclo para hacer las columnas, hasta el valor ingresado n

        for(int j=1;j<=n;j++){ //Ciclo para hacer las columnas, hasta el valor ingresado n
            if(i==1) cout<<"+"; //Si es la primera fila la llena del simbolo +
            if(i==n) cout<<"+"; // Si es la ultima fila la llena del simbolo +
            else if(i!=1 && j==1) cout<<"+"; // Si es el primer elemento de una fila diferente a la primera y la ultima solo imprime el primer +
            else if(i!=1 && j!=n) cout<<" ";// Si son los elementos del medio solo pone un espacio
            else if(i!=1 && j==n) cout<<"+";// Si es el ultimo elemento de una fila diferente a la primera y ultima solo imprime +

        }
        cout<<endl; //Bajar de fila
    }



    return 0;
}
