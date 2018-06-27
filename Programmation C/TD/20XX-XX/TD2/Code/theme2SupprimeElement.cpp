#include <iostream>
#include <limits.h>
#define TAILLE_MAXIMALE 30
#define TAILLE_UTILE 12

using namespace std;

int main()
{
    int tab[] = {5, 3, 15, 82, 7, 12, 5, 3, 17, 1, 82, 5};

    long i;
    for (i = 0; i < TAILLE_UTILE; i++)
        cout << tab[i] << ' ';
    cout << endl;

    long x;
    cout << "valeur a supprimer : ";
    cin >> x;

    // SUPPRESSION D'UNE SEULE OCCURENCE
    long drapeau;
    for (i = 0, drapeau = 1; (i < TAILLE_UTILE) && (drapeau != 0); i++)
    {
        if (tab[i] == x)
        {
            tab[i] = LONG_MIN; // on barre la case
            drapeau = 0;
        }
    }

    for (i = 0; i < TAILLE_UTILE; i++)
        cout << tab[i] << ' ';
    cout << endl << endl;

    for (i = 0; i < TAILLE_UTILE; i++)
    {
        if (tab[i] != LONG_MIN)
            cout << tab[i] << ' ';
    }
    cout << endl;

    return 0;
}
