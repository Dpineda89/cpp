#include <iostream>

using namespace std;

int a=5;
int b=2;

int main(int argc, char const *argv[])
{
    while (a > b) {
          cout << "Ingrese el valor de a" << endl;
          cin >> a;
    }
    
    cout << endl; 
    cout << "Saliste del ciclo";
    
    return 0;
}
