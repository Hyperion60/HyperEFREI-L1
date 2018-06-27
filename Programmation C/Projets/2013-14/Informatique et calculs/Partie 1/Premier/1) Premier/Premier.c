#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divise; /// Diviseur de 1 à racine de nombre
    int premier; /// Critère de primauté
    int nombre; /// Entier en recherche
    int reste; /// Reste
    int compteur; /// De 1 à 10
    int recens [10]; /// Tableau recensant les nombres premiers
    int num; /// Permet l'affichage du tableau
    nombre = 2;
    num = 0;
    compteur = 0;
    do /// Calcul les 10 plus petits nombres premiers
    {
        premier = 1;
        for (divise = 2 ; divise <= nombre/2 ; divise = divise + 1)
        {
            reste = nombre % (divise);
            if (reste == 0)
            {
                premier = 0;
            }
        }
        if (premier == 1) /// Sauvegarde le nombre si il est premier
        {
                recens [compteur] = nombre;
                compteur = compteur + 1;
        }
    nombre = nombre + 1;
    }
    while (compteur < 10);
    printf("Les 10 plus petits nombres premiers sont");
    printf("\n");
    for (num = 0 ; num < 10 ; num = num +1) /// Affiche les résultats trouvés
    {
      printf("%d", recens [num]);
      printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
