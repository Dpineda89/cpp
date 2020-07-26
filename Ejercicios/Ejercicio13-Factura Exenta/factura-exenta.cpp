#include <iostream>

using namespace std;
 
int main(int argc, char const *argv[])
{
    // Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculuImpuesto = 0;
    char estaexenta;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout << "Es factura exenta? escriba S o N: ";
    cin >> estaexenta;
    
    // Proceso
    calculoDescuento = (subtotal * descuento) / 100;

    
    if (estaexenta == 's'|| estaexenta == 'S') {
        calculuImpuesto = 0;}
    else {
        if (estaexenta == 'n'|| estaexenta == 'N') {
        calculuImpuesto = (subtotal - calculoDescuento) * 0.15;}
        else {
            cout << "La letra ingresada no es correcta: ";
        }
    }
    cout << endl;
    total = subtotal - calculoDescuento + calculuImpuesto;
    
 // Salida   
 cout << endl;
 cout << "Total a pagar es: " << total;
 return 0;
}
 