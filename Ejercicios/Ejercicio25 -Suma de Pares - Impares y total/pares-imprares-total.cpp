#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impar = 0;
    int total = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0){
            pares = pares + i;
        } else {
            impar = impar + i;
        }
        
        cout << i << " ";
    }
    total = pares + impar;

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares << endl;
    cout << "Total impares: " << impar << endl;
    cout << "Total: " << total << endl;
        
    return 0;
}
