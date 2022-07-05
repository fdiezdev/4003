#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
        a: valor ingresado por el usuario
        |-- x: valor a/10
            |-- b: parte entera de x
            |-- c: parte decimal de x
    */
    int a, b, c;
    float x;

    cout << "Ingrese un valor de dos dígitos: ";
    cin >> a;

    x = a/10.0;
    b = int(x);
    c = round((x-b)*10);
    
    cout << (b + c) << endl;

    return 0;
}