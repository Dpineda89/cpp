#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int arreglo [5] [5];

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            arreglo[i][j] = rand() % 100;
        }
    }
    
    int total = 0;


    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            cout<<"["<<arreglo[i][j]<<"]";
            total = total + arreglo[i][j];
        }
        cout<<endl;
    }

        cout << "Total suma:" << total << endl;

    return 0;
}