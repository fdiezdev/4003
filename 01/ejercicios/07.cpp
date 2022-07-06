#include <iostream>

using namespace std;

int main()
{
    /*
        a: límite superior
        b: límite inferior
        |-- x: valor a determinar

        0 => pertenece al intervalo
        1 => no pertenece al intervalo
    */
    int a, b, x;

    cout << "Ingrese límite superior a: ";
    cin >> a;

    cout << "Ingrese limite inferior b: ";
    cin >> b;

    cout << "Ingrese valor a determinar x: ";
    cin >> x;

    cout << "El valor es: " << !(x >= a && x <= b) << " con respecto al intervalo." << endl;
    // Se pone el NOT porque 0 es falso, pero para lo que me piden es verdadero o dentro del intervalo
}