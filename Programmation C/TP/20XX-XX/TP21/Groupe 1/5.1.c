#include <stdio.h>

void main(void)
{
    int choixUtilisateur;

    do {
        printf("Quel programme voulez vous lancer ? Saisissez le chiffre correspondant.\n");
        printf("1. Tests sur les caracteres\n");
        printf("2. Affichage de caracteres et de leur code ASCII\n");
        printf("3. Arret d'une saisie grace a une valeur\n");
        printf("4. Recherche d'un nombre cache\n");
        printf("5. Arret du programme\n");

        scanf("%d", &choixUtilisateur);

        switch(choixUtilisateur)
        {
            case 1:
                printf("1. Tests sur les caracteres\n");
                break;
            case 2:
                printf("2. Affichage de caracteres et de leur code ASCII\n");
                break;
            case 3:
                printf("3. Arret d'une saisie grace a une valeur\n");
                break;
            case 4:
                printf("4. Recherche d'un nombre cache\n");
                break;
            case 5:
                printf("Arret du programme\n");
                break;
            default :
                printf("Votre selection est incorrecte\n");
                break;
        }
    } while (choixUtilisateur != 5);
}
