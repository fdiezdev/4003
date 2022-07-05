#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a;  // N° ingresado por el ususario
    int entera, decimal; // Parte entera y decimal
    cout << "Ingrese un numero: ";
    cin >> a;
    
    entera = int(a); // la parte entera es el valor float truncado
    decimal = round((a-entera)*10); // parte decimal

    cout << a << " tiene como parte entera " << entera << " y como parte decimal " << decimal << endl;
    
    return 0;
}