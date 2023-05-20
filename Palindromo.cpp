#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string texto;
    int a = 0, palindromo = 0;
    
    cout << "Ingrese un texto a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int i = texto.length() - 1; i >= 0; i--) {
        if(texto[i] == texto[a]) {
            palindromo++;
        }
        a++;
    }
    
    if(texto.length() == palindromo) {
        cout << "El texto ingresada es palindromo" << endl;
    } else {
        cout << "El texto ingresada no es palindromo" << endl;
    }
    
    return 0;
}