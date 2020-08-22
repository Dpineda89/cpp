#include <iostream>

using namespace std;

bool login () {
    string password = "";
    int intentos = 0;

    while (intentos <= 3) {
        system("cls");

        if (intentos == 3) {
            cout << "Username or password error" << endl;
            cout << "Intenta de nuevo o contacta a servicio tecnico" << endl;
            cout << endl;

           return false;
        }

        cout << "Ingrese su password" << endl;
        cin >> password;

        if (password == "admin"){
            system("cls");
            return true;
        }

        intentos++;
    }

    return false;
    
}