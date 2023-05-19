#include <iostream>

using namespace std;

int main()
{
    int Num,a;
    cout << "Determina si un numero es perfecto o no\n";
    cout<<"Ingresa un numero: ";
    cin>>Num;
    if (Num % 2 ==0)
    {
        for (int i = (Num/2); i >= 1; i--)
        {
            if (Num%i==0)
            {
                a = a + i;
            }
            
        }
        
    }
    if (a==Num)
    {
        cout<<Num<<" es un numero perfecto\n";
    }
    else
    {
        cout<<Num<<" no es un numero perfecto\n";
    }
    return 0;
}