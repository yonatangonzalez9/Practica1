#include <iostream>

using namespace std;

int main()
{
    int cantidad,copia,a,b,c,d,e,f,h,i,j;
    cout << "Ingrese la cantidad: "<< endl;
    cin>> cantidad;

    copia=cantidad;

    a=cantidad / 50000;
    cantidad=cantidad-(a*50000);
    cout<<"50000 : "<<a<<endl;

    b=cantidad/20000;
    cantidad=cantidad-(b*20000);
    cout<<"20000 : "<<b<<endl;

    c=cantidad/10000;
    cantidad=cantidad-(c*10000);
    cout<<"10000 : "<<c<<endl;

    d=cantidad/5000;
    cantidad=cantidad-(d*5000);
    cout<<"5000 : "<<d<<endl;

    e=cantidad/2000;
    cantidad=cantidad-(e*2000);
    cout<<"2000 : "<<e<<endl;

    f=cantidad/1000;
    cantidad=cantidad-(f*1000);
    cout<<"1000 : "<<f<<endl;

    h=cantidad/500;
    cantidad=cantidad-(h*500);
    cout<<"500 : "<<h<<endl;

    i=cantidad/100;
    cantidad=cantidad-(i*100);
    cout<<"100 : "<<i<<endl;

    j=cantidad/50;
    cantidad=cantidad-(j*50);
    cout<<"50 : "<<j<<endl;

    cout<<"Faltante: "<<cantidad<<endl;
    return 0;
}
