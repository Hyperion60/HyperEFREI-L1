#include <stdio.h>

void Ecriture(int tableau[], int taille);
void Lecture(int tableau[], int taille);
void Histogramme(int tableau[], int taille, int histogramme[]);

int main()
{
    int taille;
    int histogramme[21];

    printf("Combien de notes allez-vous rentrer ? :\n");
    scanf("%d", &taille);

    int tableau[taille];

    printf("Ecriture du tableau de note:\n");
    Ecriture(tableau, taille);

    Histogramme(tableau, taille, histogramme);

    return 0;
}

void Histogramme(int tableau[], int taille, int histogramme[])
{
    int i, tiret;

    // On remplit notre tableau de zéros (on n'a pas encore de note)
    for (i = 0; i < 21; i++){
         histogramme[i] = 0;
    }

    // Chaque fois qu'on a une note, on incrémente l'histogramme
    for (i = 0; i < taille; i++){
        histogramme[tableau[i]] = histogramme[tableau[i]] + 1;
    }

    // Affichage de l'histogramme final
    for (i = 0; i < 21; i++){
        printf("%d : ", i);
        for (tiret = 0; tiret < histogramme[i]; tiret++) {
            printf("-");
        }
        printf("\n");
    }
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
