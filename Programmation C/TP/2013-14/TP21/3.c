#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entier = 0;
    int compteur = 0;
    int sommeMoyenne = 0;

    // Tant qu'on a eun entier positif...
    while (entier >= 0) {
        printf("Entrez votre entier:\n");
        scanf("%d", &entier);

        // Si cet entier est bel est bien positif, on l'ajoute à notre somme
        // On incrémente notre compteur dans ce cas uniquement pour ne pas
        // avoir un compteur plus élevé qu'on a de note
        if (entier >= 0) {
            sommeMoyenne = sommeMoyenne+entier;
            compteur++;
        }
    }

    if (compteur != 0) {
        printf("La moyenne est: %d", sommeMoyenne/compteur);
    }
    else {
        printf("Erreur");
    }

}
