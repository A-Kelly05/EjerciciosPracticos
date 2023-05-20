#include <iostream>

using namespace std;

int main()
{
    int opc=0, Max =11;
    cout<<"Quieres que escriba los numeros del 1 al 10?\n";
    cout <<" 1 = si, 2 = no\n";
    cout << "Digite la respuesta: ";
    cin >> opc;
    if (opc=1)
    {
       for (int i = 1; i < 11; i++)
       {
        cout<< i<<endl;
       }
       
    }else
    {
        cout<<"Okey, vuelve pronto"<<endl;
    }
   
    
    
    return 0;
}
