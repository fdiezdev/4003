#include <iostream>
#include <cmath>

using namespace std;
double pi = M_PI;

int main()
{

    /*
        alfa: angulo ingresado por el usuario
        rad: conversion de alfa a radianes
        sen: valor del seno de rad
    */
    double alfa, rad, sen;

    cout << "Ingrese angulo en grados: ";
    cin >> alfa;

    rad = (alfa * pi)/180.0;
    cout << "El angulo ingresado en radianes es: " << rad << endl;

    // Se supone que el if no entra en esta unidad pero no se me ocurrió como hacerlo sin el if
    if((alfa == 180) || (alfa == 360)) 
    {
        sen = round(sin(rad));
    } else {
        sen = sin(rad);
    }

    cout << "sin(a) = " << sen << endl;

    return 0;

}