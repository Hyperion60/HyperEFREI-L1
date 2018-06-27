#include <iostream>
#include <limits.h>
#define TAILLE_MAXIMALE 30
#define TAILLE_UTILE 13

using namespace std;

int main()
{
     // valeurs à modifier pour vos tests...
    int tab[] = {248, 85, 3, 15, 82, 7, 12, 5, 3, 17, 1, 85, 248};

    long i;
    for (i = 0; i < TAILLE_UTILE; i++)
        cout << tab[i] << ' ';
    cout << endl;

    long premierMax;
    for (i = 0, premierMax = LONG_MIN; i < TAILLE_UTILE; i++)
    {
        if (premierMax < tab[i])
            premierMax= tab[i];
    }
    cout << endl << endl;
    cout << "premier maximum : " << premierMax << endl << endl;

    long secondMax;
    for (i = 0, premierMax = secondMax = LONG_MIN; i < TAILLE_UTILE; i++)
    {
         if (premierMax < tab[i])
        {
            secondMax = premierMax;
            premierMax = tab[i];
        }
        else if (premierMax == tab[i])
                ; // instruction vide RIEN A FAIE DANS CE CCAS
        else if (secondMax < tab[i])
            secondMax = tab[i];
    }
    cout << endl << endl;
    cout << "premier maximum : " << premierMax << endl;
    cout << "second maximum : " << secondMax << endl << endl;

    for (i = 0; i < TAILLE_UTILE; i++)
        cout << tab[i] << ' ';
    cout << endl;

    return 0;
}
