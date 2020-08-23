#include<stdio.h>
#include <chrono>
#include <ctime> 
#include <iostream>
#include <vector>
#include <string>

using namespace std;
string GetId(string linea);
bool Existe(vector < string > inventario, string id);
void Print(string linea);

vector<string> Crear(vector<string > inventario)
{
    string codigo, producto;
    int cantidad;
    double precioCompra,precioVenta;
    cout << "Ingrese codigo"<<endl;
    cin >> codigo;

    if(Existe(inventario,codigo))
    {
        cout<<"Ya existe un producto con ese codigo."<<endl;
        system("pause");
        return inventario;
    }
    cout << "Ingrese producto"<<endl;
    cin >> producto;
    cout << "ingrese cantidad"<<endl;
    cin >> cantidad;
    cout << "Ingrese precio compra"<<endl;
    cin >> precioCompra;
    cout << "Ingrese precio venta"<<endl;
    cin >> precioVenta;
    string escritura = codigo + "|" + producto + "|" + to_string(cantidad) + "|" + to_string(precioCompra) + "|" + to_string(precioVenta) + "\n";
    inventario.push_back(escritura);
    return inventario;
}

bool Existe(vector<string> inventario, string id)
{
    for (std::size_t i = 0; i < inventario.size(); i++) {
        string cadena = inventario[i];
        if (GetId(cadena) == id)
        {
            return true;
        }
    }
    return false;
}

string GetId(string linea)
{
    string id;
    for (int i = 0; i < linea.length(); i++)
    {
        if(linea[i] == '|')
            return id;

        id = id + linea[i];
    }
    return id;
}

vector<string> Modificar(vector<string > inventario)
{
    string id;
    cout << "Ingrese codigo del producto a modificar" << endl;
    cin >> id;
     for (std::size_t i = 0; i < inventario.size(); i++) {
        string cadena = inventario[i];
        if (GetId(cadena) == id)
        {
            cout << "Valores actuales:" << endl;
            Print(cadena);
            
            string codigo, producto;
            int cantidad;
            double precioCompra,precioVenta;
            cout << "Ingrese codigo" << endl;
            cin >> codigo;
            cout << "Ingrese producto" << endl;
            cin >> producto;
            cout << "ingrese cantidad" << endl;
            cin >> cantidad;
            cout << "Ingrese precio compra" << endl;
            cin >> precioCompra;
            cout << "Ingrese precio venta" << endl;
            cin >> precioVenta;
            string escritura = codigo + "|" + producto + "|" + to_string(cantidad) + "|" + to_string(precioCompra) + "|" + to_string(precioVenta) + "\n";
            inventario[i] = escritura;
            return inventario;
        }
    }

    cout << "No se encontro el producto"<<endl;
    system("pause");
    return inventario;
}

vector<string > Eliminar(vector<string> inventario)
{
    string id;
    cout <<"Ingrese codigo del producto a eliminar"<<endl;
    cin >> id;

    for (std::size_t i = 0; i < inventario.size(); i++) {
        string cadena = inventario[i];
        if (GetId(cadena) == id)
        {
    	    inventario.erase(inventario.begin() + i);
            return inventario;
        }
    }
    cout << "No se encontro el producto" << endl;
    return inventario;
}
string ModificarCantidad(string linea, int quantity)
{ 
    string codigo, producto, cantidad, precioCompra, precioVenta;
    int c = 0;

    for (int i = 0; i < linea.length(); i++)
    {
        string caracter;
        caracter = linea[i];

    if (caracter != "|")
    {
        switch (c)
        {
        case 0:
        codigo = codigo + caracter;
            break;
        case 1:
        producto = producto + caracter;
            break;
        case 2:
        cantidad = cantidad + caracter;
            break;
        case 3:
        precioCompra = precioCompra + caracter;
            break;
        case 4:
        precioVenta = precioVenta + caracter;
            break;
        
        default:
            break;
        }
    }
    else
    {
        c = c + 1;
    }
    }
    
    int quantityModified = stoi(cantidad) + quantity;
    string escritura = codigo + "|" + producto + "|" + to_string(quantityModified) + "|" + precioCompra + "|" + precioVenta + "\n";
    return escritura;
}

void Print(string linea)
{    
    string codigo, producto, cantidad, precioCompra, precioVenta;
    int c = 0;

    for (int i = 0; i < linea.length(); i++)
    {
        string caracter;
        caracter = linea[i];

    if (caracter != "|")
    {
        switch (c)
        {
        case 0:
        codigo = codigo + caracter;
            break;
        case 1:
        producto = producto + caracter;
            break;
        case 2:
        cantidad = cantidad + caracter;
            break;
        case 3:
        precioCompra = precioCompra + caracter;
            break;
        case 4:
        precioVenta = precioVenta + caracter;
            break;
        
        default:
            break;
        }
    }
    else
    {
        c = c + 1;
    }
    }
    cout << "Codigo:" << codigo << endl;
    cout << "Producto:" << producto << endl;
    cout << "Cantidad:" << cantidad << endl;
    cout << "Precio de compra:" << precioCompra << endl;
    cout << "Precio de venta:" << precioVenta << endl;
}

void Listar(vector<string> inventario)
{
    for (std::size_t i = 0; i < inventario.size(); i++) {
        string cadena = inventario[i];
        Print(cadena);
    }
    system("pause");
}



void PrintMovimientos(string linea)
{
    string codigo, tipo, cantidad;
    int c = 0;

    for (int i = 0; i < linea.length(); i++)
    {
        string caracter;
        caracter = linea[i];

    if (caracter != "|")
    {
        switch (c)
        {
        case 0:
        codigo = codigo + caracter;
            break;
        case 1:
            tipo = tipo + caracter;
            break;
        case 2:
        cantidad = cantidad + caracter;
            break;
        default:
            break;
        }
    }
    else
    {
        c = c + 1;
    }
    }
    
    cout << "Codigo producto:" << codigo << endl;
    cout << "Tipo de movimiento:" << tipo  << endl;
    cout << "Cantidad:" << cantidad << endl;
    
}

// CodigoProducto|TipoMovimiento|Cantidad

vector<vector<string>> Entradas(vector<string> inventario,vector<string> movimientos)
{
    vector<vector<string>> retornar;
    string id;
    cout << "Ingrese codigo del producto" << endl;
    cin >> id;
     for (std::size_t i = 0; i < inventario.size(); i++) {
        string cadena = inventario[i];
        if (GetId(cadena) == id)
        {
            cout << "Valores actuales:" << endl;
            PrintMovimientos(cadena);
            
            int quantity;
            cout << "ingrese cantidad:" << endl;
            cin>>quantity;
            if (quantity <=0)
            {
                cout<<"La cantidad debe ser mayor a cero"<<endl;
                retornar.push_back(inventario);
                retornar.push_back(movimientos);
                system("pause");
                return retornar;
            }
            string registro = id + "|ENTRADA|" + to_string(quantity);
            movimientos.push_back(registro);

            string updateInventario = ModificarCantidad(inventario[i], quantity);
            inventario[i] = updateInventario;

            retornar.push_back(inventario);
            retornar.push_back(movimientos);
            return retornar;
        }
     }
    
    retornar.push_back(inventario);
    retornar.push_back(movimientos);
    cout<<"No se encontro el producto"<<endl;
    system("pause");
    return retornar;
}


int GetCantidad(string linea)
{
    string cantidad;
    int c = 0;

    for (int i = 0; i < linea.length(); i++)
    {
        string caracter;
        caracter = linea[i];

    if (caracter != "|")
    {
        switch (c)
        {
        case 2:
        cantidad = cantidad + caracter;
            break;
        case 3:
            return stoi(cantidad);
            break;
        default:
            break;
        }
    }
    else
    {
        c = c + 1;
    }
    }

    return stoi(cantidad);
}


vector<vector<string>> Salidas(vector<string> inventario,vector<string> movimientos)
{
    vector<vector<string>> retornar;
    string id;
    cout << "Ingrese codigo del producto" << endl;
    cin >> id;
     for (std::size_t i = 0; i < inventario.size(); i++) {
        string cadena = inventario[i];
        if (GetId(cadena) == id)
        {
            cout << "Valores actuales:" << endl;
            PrintMovimientos(cadena);

            int quantity;
            cout << "ingrese cantidad:" << endl;
            cin>>quantity;
            if (quantity <=0)
            {
                cout<<"La cantidad debe ser mayor a cero"<<endl;
                retornar.push_back(inventario);
                retornar.push_back(movimientos);
                system("pause");
                return retornar;
            }

            int cantidadActual = GetCantidad(inventario[i]);

            if (quantity > cantidadActual)
            {
                cout<<"Las existencias son menores a las que desea retirar"<<endl;
                retornar.push_back(inventario);
                retornar.push_back(movimientos);
                system("pause");
                return retornar;
            }

            string registro = id + "|SALIDA|" + to_string(quantity);
            movimientos.push_back(registro);

            string updateInventario = ModificarCantidad(inventario[i], -quantity);
            inventario[i] = updateInventario;
                    
            retornar.push_back(inventario);
            retornar.push_back(movimientos);
            return retornar;
        }
     }
    
    retornar.push_back(inventario);
    retornar.push_back(movimientos);
    cout<<"No se encontro el producto"<<endl;
    system("pause");
    return retornar;
}

void Movimientos(vector<string> movimientos)
{
     for (std::size_t i = 0; i < movimientos.size(); i++)
    {
        PrintMovimientos(movimientos[i]);
        cout<<endl;
    }
    system("pause");
}