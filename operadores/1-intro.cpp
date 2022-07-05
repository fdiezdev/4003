#include <iostream>
using namespace std;

int main()
{
    cout << 4 + 9 << endl;
    
    // Si meto un decimal, siempre me va a quedar un decimal en el output
    cout << 4.1 + 9 << endl;

    /*
        * Orden de precedencia
        1. Multiplicación & división
        2. Suma & resta
    */
    cout << 4 * 3 + 2 << endl;
    cout << 4 * ( 3 + 2 ) << endl;

    // Ejercicio del TP 1
    cout << "El promedio de 10., 8. y 7. es: " << (10. + 8. + 7.)/3 << endl;
    
    /* Otro ejercicio del TP 1
        Tengo 2.0 * 3.0 / 12.0 * 8.0 / 4.0 --> ¿Que resultado voy a tener? => 1
      ! SIEMPRE SE EJECUTA DE IZQUIERDA A DERECHA CUANDO TENGO OPERACIONES DEL MISMO NIVEL DE PRECEDENCIA
    */
    cout << 2.0 * 3.0 / 12.0 * 8.0 / 4.0 << endl;

    // cout << 10.0 % 2.4 << endl;
    return 0;
}