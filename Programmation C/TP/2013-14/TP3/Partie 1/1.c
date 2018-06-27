#include <stdio.h>

void Lecture(int tableau[], int taille);
void Ecriture(int tableau[], int taille);

int main()
{
    int taille;

    printf("Saisissez la dimension du tableau:\n");
    scanf("%d", &taille);

    // Maintenant qu'on a la taille, on initialise le tableau dynamiquement
    int tableau[taille];

    printf("Ecriture du tableau:\n");
    Ecriture(tableau, taille);

    printf("Lecture du tableau:\n");
    Lecture(tableau, taille);

    return 0;
}

void Lecture(int tableau[], int taille)
{
    int i;

    for (i = 1; i <= taille; i++){
        printf("%d\n", tableau[i-1]);
    }
}

void Ecriture(int tableau[], int taille)
{
    int i;

    for (i = 1; i <= taille; i++) {
        printf("Entree numero %d :\n", i);
        scanf(" %d", &tableau[i-1]);
    }
}
