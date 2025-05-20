#include <iostream>
using namespace std;

int main(){
    int n,i,modulo;
    int primo = 1;

    cout << "Ingrese un numero entero: ";
    cin >> n;

    for (i = n-1; i >= 2; i--)
    {
        modulo = n % i;
        if (modulo==0){
            cout << "No es primo";
            primo = 0;
        }
        break;
        if (primo == 1){
            cout << "Es primo";
        }
    }
    return 0;
}