#include <iostream>

using namespace std;

int main() //Este programa recibe un numero y lo eleca de 1 a 5 mostrando su resultado
{
    int N,resultado=1;
    cout << "Ingrese un numero: " << endl;
    cin>>N;

    for(int i=1;i<=5;i++){ //Ciclo de 1 a 5 para elevar N
        for(int j=1;j<=i;j++){ // Este ciclo hallara N elevado a i
            if(j==1) resultado=N*j; //Donde si j=1 resultado solo sera N*1
            else resultado=resultado*N; //Si j!=1 resultado sera (N*1)*N
        }
        cout<<N<<" ∧ "<<i<<" = "<<resultado<<endl; //Cada vez que se halle N elevado a i se imprimira

    }



    return 0;
}
