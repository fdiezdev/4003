#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Ingrese primer valor: ";
    cin >> a;

    cout << "Ingrese segundo valor: ";
    cin >> b;
 
    cout << endl;

    cout << "¿Es a < b?: " << (a < b) << endl;
    cout << "¿Es a > b?: " << (a > b) << endl;
    cout << "¿Es a = b?: " << (a == b) << endl;
    cout << "¿Es a != b?: " << (a != b) << endl;
    cout << "¿Es a >= b?: " << (a >= b) << endl;
    cout << "¿Es a <= b?: " << (a <= b) << endl;
    cout << "¿El valor a está entre 0 y 10?: " << (a > 0 && a < 10) << endl;


    cout << (5 <= 4 <= 3) << endl;
    cout << (5 <= 4 && 4 <= 3);
}