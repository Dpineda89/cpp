#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
    int nota = 0;

    cout << "Ingrese la nota que obtuvo ";
    cin >> nota;
    
    if (nota >= 95 && nota <= 100) {
        cout << "Obtubiste un A";
    } else{
        if (nota >= 85 && nota <= 94) {
            cout << "Obtubiste un B";
        } else {
            if (nota >= 75 && nota <= 94) {
            cout << "Obtubiste un C";
            } else {
                if (nota >= 65 && nota <= 74) {
                    cout << "Obtubiste un D";
                } else {
                    if (nota >= 60 && nota <= 64) {
                        cout << "Obtubiste un E";
                    } else {
                        if (nota >= 0 && nota < 60) {
                            cout << "Obtubiste un F";
                        } else
                        {
                            cout << "Ingrese una nota entre 0 - 100";
                        }
                        
                    }
                }
            }
        }
    }
    
    return 0;
}
