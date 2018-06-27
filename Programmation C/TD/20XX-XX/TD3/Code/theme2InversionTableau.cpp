#include <iostream>
#define TAILLE_UTILE 9

using namespace std;

#define NMax 10


int main()
{
    long a[TAILLE_UTILE] = {12, 23, 34, 45, 56, 67, 78, 89, 90};

    long i;
    cout << "Valeurs des éléments du tableau" << endl;
    for (i = 0; i < 9; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;

    /** VERSION FACILE avec des indices i et j
        long j, tmp;

        for(i = 0, j = TAILLE_UTILE - 1; i < TAILLE_UTILE/2; i++, j--)
        {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    */

// VERSION avec des pointeurs pDebut et pFin
    long * pDebut, *pFin;
    long tmp;

    for(pDebut = a, pFin = a + TAILLE_UTILE - 1; pDebut < pFin; pDebut++, pFin--)
    {
        tmp     = *pDebut;
        *pDebut = *pFin;
        *pFin   = tmp;
    }

    cout << "Valeurs des éléments du tableau inversé" << endl;
    for (i = 0; i < 9; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}





