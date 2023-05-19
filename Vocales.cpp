#include <iostream>

using namespace std;

int main()
{
   int vocal1=0,vocal2=0,vocal3=0,vocal4=0,vocal5=0;
    char frase[50];
    cout<< "Ingresa una frase: ";
    gets(frase);
    for (int i = 0; i <= 50; i++){

        switch (frase[i])
        {
        case 'a': case 'A': vocal1++; break;
        case 'e': case 'E': vocal2++; break;
        case 'i': case 'I': vocal3++; break;
        case 'o': case 'O': vocal4++; break;
        case 'u': case 'U': vocal5++; break;      
        default:
        break;
        }

    }vocal3--;/*Solucion a error de suma anterior donde suma 2 en vez de */
    cout<< "La letra a se encuentra: "<<vocal1<< endl;
    cout<< "La letra e se encuentra: "<<vocal2<< endl;
    cout<< "La letra i se encuentra: "<<vocal3<< endl;
    cout<< "La letra o se encuentra: "<<vocal4 << endl;
    cout<< "La letra u se encuentra: "<<vocal5 << endl;

    return 0;
}
