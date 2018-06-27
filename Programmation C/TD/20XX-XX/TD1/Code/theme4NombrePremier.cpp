#include <iostream>

using namespace std;

int main()
{
    int nombre;
    int drapeau = 1; // au départ le nombre est premier
    int i;

    cout << "nombre: ";
    cin >> nombre;
    for (i = 2; (i < nombre) && (drapeau == 1); i++)
    {
        if ((nombre%i) == 0)
        {
            cout << "divisible par " << i << endl;
            drapeau = 0;
        }

    }

    if (drapeau == 1)
        cout << nombre << " est premier." << endl;
    else
        cout << nombre << " n'est pas premier." << endl;


    return 0;
}


