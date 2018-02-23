#include <iostream>

using namespace std;

int main()
{
    int i,N,suma=1;
    cout << "Ingrese un numero: " << endl;
    cin>>N;

    if(N<1){
        cout<<"No es posible"<<endl;

    }
    else{
        for(i=1;i<=N;i++){

            suma= suma*i;



        }

        cout<<"Factorial de "<<N<<" es: "<<suma<<endl;


    }


    return 0;
}
