#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double raiz = 0;

    cout << "Ingrese el numero " << endl;
    cin >> numero;

    if (numero >= 0)
    {
        raiz = sqrt(numero);
        cout << "La raiz cuadrada de: " << numero << " " << "es: " << raiz << endl;
    }
    else
    {
        cout << "El numero ingresado no se le puede calcular raiz cuadrada";
    }
    
    return 0;
}
