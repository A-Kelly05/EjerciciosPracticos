#include <iostream>

using namespace std;

int main()
{
    float Num;
    cout<<"Dime un numero el que tu desees y yo te dire si es o no positivo\n";
    cout<<"Dime el numero:";
    cin>>Num;
    if (Num>=1)
    {
        cout <<"El # "<<Num<< " es positivo\n";

    }
    else
    {
        if (Num <= -1)
        {
            cout <<"El # "<<Num<< " es negativo\n";
        }
        else
        {
        cout<<"El # es cero asi que no es ni positivo ni negativo\n";  
        }
        
        
    }
   return 0; 
}