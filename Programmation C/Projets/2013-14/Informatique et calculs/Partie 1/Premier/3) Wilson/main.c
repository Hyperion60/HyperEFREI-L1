#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // POUR CAUSE D'OVERFLOW, ON SE LIMITE A LA RECHERCHE DES 8 PLUS PETITS NOMBRES PREMIERS
    int compteur; // Sert à compter le nombre de nombres premiers
    int n; // Nombre que l'on cherche à tester
    double premier; // Sert à vérifier si le nombre est premier ou non
    int tabprem [10]; // Tableau servant à stocker les nombres
    int cpt; // Sert au calcul de la factorielle
    double facto; // Sert à stocker la factorielle
    int num; // Sert à afficher les N. premiers
    double quotient; // Calcul du quotient
    double reste; // Calcul du reste
    n = 1;
    compteur = 0;
    num = 0;
    do
    {
         facto = n - 1;
         printf("n=%d\n", n);
        for (cpt = n - 2 ; cpt > 0 ; cpt = cpt - 1)
        {
            facto = facto * cpt;
        }
        printf("(n-1)!=%lf\n", facto);
        quotient = floor((2*facto)/n);
        printf("quotient=%lf\n", quotient);
        reste = 2.0*facto - (quotient * n) ;
        printf("reste=%lf\n", reste);
        premier = 2 + reste;

        if (premier == n)
        {
            printf("%d est premier\n", n);
            printf("compteur  = %d\n", compteur);
            tabprem [compteur] = n;
            compteur = compteur + 1;
        }
        n = n + 1;
        system("pause");
    }
    while (compteur < 8);
    printf("Les 10 plus petits nombres premiers sont");
    printf("\n");
    for (num = 0 ; num < 8 ; num = num +1)
    for (num = 0 ; num < 8 ; num = num +1)
    {
      printf("%d", tabprem [num]);
      printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
