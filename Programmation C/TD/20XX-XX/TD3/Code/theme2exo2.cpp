#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    long n;
    cout << "taille maximale du tableau : ";
    cin >> n;

    long * p;
    p = new long[n];
    if (p == NULL)
    {
        cout << "Echec de l'allocation dynamique de mémoire" << endl;
        return 0;
    }

    cout << "Saisie des " << n << " valeurs" << endl;
    for (long i = 0; i < n; i++)
    {
        cout << " valeur " << i << ' ';
        cin >> p[i]; // p[i] notation tableau ou *(p + i) notation pointeur
    }

    // Affichage avec un parcours avec un pointeur courant
    for (long * pcourant  = p; pcourant <  p + n; pcourant++)
    {
        cout << *pcourant << ' ';
    }
    cout << endl;

    long x;
    cout << "entier recherché : ";
    cin >> x;
    long drapeau, * pcourant;
    for (drapeau = 0, pcourant  = p; (pcourant <  p + n) && (drapeau == 0); pcourant++)
    {
        if (*pcourant == x)
        {
            drapeau = 1;
        }
    }
    if (drapeau == 1)
    {
        cout << x << " trouvé " << endl;
    }
    else
    {
        cout << x << " non trouvé " << endl;
    }

    cout << "nouvelle valeur à ajouter : ";
    cin >> x;
    // allocation du nouveau tableau
    long * p2;
    p2 = new long[n+1];
    if (p2 == NULL)
    {
        cout << "Echec de l'allocation dynamique de mémoire" << endl;
        return 0;
    }

    // recopie des n valeurs
    long i;
    for (i = 0; i < n; i++)
    {
        p2[i] = p[i]; // *(p2+1) = *(p+i)
    }
    p2[i] = x; // stockage de la nouvelle valeur à la dernière place

    // Affichage avec un parcours avec un pointeur courant
    for (pcourant  = p2; pcourant <  p2 + n + 1; pcourant++)
    {
        cout << *pcourant << ' ';
    }
    cout << endl;

    // libération du premier tableau
    delete p;

    // suppression d'une valeur dans le tableau p2
    cout << "valeur à supprimer : ";
    cin >> x;
    for (i = 0; i < n + 1; i++)
    {
        if (*(p2 + i) == x)
        {
            *(p2 + i) = LONG_MIN; // case marquée
        }
    }

    // allocation du nouveau tableau
    long * p3;
    p3 = new long[n];
    if (p3 == NULL)
    {
        cout << "Echec de l'allocation dynamique de mémoire" << endl;
        return 0;
    }

    // recopie des n valeurs
    long j;
    for (i = j = 0; j < n; i++, j++)
    {
        if (p2[i] == LONG_MIN)
        {
            j--; // pour ne pas être en avance par rapport à i
            continue;
        }
        p3[j] = p2[i]; // *(p3+j) = *(p2+i)
    }

    // Affichage avec un parcours avec un pointeur courant
    for (pcourant = p3; pcourant <  p3 + n; pcourant++)
    {
        cout << *pcourant << ' ';
    }
    cout << endl;

    // libération du tableau
    delete p2;


    return 0;
}





