#include <iostream>

using namespace std;

int main()
{
    int Num,Suma;
    cout<<"Sumaremos los primeros 100 numeros pares\n";
    system("pause");
    for (int i = 0; i <= 100; i++)
    {
        if (i%2==0)
        {
            Suma=Num+i;
            Num=Suma;
        }
        i++;
    }
    cout<<"La suma de los primeros 100 numeros primos es "<<Suma<<endl;
    return 0;
}