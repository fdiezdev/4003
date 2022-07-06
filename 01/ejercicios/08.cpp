#include <iostream>

using namespace std;

/*
    ! La consigna esta media confusa, pero el resultado da como el ejemplo de ejecución
*/

int main()
{
    
    bool a, b;

    cout << "Ingrese booleano 1: ";
    cin >> a;

    cout << "Ingrese booleano 2: ";
    cin >> b;
    
    cout << "El resultado de operar las variables booleanas es: " << ( (!( a && b )) && !( a || b ) ) << endl;

    return 0;
}