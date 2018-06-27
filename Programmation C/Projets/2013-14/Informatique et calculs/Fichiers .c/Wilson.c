#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int compteur; /// Sert à compter le nombre de nombres premiers
    int n; /// Nombre que l'on cherche à tester
    int tabprem [8]; /// Tableau servant à stocker les nombres
    int cpt; /// Sert au calcul de la factorielle
    int num; /// Sert à afficher les N. premiers
    double premier; /// Sert à vérifier si le nombre est premier ou non
    double facto; /// Sert à stocker la factorielle
    double quotient; /// Calcul du quotient
    double reste; /// Calcul du reste
    n = 1;
    compteur = 0;
    num = 0;
    do /// Recherche selon la méthode de Wilson si le nombre est premier ou pas
    {
        facto = n - 1;
        for (cpt = n - 2 ; cpt > 0 ; cpt = cpt - 1) /// Calcul de la factorielle
        {
            facto = facto * cpt;
        }
        quotient = floor((2*facto)/n);  /// Application de la formule
        reste = 2.0*facto - (quotient * n) ;
        premier = 2 + reste;

        if (premier == n) /// Stockage du nombre si il est premier
        {
            tabprem [compteur] = n;
            compteur = compteur + 1;
        }
        n = n + 1;
    }
    while (compteur < 7);

    printf("Les 7 plus petits nombres premiers sont"); /// Affichage des nombres stockés
    printf("\n");
    for (num = 0 ; num < 7 ; num = num +1)
    {
      printf("%d", tabprem [num]);
      printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
