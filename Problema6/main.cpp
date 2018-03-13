#include <iostream>

using namespace std;

int main()
{
    int N;
    float suma=0,a=0;
    cout << "Ingrese el numero para aproximar Euler" << endl;
    cin>>N;

    for(int i=1; i<N; i++){  // Se ira de 1 hasta N
        for(int j=1;j<=i;j++){ // Se ira de 1 hasta i, dependiendo de por cual repeticion va, este ciclo es factorial de i
            if(i==1)a=i*j; // Si i es 1, su factorial sera 1
            else a= i*(j-1); // De lo contrario se hace factorial restandole 1 a j
        }
        suma=suma+(1/a); //Y esta es la suma que nos da el problema
    }

    cout<<"Euler es aproximadamente: "<<suma<<endl;



    return 0;
}
