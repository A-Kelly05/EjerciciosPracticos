#include <iostream>
using namespace std;
int main()
{
   int num;
   long double factorial;
   cout << "Bienvenido a calcular factorial\n";
   cout << "Introduce un numero para calcular: ";
   cin >> num;
   factorial=1;
   for(int i=1;i<=num;i++)
   {
    factorial = factorial * i;
   }
   cout << "El factorial de " << num << " es " << factorial << endl;
   return 0;
}