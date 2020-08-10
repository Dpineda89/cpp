#include <iostream>

using namespace std;

double subtotal;
double impuesto;
double total;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    total = subtotal + impuesto;
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos:"  "               " << "Precio:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << "L." << (subtotal);
    cout << endl;

    cout << endl;
    cout << "Impuesto 15%: " << "L." << (impuesto);
    cout << endl;

    cout << endl;
    cout << "Total a pagar: " << "L." << (total) << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    cout << "*****";
    cout << "Gracias por su compra";
    cout << "*****" << endl;
    cout << endl;
    system("pause");
}