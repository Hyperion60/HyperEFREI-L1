#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int c, posInt, compteurNombres, inputValue;
    int compteurNegatif = 0;
    int compteurPositif = 0;
    int compteurNul = 0;

    // On vérifie si les nombres rentrés sont positifs ou négatifs
    do {
        printf("Saisir un entier positif \n");
        scanf("%d", &posInt);
    } while (posInt < 0);

    printf("Combien de nombres voulez-vous rentrer ? \n");
    scanf(" %d", &compteurNombres);

    for ( c = 0 ; c < compteurNombres ; c++ ) {
        printf("Entrez le nombre %d \n", c+1);
        scanf(" %d", &inputValue);
        if (inputValue == 0) {
            compteurNul++;
        }
        else if (inputValue < 0) {
            compteurNegatif++;
        }
        else {
            compteurPositif++;
        }
    }

    printf("Nombre de positifs: %d\n", compteurPositif);
    printf("Nombre de zeros: %d\n", compteurNul);
    printf("Nombre de negatifs: %d\n", compteurNegatif);

}
