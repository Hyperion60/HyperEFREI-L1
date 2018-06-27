#include <iostream>
#define TAILLE_MAXIMALE1 5
#define TAILLE_MAXIMALE2 7

using namespace std;

int main()
{
    long tab1[TAILLE_MAXIMALE1];
    long tab2[TAILLE_MAXIMALE2];
    long tab3[TAILLE_MAXIMALE1 + TAILLE_MAXIMALE2];
    long tailleUtile1 = 0;
    long tailleUtile2 = 0;
    long tailleUtile3 = 0;
    long i, j, k;

    cout << "Saisie des " << TAILLE_MAXIMALE1 << " valeurs du premier tableau par ordre croissant : " << endl;
    for (i = 0; i < TAILLE_MAXIMALE1; i++)
    {
        cout << "entier : ";
        cin >> tab1[i];
        tailleUtile1++;
    }

    cout << "Saisie des " << TAILLE_MAXIMALE2 << " valeurs  du second tableau par ordre croissant : " << endl;
    for (i = 0; i < TAILLE_MAXIMALE2; i++)
    {
        cout << "entier : ";
        cin >> tab2[i];
        tailleUtile2++;
    }

    cout << "Tableau1 : ";
    for (i = 0; i < tailleUtile1; i++)
        cout << tab1[i] << ' ';
    cout << endl;

    cout << "Tableau2 : ";
    for (i = 0; i < tailleUtile2; i++)
        cout << tab2[i] << ' ';
    cout << endl;

    i = j = k = 0;
    // tant qu'il y a des éléments dans les 2 tableaux
    while (i < tailleUtile1 && j < tailleUtile2)
    {
        if (tab1[i] <= tab2[j])
        {
            tab3[k] = tab1[i];
            i++;
            k++;
        }
        else // tab2[j] < tab1[i]
        {
            tab3[k] = tab2[j];
            j++;
            k++;
        }
    }
    // tant qu'il y a encore des éléments dans le premier tableau
    while (i < tailleUtile1)
    {
        tab3[k] = tab1[i];
        i++;
        k++;
    }
    // tant qu'il y a encore des éléments dans le second tableau
    while (j < tailleUtile2)
    {
        tab3[k] = tab2[j];
        j++;
        k++;
    }
    tailleUtile3 = k;

    cout << "Tableau3 : ";
    for (i = 0; i < tailleUtile3; i++)
        cout << tab3[i] << ' ';
    cout << endl;
    return 0;
}
