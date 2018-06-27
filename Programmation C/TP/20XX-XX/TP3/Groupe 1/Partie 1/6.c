#include<stdio.h>

void LectureEratosthene(int tableau[], int nombrePremiers);
void cribleEratosthene(int tableauPremiers[], int nombrePremiers);

int main()
{
    int nombrePremiers;

    printf("Afficher les nombres entiers inferieurs a: \n");
    scanf("%d", &nombrePremiers);

    int tableauPremiers[nombrePremiers];

    cribleEratosthene(tableauPremiers, nombrePremiers);
    LectureEratosthene(tableauPremiers, nombrePremiers);

    return 0;
}

void LectureEratosthene(int tableau[], int nombrePremiers)
{
    int i;

    for (i = 1; i <= nombrePremiers; i++){
        if (tableau[i-1] == 1) {
            printf("%d ", i-1);
        }
    }
}

void cribleEratosthene(int tableauPremiers[], int nombrePremiers)
{
    int i, j;

    // On initialise le tableau à 1 sur l'intégralité des entrées
    for (i = 0; i < nombrePremiers; i++) {
        tableauPremiers[i] = 1;
    }

    // 0 et 1 ne sont pas premiers, on les initialise manuellement...
    tableauPremiers[0] = tableauPremiers[1] = 0;

    // Pour démarrer la boucle à 2
    for (i = 2; i < sqrt(nombrePremiers); i++) {
        if (tableauPremiers[i] == 1) {
            for (j = i+i; j < nombrePremiers; j = j+i) {
                tableauPremiers[j] = 0;
            }
        }
    }
}
