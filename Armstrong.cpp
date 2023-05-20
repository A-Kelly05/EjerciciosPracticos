#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int Num, Digito = 0, num, cantidad=0,num1;
    double armstrong;
    cout << "Bienvenido al comprobante si es un numero de armstrong\n";
    cout << "Ingrese un numero entero: ";
    cin >> num;
    num1 = num;
    while(num != 0) {
        Num = num % 10;
        num = num / 10;
        Digito = Digito + Num;
        cantidad=cantidad + 1;
    }
    armstrong = pow(Digito,cantidad);
    if (armstrong == num1)
    {
        cout<<num1<<" es un numero de armstrong";
    }
    else
    {
       cout<<num1<<" no es un numero de armstrong";   
    }
    return 0;
}