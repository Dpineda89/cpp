#include <iostream>
#include <vector>
#include "producto.h"
using namespace std;

void menu() {
    bool salir = false;
    vector<string> inventario, movimientos;

    while(salir == false) {
        int opcion = 0;

        cout << "MENU PRINCIPAL" << endl;
		cout << "--------------" << endl;
		cout << endl;
		cout << "1 - Registrar producto" << endl;
		cout << "2 - Modificar producto" << endl;
		cout << "3 - Eliminar producto" << endl;
		cout << "4 - Lista de productos " << endl;
		cout << "5 - Generar Entradas " << endl;
		cout << "6 - Generar Salidas " << endl;
		cout << "7 - Ver movimientos " << endl;
		cout << "8 - Salir" << endl;
		
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu y presione enter --> ";
		cin >> opcion;

        switch (opcion)
        {
        case 1:
            inventario = Crear(inventario);
            break;
        case 2: 
            inventario = Modificar(inventario);
            break;
        case 3: 
            inventario = Eliminar(inventario);
            break;
        case 4: 
            Listar(inventario);
            break;
        case 5: 
            {
                vector<vector<string>> listas = Entradas(inventario,movimientos);
                inventario = listas[0];
                movimientos = listas[1];
            }
            break;
        case 6: 
            {
                vector<vector<string>> listas = Salidas(inventario,movimientos);
                inventario = listas[0];
                movimientos = listas[1];
            }
            break;
        case 7:
            Movimientos(movimientos);
            break;
        case 8:
            salir = true;
            break;
        default:
            break;
        }

        system("cls");

    }

}
