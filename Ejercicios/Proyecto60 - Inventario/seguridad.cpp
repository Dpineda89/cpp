#include <iostream>

using namespace std;

bool login () {
    string password = "";
    int intentos = 0;

    while (intentos <= 3) {
        system("cls");

        	cout << "Bienvenido a" << endl;
	
            cout << " _________         __________________           __________           "<<endl;
            cout << "|   ___   |       |   ____    ____   |         |   ____   |          "<<endl;
            cout << "|  |   |__|       |__|    |  |    |__|         |  |    |__|          "<<endl;
            cout << "|  |                      |  |                 |  |                  "<<endl;
            cout << "|  |     __               |  |                 |  |     __            "<<endl;
            cout << "|  |____|  |    __     ___|  |____        __   |  |____|  |     __    "<<endl;
            cout << "|__________|   |__|   |___________|      |__|  |__________|    |__|   "<<endl;
            cout << "" <<endl;
            cout << "Realizado por: " << endl;
            cout << "               Darwin Pienda ----> UNAH-VS" << endl;
            cout << "Catedratico: " << endl;
            cout << "             Ing. Bily Fernandez" << endl;
            
            cout << endl;
            cout << endl;
            cout << endl;

        if (intentos == 3) {
            cout << "Usuario y password incorrectos" << endl;
            cout << "Intente de nuevo o contate a serviocio tecnico" << endl;

            return false;
        }

        cout << "Ingrese su password: ";
        cin >> password;

        if (password == "1234") {
            system("cls");
            return true;
        }

        intentos++;
    }
     
    return false;
}