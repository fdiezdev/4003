#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Ingrese el valor de x: " << endl;
    cin >> x;

    cout << "Ingrese el valor de y: " << endl;
    cin >> y;

    if (x >= 0 && x <= 4) 
    {
        if (y <= 5 && y >= 0)
        {
            cout << "El punto se encuentra dentro del cuadrado" << endl;
        } else {
            cout << "El punto se encuentra fuera del cuadrado" << endl;
        }
        
    } else {
        cout << "El punto se encuentra fuera del cuadrado" << endl;
    }

    return 0;
}