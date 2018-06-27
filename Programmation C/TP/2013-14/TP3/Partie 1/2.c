#include <stdio.h>

void Ecriture(int tableau[], int taille);
int Position(int entierRecherche, int tableau[], int taille);

int main()
{
    int taille, entierRecherche, localisation;

    printf("Saisissez la dimension du tableau:\n");
    scanf("%d", &taille);

    // Maintenant qu'on a la taille, on initialise le tableau dynamiquement
    int tableau[taille];

    printf("Ecriture du tableau:\n");
    Ecriture(tableau, taille);

    printf("Saisissez l'entier a rechercher:\n");
    scanf("%d", &entierRecherche);
    localisation = Position(entierRecherche, tableau, taille);

    if (localisation != -1) {
        printf("%d a ete trouve en position %d sachant que le premier indice est 0", entierRecherche, localisation);
    }
    else {
        printf("%d n'a pas ete trouve", entierRecherche);
    }

    return 0;
}

void Ecriture(int tableau[], int taille)
{
    int i;

    for (i = 1; i <= taille; i++) {
        printf("Entree numero %d :\n", i);
        scanf(" %d", &tableau[i-1]);
    }
}

int Position(int entierRecherche, int tableau[], int taille)
{
    int i;

    for (i = 1; i <= taille; i++) {
        if (tableau[i-1] == entierRecherche) {
            return i-1;
        }
    }

    return -1;
}
