#include<stdio.h>

void Lecture(int tableau[], int nombrePremiers);
void EstPremierPlusEfficace(int tableauPremiers[], int nombrePremiers);

int main()
{
    int nombrePremiers;

    printf("Combien de nombres entiers voulez-vous afficher? \n");
    scanf("%d", &nombrePremiers);

    int tableauPremiers[nombrePremiers];

    EstPremierPlusEfficace(tableauPremiers, nombrePremiers);
    Lecture(tableauPremiers, nombrePremiers);

    return 0;
}

void Lecture(int tableau[], int nombrePremiers)
{
    int i;

    for (i = 1; i <= nombrePremiers; i++){
        printf("%d ", tableau[i-1]);
    }
}

void EstPremierPlusEfficace(int tableauPremiers[], int nombrePremiers)
{
    // On part de 2 qui est premier
    int i = 2;

    int estPremier, compteurPremiers, k;

    // i et k sont les compteurs des deux boucles

    // Boucle sur le tableau construit dans le main
    for (compteurPremiers = 0; compteurPremiers < nombrePremiers; i++) {
        // On assume que tous les nombres sont premiers
        estPremier = 1;

        for (k = 0; k < compteurPremiers; k++) {
            if(i % tableauPremiers[k] == 0) {
                // Le nombre n'est pas premier
                estPremier = 0;
            }
        }

        if (estPremier == 1) {
            tableauPremiers[compteurPremiers] = i;
            compteurPremiers++;
        }
    }
}
