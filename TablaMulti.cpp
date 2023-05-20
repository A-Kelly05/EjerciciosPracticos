#include <iostream>
using namespace std;
int main()
{
    int num,operacion;
    cout<<"Bienvenido a la tabla de multiplicar, dame un numero y yo te dare su tabla de multiplicar\n";
    cout<<"Digite un numero: ";
    cin>>num;
    cout<<"\n";
    for (int i = 0; i <= 12; i++)
    {
        operacion=i*num;
        cout<<"******************\n";
        cout<<"* "<<num<<" x "<<i<<" * = * "<<operacion<<" * \n";
        cout<<"******************\n";
        cout<<"\n";
    }
    return 0;  
}