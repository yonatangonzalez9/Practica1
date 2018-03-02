#include <iostream>

using namespace std;

int main()
{
    int cantidad,a; //Declaracion de variables
    cout << "Ingrese la cantidad: "<< endl;
    cin>> cantidad;

    a=cantidad / 50000;        //Se mira cuantas veces 50000 está en la cantidad ingresada
    cantidad=cantidad-(a*50000); //Se genera la nueva cantidad sin restando cuantas veces está 50000
    cout<<"50000 : "<<a<<endl;  //Se imprime cuantas veces esta 50000

    a=cantidad/20000;           //En este cuadro se hace el mismo procedimiento que en el anterior, y asi en todos.
    cantidad=cantidad-(a*20000);
    cout<<"20000 : "<<a<<endl;

    a=cantidad/10000;
    cantidad=cantidad-(a*10000);
    cout<<"10000 : "<<a<<endl;

    a=cantidad/5000;
    cantidad=cantidad-(a*5000);
    cout<<"5000 : "<<a<<endl;

    a=cantidad/2000;
    cantidad=cantidad-(a*2000);
    cout<<"2000 : "<<a<<endl;

    a=cantidad/1000;
    cantidad=cantidad-(a*1000);
    cout<<"1000 : "<<a<<endl;

    a=cantidad/500;
    cantidad=cantidad-(a*500);
    cout<<"500 : "<<a<<endl;

    a=cantidad/200;
    cantidad=cantidad-(a*200);
    cout<<"200 : "<<a<<endl;

    a=cantidad/100;
    cantidad=cantidad-(a*100);
    cout<<"100 : "<<a<<endl;

    a=cantidad/50;
    cantidad=cantidad-(a*50);
    cout<<"50 : "<<a<<endl;

    cout<<"Faltante: "<<cantidad<<endl; //Se imprime lo que queda de la cantidad
    return 0;
}
