#include <iostream>

using namespace std;

int main()
{
    //Esta funcion pide dos numeros y dice cual es el menor

    int a,b;
    cout<<"Ingrese dos numeros: "<<endl;
    cin>>a;
    cin>>b;

    if(a==b){
        cout<<a<<" y "<<b <<" son iguales"<<endl;
        return 0;
    }

    else if(a<b){ //Aqui se mira cual es el menor

        cout<<"El numero menor es: "<<a<<endl;
    }
    else{
        cout<<"El numero menor es: "<<b<<endl;
    }


    return 0;
}
