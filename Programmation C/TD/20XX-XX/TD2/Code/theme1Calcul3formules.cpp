#include <iostream>
#include <iomanip> // les manipulateurs du C++ cf fixed et setprecision
#include <math.h>

#define TAILLE_MAXIMALE 10

using namespace std;

int main()
{
    long tab[TAILLE_MAXIMALE];
    long tailleUtile = 0;
    long i;

    do
    {
          cout << "Nombre de valeurs dans [2, " << TAILLE_MAXIMALE << "] : ";
          cin >> tailleUtile;
    } while ((tailleUtile < 2) || tailleUtile > TAILLE_MAXIMALE);

    for (i = 0; i < tailleUtile; i++)
    {
        cout << "entier : "; cin >> tab[i];
    }

    cout << "Tableau : ";
    for (i = 0; i < tailleUtile; i++)
        cout << tab[i] << ' ';
    cout << endl;

    cout << fixed << setprecision(2);

    if (tailleUtile == 4)
    {
         double moyenneGeometrique = 1;
         for (i = 0; i < tailleUtile; i++)
            moyenneGeometrique *= tab[i];
        moyenneGeometrique = pow(moyenneGeometrique, 0.25);
        cout << "La moyenne geometrique est : " << moyenneGeometrique << endl;
    }
    else if (tailleUtile == 2)
    {
        double moyenneHarmonique;
        moyenneHarmonique = (2.0 * tab[0] * tab[1]) / (tab[0] + tab[1]);
        cout << "La moyenne harmonique est : " << moyenneHarmonique << endl;
    }
    else if (tailleUtile >= 3)
    {
           double sommeValeursAbsolues = 0;
         for (i = 0; i < tailleUtile; i++)
            sommeValeursAbsolues += fabs(tab[i]);
        cout << "La somme des valeurs absolues est : " << sommeValeursAbsolues << endl;
    }

    return 0;
}
