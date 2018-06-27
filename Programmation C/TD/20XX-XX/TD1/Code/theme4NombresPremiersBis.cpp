#include <iostream>

using namespace std;

int main()
{
    int nombre, drapeau;
    int i;

    cout << "\t\t\t\t 1 n'est pas premier." << endl;
    for(nombre = 2; nombre < 1000; nombre++)
    {
        drapeau = 1; // au départ le nombre est premier
        for (i = 2; (i < nombre) && (drapeau == 1); i++)
        {
            if ((nombre%i) == 0)
            {
                drapeau = 0;
            }
        }

        if (drapeau == 1)
            cout << "\t\t\t\t" << nombre << " est premier." << endl;
        else
            cout << nombre << " n'est pas premier." << endl;
    }

    return 0;
}



