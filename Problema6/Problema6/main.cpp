#include <iostream>

using namespace std;

int main()
{
    int N;
    float suma=0,a=0;
    cout << "Ingrese el numero para aproximar Euler" << endl;
    cin>>N;

    for(int i=0;i<=N;i++){
        for(int j=1; j<N;j++){
            a=N*(N-j);

        }
        N-=1;

        suma= suma + (1/a);
    }
    cout<<"Euler es aproximadamente: "<<suma<<endl;



    return 0;
}
