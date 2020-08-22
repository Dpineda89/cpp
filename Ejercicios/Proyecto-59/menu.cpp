#include <iostream>

using namespace std;

void menu() {
    bool salir = false; 

    while (salir == false) {
        int opcion = 0;

        cout << "MENU PRINCIPAL" << endl;
        cout << "--------------" << endl;
        cout << endl;
        cout << "1 - Rentar Juegos" << endl;
        cout << "2 - Cliente" << endl;
        cout << "3 - Juegos" << endl;
        cout << "4 - Reporte de Rentas" << endl;
        cout << "5 - Salir " << endl;

        cout << endl;
        cout << endl;
        cout << "Ingrese una opcion del menu y presione enter --->" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            //Rentar();
            system("pause");
            break;
        case 5:
            salir = true;
        default:
            break;
        }
        system("cls");
    }
    
}