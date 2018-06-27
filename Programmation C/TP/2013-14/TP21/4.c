#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreDonne;
    int nombreRecherche = 598;
    int compteurEssais = 1;

    do {
        printf("Essai numero %d/10\n", compteurEssais);
        printf("Entrez votre nombre entre 0 et 1000\n");
        scanf("%d", &nombreDonne);

        // Petit test non nécessaire...
        if (nombreDonne > 1000 || nombreDonne < 0) {
            printf("Vous auriez du rentrer un nombre entre 0 et 1000...");
            exit(0);
        }

        if (nombreDonne > nombreRecherche) {
            printf("Le nombre donne est plus grand que le nombre recherche\n");
        }
        else if (nombreDonne < nombreRecherche) {
            printf("Le nombre donne est plus petit que le nombre recherche\n");
        }

        ++compteurEssais;

    } while (nombreDonne != nombreRecherche && compteurEssais < 11);

    if (nombreDonne == nombreRecherche) {
        printf("Gagne en %d essais\n", compteurEssais-1);
    }
    else {
        printf("Perdu en %d essais\n", compteurEssais-1);
    }

}
