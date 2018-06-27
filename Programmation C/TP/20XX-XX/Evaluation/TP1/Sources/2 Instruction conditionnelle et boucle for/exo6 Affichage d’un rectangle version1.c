#include <stdio.h>

int main (void)
{
    int largeur, longueur, i, j;

    /** Choix des variables */
    printf("Entrer la longueur du rectangle : ");
    scanf("%d",&longueur);
    printf("Entrer la largeur du rectangle : ");
    scanf("%d",&largeur);
    printf("\n");

    /** Rectangle plein */
    for (i=1; i<=longueur; i++)
    {
        for(j=1; j<=largeur; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    /** Rectangle vide */
    /** première ligne */
    for(j=1; j<=largeur; j++)
    {
        printf("*");
    }
    printf("\n");

    /** Contenu */
    for (i=1; i<=longueur-2; i++)
    {
        printf("*");
        for (j=1; j<=largeur-2; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    /** dernière ligne */
    for(j=1; j<=largeur; j++)
    {
        printf("*");
    }
    printf("\n\n");

    return 0;
}
