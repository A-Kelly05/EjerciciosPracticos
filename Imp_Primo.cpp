#include <iostream>

using namespace std;

int main()
{
    int Num=1, primo=0,limite;
    cout<<"Se imprimiran los primeros 100 numeros primos\n";
    system("pause");
        for (limite = 0; limite < 100; limite++)
        {
            for (int i = 1; i <= Num; i++)
            {
            if(Num % i == 0)
            {
            primo++;
            }
            }
            if (primo == 2)
            {
            cout <<Num<< endl;
            }
            primo=0;
            Num++;
        }
    }
    
        
        
    
    
