#include <iostream>

using namespace std;

int main()
{
    int Num=50,Max=50;
    cout<<"Se imprimiran los numeros impares hasta el 50 de forma descendente\n";
    system("pause");
    cout<<"\n";
    for (int i = 0; i <= Max; i++)
    {
        if (Num%2 ==0)
        {
        Num=Num-1;
        }
        else
        {
        cout<<Num<<" es impar\n";
        cout<<"\n";
        Num=Num-1;
        }
        
    }
return 0;
}