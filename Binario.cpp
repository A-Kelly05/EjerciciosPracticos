#include <iostream>
using namespace std;

int main()
{
    int num[15], binario[15],i;
    cout<<"Bienvenido, Dame un numero y yo te dare su equivalente en binario\n";
    cout<<"Ingresa un numero: ";
    cin >> num[0];

    if (num[0] == 0)
    {
        cout<<num<<" en binario es 0\n";
    }
    else
    {
        if (num[0] == 1)
        {
            cout<<num<<" en binario es 1\n";
        }
        else
        {
            for ( i = 0; num[i] != 1; i++)
            {
                num[i+1] = num[i]/2;
                binario[i] = num[i]%2;
                if(num[i+1] == 1) binario[i+1] =1;
            }
            for (int resp = i; resp >= 0; resp--)
            {
                cout<<binario[resp];
            }
            
            
        }
    }
    
  return 0;
}