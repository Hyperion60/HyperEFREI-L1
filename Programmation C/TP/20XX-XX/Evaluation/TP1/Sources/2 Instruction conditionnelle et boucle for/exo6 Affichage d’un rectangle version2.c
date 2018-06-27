#include <stdio.h>


/**
La premiere boucle for compte les lignes et une seconde
qui sur chaque ligne va s'occuper de chaque pixel de la ligne.
Pour le rectangle plein, c'est simple, a chaque pixel, on affiche
 une *.
Pour le rectangle vide, il faut a chaque pixel verifier
(avec des if) si on est sur les bords du rectangle ou pas.
Dans le premier cas, on affiche une *, dans le second, un espace
 (si on affiche rien, on n'aura pas un rectangle !)
*/

int main()
{
    int longueur, largeur, i, j ;

    printf("Entrez la longueur et la largeur du rectangle : ");
    scanf("%d %d", &longueur, &largeur);

    /** Rectangle plein */
    for (i = 0; i < longueur; i++)
    {
        for (j = 0; j < largeur; j++)
            printf("*");
        printf("\n");
    }
    printf("\n\n");

    /** Rectangle vide */
    for (i = 0; i < longueur; i++)
    {
        for (j = 0; j < largeur; j++)
        {
            if( (i == 0) || (i == longueur-1) || (j == 0) || (j == largeur-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
