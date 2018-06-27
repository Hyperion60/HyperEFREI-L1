#include <iostream>
#include <math.h>
#define TAILLE_MAXIMALE 50
#define CARACTERE_FIN '&'

using namespace std;

int main()
{
    char c;
    char tab[TAILLE_MAXIMALE];
    long tailleUtile = 0;
    long i;

    for (i = 0; (i < TAILLE_MAXIMALE) && (c != CARACTERE_FIN); i++)
    {
        cout << "caractere : "; cin >> c;
        tab[i] = c;
        tailleUtile++;
    }

    if (c == CARACTERE_FIN)
        tailleUtile--;

    for (i = 0; i < tailleUtile; i++)
        cout << tab[i] << ' ';
    cout << endl;

    return 0;
}
