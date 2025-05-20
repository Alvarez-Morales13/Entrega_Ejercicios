#include <iostream>
using namespace std;

int main(){
    int n,i;

    cout << "Ingrese un numero entero: ";
    cin >> n;
    
        for (i = 2; i < n; i+=2)
    {
        cout << "i= " << i << endl;
    }

    return 0;
    
}