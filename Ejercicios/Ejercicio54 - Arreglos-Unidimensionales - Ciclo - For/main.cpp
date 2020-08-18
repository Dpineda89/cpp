#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
  // int indice = 3;
  // numeros [indice]=50;
  // cout << numeros [indice] << endl;
{
 int numeros [5]; 
 
 for (size_t i = 0; i < 5; i++)
 {
    numeros [i]= i;
 }
 
 for (int i = 0; i < 5; i++)
 {
    cout << numeros [i] << endl;
 }
    
    return 0;
}
