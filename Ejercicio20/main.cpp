#include <iostream>

using namespace std;

int main() //Miramos si un numero es palindromo o no
{
    int n,a,b=0,c=0;
    cout << "Ingrese el numero a saber si es palindromo: " << endl;
    cin>>n;

    a=n;
    while(a!=0){
        b=a%10; //Miramos cual es el ultimo numero
        a=a/10; //Quitamos el ultimo numero
        c=c*10 + b;// Construimos el nuevo numero a partir del que vamos quitando
    }
    if(n==c) cout<<"Es un numero es palindromo"<<endl;
    else cout<<"El numero no es palindromo"<<endl;


    return 0;
}
