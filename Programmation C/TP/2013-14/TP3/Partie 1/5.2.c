#include <stdio.h>
#include <ctype.h>

int EstPremier(int nombre);
void Lecture(int tableau[], int nombrePremiers);
void EstPremierEfficace(int tableauPremiers[], int nombrePremiers);

int main()
{
    //int retour = EstPremier(88);

    int nombrePremiers, i, retour, compteurPremiers;

    printf("Combien de nombres entiers voulez-vous afficher? \n");
    scanf("%d", &nombrePremiers);

    int tableauPremiers[nombrePremiers];

    EstPremierEfficace(tableauPremiers, nombrePremiers);

    Lecture(tableauPremiers, nombrePremiers);

    return;
}

void Lecture(int tableau[], int nombrePremiers)
{
    int i;

    for (i = 1; i <= nombrePremiers; i++){
        printf("%d ", tableau[i-1]);
    }
}

void EstPremierEfficace(int tableauPremiers[], int nombrePremiers)
{
    int i, j, nonPremier;
    int compteurPremiers = 0;

    for (i = 2; compteurPremiers < nombrePremiers; i++) {

        // On assume que tous les nombres sont premiers
        nonPremier = 0;

        for (j = 2; j < i; j++) {
            if(i % j == 0) {
                // Le nombre n'est pas premier
                nonPremier = 1;
            }
        }

        // Si on n'est pas passé dans la condition de la boucle, alors on a à faire à un nombre premier
        if (nonPremier == 0) {
            tableauPremiers[compteurPremiers] = i;
            compteurPremiers++;
        }
    }
}

