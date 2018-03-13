#include <iostream>

using namespace std;

int main() //Se encunetra el numero pi aproximado tantas veces quiera el usuario
{
    int n,a=-1; // n: numero pi a aproximar; a: variable para cambiar de signo
    float suma=0; // suma: variable para ir sumando
    cout << "Ingrese el numero de aproximacion a Pi: " << endl;
    cin>>n;

    for(float i=1;i<=n;i++){ // Ciclo para ir obteniendo el valor a sumar o restar
        suma=suma+(-1*a)*(1/((2*i)-1));
        a=a*(-1); // Cambio de signo

    }
    cout<<"Pi es aproximadamente: "<<4*suma<<endl;// Se imprime la suma multiplicada por 4


    return 0;
}
