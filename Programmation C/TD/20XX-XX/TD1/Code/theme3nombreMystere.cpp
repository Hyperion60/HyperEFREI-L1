#include <iostream>
#include <stdlib.h>     // srand, rand
#include <time.h>       // time

using namespace std;

int main()
{
    int mystere, nombre = -1;

    srand(time(NULL));
    mystere = rand() % 10000;
    cout << "Recherche d'un nombre mystere entre 0 et 10 000" << endl;

    do
    {
        cout << "nombre: ";
        cin >> nombre;
        if(nombre < mystere)
            cout << "Trop petit" << endl;
        if(nombre > mystere)
            cout << "Trop grand" << endl;
    }
    while(nombre != mystere);

    cout << "Bravo, vous avez trouve le nombre mystere " << mystere << endl;

    return 0;
}

