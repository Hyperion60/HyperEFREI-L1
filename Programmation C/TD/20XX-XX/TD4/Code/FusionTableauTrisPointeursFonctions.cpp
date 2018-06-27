#include <iostream>
#define TAILLE_MAXIMALE1 5
#define TAILLE_MAXIMALE2 7

using namespace std;

void saisirCroissant(long * tab, long tailleMaximale, long * tailleUtile);
void afficher(long * tab, long tailleUtile);
void fusionTriee(long * tab1, long tailleUtile1, long * tab2, long tailleUtile2, long * tab3, long * tailleUtile3);

int main()
{
    long tab1[TAILLE_MAXIMALE1];
    long tab2[TAILLE_MAXIMALE2];
    long tab3[TAILLE_MAXIMALE1 + TAILLE_MAXIMALE2];
    long tailleUtile1 = 0;
    long tailleUtile2 = 0;
    long tailleUtile3 = 0;

    cout << "Saisie des " << TAILLE_MAXIMALE1 << " valeurs du premier tableau par ordre croissant : " << endl;
    saisirCroissant(tab1, TAILLE_MAXIMALE1, &tailleUtile1);
    cout << "Saisie des " << TAILLE_MAXIMALE2 << " valeurs du second tableau par ordre croissant : " << endl;
    saisirCroissant(tab2, TAILLE_MAXIMALE2, &tailleUtile2);
    afficher(tab1, tailleUtile1);
    afficher(tab2, tailleUtile2);

    cout << "Tableau1 : ";
    afficher(tab1, tailleUtile1);
    cout << "Tableau2 : ";
    afficher(tab2, tailleUtile2);

    fusionTriee(tab1, tailleUtile1, tab2, tailleUtile2, tab3, &tailleUtile3);

    cout << "Tableau3 : " << endl;
    afficher(tab3, tailleUtile3);
    return 0;
}

void saisirCroissant(long * tab, long tailleMaximale, long * tailleUtile)
{
    long * ptr = NULL;
    for (ptr = tab; ptr < tab + tailleMaximale; ptr++)
    {
        cout << "entier : ";
        cin >> *ptr;
        (*tailleUtile)++;
    }
}

void afficher(long * tab, long tailleUtile)
{
    long * ptr = NULL;
    for (ptr = tab; ptr < tab + tailleUtile; ptr++)
        cout << *ptr << ' ';
    cout << endl;
}

void fusionTriee(long * tab1, long tailleUtile1, long * tab2, long tailleUtile2, long * tab3, long * tailleUtile3)
{
    long * ptr1 = tab1;
    long * ptr2 = tab2;
    long * ptr3 = tab3;
    // tant qu'il y a des éléments dans les 2 tableaux
    while ((ptr1 < tab1 + tailleUtile1) && (ptr2 < tab2 + tailleUtile2))
    {
        if (*ptr1 <= *ptr2)
        {
            *ptr3 = *ptr1;
            ptr1++;
            ptr3++;
        }
        else // *ptr1 > *ptr2
        {
            *ptr3 = *ptr2;
            ptr2++;
            ptr3++;
        }
        (*tailleUtile3)++;
    }
    // tant qu'il y a encore des éléments dans le premier tableau
    while (ptr1 < tab1 + tailleUtile1)
    {
        *ptr3 = *ptr1;
        ptr1++;
        ptr3++;
        (*tailleUtile3)++;
    }
    // tant qu'il y a encore des éléments dans le second tableau
    while (ptr2 < tab2 + tailleUtile2)
    {
        *ptr3 = *ptr2;
        ptr2++;
        ptr3++;
        (*tailleUtile3)++;
    }
}
