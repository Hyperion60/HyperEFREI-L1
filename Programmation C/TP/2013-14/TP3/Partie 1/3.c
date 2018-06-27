#include <stdio.h>

void Ecriture(int tableau[], int taille);
void Lecture(int tableau[], int taille);
void Somme(int A[], int B[], int C[], int taille);

int main()
{
    int taille;

    printf("Saisissez la dimension du tableau:\n");
    scanf("%d", &taille);

    // Maintenant qu'on a la taille, on initialise le tableau dynamiquement
    int A[taille];
    int B[taille];
    int C[taille];

    printf("Ecriture du tableau A:\n");
    Ecriture(A, taille);

    printf("Ecriture du tableau B:\n");
    Ecriture(B, taille);

    Somme(A, B, C, taille);

    printf("La somme de A et B donne:\n");
    Lecture(C, taille);

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

void Somme(int A[], int B[], int C[], int taille)
{
    int i;

    for (i = 1; i <= taille; i++) {
        C[i-1] = A[i-1] + B[i-1];
    }
}
