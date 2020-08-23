#include<vector> 
#include <iostream>
#include <string>

using namespace std;

void abrirArchivo();

vector<string> Crear(vector<string> inventario);
vector<string> Modificar(vector<string> inventario);
vector<string> Eliminar(vector<string> inventario);
void Listar(vector<string> inventario);
bool Existe(vector<string> inventario, string id);
void Print(string linea);
string GetId(string linea);
int GetCantidad(string linea);
string ModificarCantidad(string linea, int quantity);
vector<vector<string>> Entradas(vector<string> inventario,vector<string> movimientos);
vector<vector<string>> Salidas(vector<string> inventario,vector<string> movimientos);
void PrintMovimientos(string linea);
void Movimientos(vector<string> movimientos);