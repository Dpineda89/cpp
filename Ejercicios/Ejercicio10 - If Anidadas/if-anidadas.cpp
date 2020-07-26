#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1000;
    int b = 5000;
    int c = 7000;

    /*cout << "Ingrese a: ";
    cin >> a;
    cout << endl;
    
    cout << "Ingrese b: ";
    cin >> b;
    cout << endl;

    cout << "Ingrese c: ";
    cin >> c;
    cout << endl;*/

    if (a > b) 
    {
        if (a > c)
        {
            cout << "A es el mayor";
        } else
        {
            cout << "C es el mayor";
        }
    } else
        {
        if (b > c)
        {
            cout << "B es el mayor";
        }else
        {
            cout << "C es el mayor";
        }     
    }        
    return 0;
}
