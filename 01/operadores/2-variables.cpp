#include <iostream>
using namespace std;

int main()
{
    // Tipos de variables
    int A;
    short B;
    char C;
    bool D;
    long E;

    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
    cout << sizeof(D) << endl;
    cout << sizeof(E) << endl;

    /*
        Expected output:
        4
        2
        1
        1
        8

        Me esta diciendo la cantidad de celdas que ocupa cada dato. 
        Cada celda tiene 8 bits => por ejemplo, int usa 4*8bits = 32bits
    */


    return 0;
}