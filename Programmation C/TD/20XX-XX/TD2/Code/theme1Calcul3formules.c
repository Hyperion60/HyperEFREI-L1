#include <iostream>
#include <math.h>
#define TAILLE_MAXIMALE 10


using namespace std;

int main()
{
    long tab[TAILLE_MAXIMALE];
    long tailleUtile = 0;
    long i;

    cout << "Saisie des " << TAILLE_MAXIMALE << " valeurs : " << endl;
    for (i = 0; i < TAILLE_MAXIMALE; i++)
    {
        cout << "entier : "; cin >> tab[i];
        tailleUtile++;
    }

    cout << "Tableau : ";
    for (i = 0; i < tailleUtile; i++)
        cout << tab[i] << ' ';
    cout << endl;

    if (tailleUtile == 4)
    {
         double moyenneGeometrique = 1;
         for (i = 0; i < tailleUtile; i++)
            moyenneGeometrique *= tab[i];
        moyenneGeometrique = pow(moyenneGeometrique, 0.25);
        cout << "La moyenne geometrique est : " << moyenneGeometrique << endl;
    }


    return 0;
}
