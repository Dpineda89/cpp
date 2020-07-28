#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Latte con Crema" << endl;
        cout << endl;

        cout << "Ingrese una opcion" << endl;  
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino              -L. 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("2 Expresso               -L. 30.00", 1, 30);
            break;
        case 3:
            agregarProducto("3 Latte con Crema        -L. 35.00", 1, 35);
            break;    
        default:
            {
                cout << "opcion no valida" << endl;
                system("pause");

                break;
            }
        }

        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system("pause");
        return;
            
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Granita de cafe" << endl;
        cout << "2 - Granita de Fresa" << endl;
        cout << "3 - Granita Tropical" << endl;
        cout << endl;

        cout << "Ingrese una opcion" << endl;  
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Granita de cafe        -L. 45.00", 1, 45);
            break;
        case 2:
            agregarProducto("2 Granita de Fresa       -L. 35.00", 1, 35);
            break;   
        case 3:
            agregarProducto("3 Granita Tropical       -L. 30.00", 1, 30);
            break; 
        default:
            {
                cout << "opcion no valida" << endl;
                system("pause");
                return;
                break;
            }
        }  

        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system("pause");
        
        break;
    }    
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "*************" << endl;
        cout << "1 - Roles de Canela" << endl;
        cout << "2 - Banderilla con Coco" << endl;
        cout << "3 - Bisquet con Miel" << endl;
        cout << endl;

        cout << "Ingrese una opcion" << endl;  
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Roles de Canela        -L. 48.00", 1, 48);
            break;
        case 2:
            agregarProducto("2 Banderilla con Coco    -L. 38.00", 1, 37);
            break;   
        case 3:
            agregarProducto("3 Bisquet con Miel       -L. 36.00", 1, 36);
            break; 
        default:
            {
                cout << "opcion no valida" << endl;
                system("pause");
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system("pause");

        break;
    }    
    default:
        break;
    }
}