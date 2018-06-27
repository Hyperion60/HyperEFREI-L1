#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int longueur, largeur, i, j;

    // On vérifie si les nombres rentrés sont positifs ou négatifs
    do {
        printf("Saisir un entier positif pour la longueur \n");
        scanf("%d", &longueur);
    } while (longueur < 0);

    do {
        printf("Saisir un entier positif pour la largeur \n");
        scanf("%d", &largeur);
    } while (largeur < 0);


    // On affiche le rectangle plein
    printf("Rectangle plein\n");
    for (i=0; i < largeur; i++) {
        for (j=0; j < longueur; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

        // On affiche le rectangle vide
    printf("Rectangle vide\n");
    for (i=0; i < largeur; i++) {
        for (j=0; j < longueur; j++) {
            // On affiche une étoile si on est sur un des bords
            if(i == 0 || i == largeur-1 || j == 0 || j == longueur-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

}
