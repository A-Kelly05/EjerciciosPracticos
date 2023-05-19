#include <iostream>
using namespace std;

int main()
 {
  int a = 1, b, c=1000,opc=0;
  cout << "Se imprimira la sucession de Fibonacci hasta el 1000 " << endl;
  cout << "Desea imprimirlo? (1=si 2=no)"<< endl;
  cin >> opc;
  if (opc==1)
  {
    for(b=0;b <= c;) 
    {
      cout << "[" << b << "] "<<endl;
      a = a + b;
      b = a - b;
      cout << "\n";
    }
  }else
  cout<<"Okey vuelve pronto";
    
  return 0;
}