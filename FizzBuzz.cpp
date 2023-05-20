#include <iostream>

using namespace std;

int main()
{
    int opc=0;
    cout<<"Quieres que escriba los numeros del 1 al 100?\n";
    cout <<" 1 = si, 2 = no\n";
    cout << "Digite la respuesta: ";
    cin >> opc;
    if (opc=1)
    {
       for (int i = 1; i <= 100; i++)
       {
        if (i%3==0 && i%5==0)
        {
            cout<<"FizzBuzz"<<endl;
        }
        else
        {
            if (i%3==0){
              cout<<"Fizz"<<endl;  
            }
            else
            {
                if (i%5==0){
                cout<<"Buzz"<<endl;  
                }
                else
                {
                   cout<< i<<endl; 
                } 
            }
        }
        }
       
    }
    else
    {
        cout<<"Okey, vuelve pronto"<<endl;
    }
   
    
    
    return 0;
}
