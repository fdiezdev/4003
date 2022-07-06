#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
        a: el valor entero que mete el usuario
        b: el valor a dividido por 10 y truncado
        c: el valor entero por 10 del segundo valor
        x: valor flotante dividido por 10
        y: valor flotante restado al entero b
    */
    int a, b, c;
    float x, y;

    cout << "Ingrese valor: ";
    cin >> a;

    x = a / 10.0;
    b = int(x);
    y = x - float(b);
    c = y * 10.0;

    cout << "El numero inverso es: " << c << b << endl;
    return 0;
}