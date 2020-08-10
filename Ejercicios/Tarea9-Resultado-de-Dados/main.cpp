#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int dados()
{
    int numero = 0;
    srand(time(NULL));

    numero = rand() % 5 + 1;
    cout << "Resultado del primer dado es: " << numero << endl;
    cout << endl;
    numero = rand() % 5 + 1;
    cout << "Resultado del segundo dado es: " << numero << endl;
    cout << endl;

    cout << "Gracias por participar a los dados" << endl;
    cout << endl;

    return numero = 0;
}

int main(int argc, char const *argv[])
{  
    cout << endl;
	cout << "Que la suerte este de tu lado" << endl;
    cout << endl;
	dados();

	return 0;
}