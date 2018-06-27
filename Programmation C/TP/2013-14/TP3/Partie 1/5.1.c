#include <stdio.h>
#include <ctype.h>

int EstPremier(int nombre);
void Lecture(int tableau[], int taille);

int main()
{
    int affichage, i, retour, compteurPremiers;

    printf("Combien de nombres entiers voulez-vous afficher? \n");
    scanf("%d", &affichage);

    int tableauPremiers[affichage];

    i = 0;
    compteurPremiers = 0;

    while (compteurPremiers < affichage) {
        retour = EstPremier(i);

        if (retour == 1) {
            //printf("%d ", i);
            tableauPremiers[compteurPremiers] = i;
            ++compteurPremiers;
        }
        ++i;
    }

    Lecture(tableauPremiers, affichage);

    return;
}

void Lecture(int tableau[], int taille)
{
    int i;

    for (i = 1; i <= taille; i++){
        printf("%d ", tableau[i-1]);
    }
}

int EstPremier(int nombre)
{
    int i;

    // 0 et 1 ne sont pas premiers
    if (nombre == 0 || nombre == 1) {
        return 0;
    }

    // 2 est premier
    if (nombre == 2) {
        return 1;
    }

    // Au dessus de 2, on boucle
    for (i = 2; i < nombre; i++) {
        if (nombre % i == 0) {
            return 0;
        }
    }

    // Si on ne s'est pas arrêté dans la boucle, alors le nombre est premier
    return 1;
}
