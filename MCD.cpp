#include <iostream>
using namespace std;
int main() {
	int num1, num2, mcd = 1;
	do{
		cout << "Ingresar un numero: "; 
        cin >> num1;
	}while(num1<=1);
	do{
		cout << "Ingresar otro numero "; 
        cin >> num2;
	}while(num2<=1);
    for(int i=1; i <= num1 && i <= num2; i++)
		if(num1 % i==0 && num2 % i==0)
			mcd = i;
	cout << "El MCD de " << num1 << " y " << num2 << " es " << mcd << endl;
    return 0;
}