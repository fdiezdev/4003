#include <iostream>

using namespace std;

int main()
{
    int m1, m2, d;

    cout << "m1: ";
    cin >> m1;

    cout << "m2: ";
    cin >> m2;

    cout << "d: ";
    cin >> d;

    cout << (m1 > (m2+d)) << endl;
}