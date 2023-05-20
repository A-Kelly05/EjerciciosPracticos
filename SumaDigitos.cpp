#include <iostream>
using namespace std;
int main() {
    int Num, Digito = 0, num;
    cout << "Bienvenido dime un numero y yo sumare sus digitos\n";
    cout << "Ingrese un numero entero: ";
    cin >> num;
    while(num != 0) {
        Num = num % 10;
        num /= 10;
        Digito = Digito + Num;
    }
    cout << "La suma de los digitos es: " << Digito << endl;
    return 0;
}