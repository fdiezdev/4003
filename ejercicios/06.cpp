#include <iostream>
#include <iomanip>
using namespace std;

// ! No se si el LEV lo tomara como bien

int main()
{
    float a;

    cout << "Ingrese un valor con dos decimales: " << setw(7);
    cin >> a;

    cout << fixed << setprecision(2) << a << endl;

    return 0;

}