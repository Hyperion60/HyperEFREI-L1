#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char saison;

    printf("Tapez 'p' pour printemps\n");
    printf("Tapez 'e' pour ete\n");
    printf("Tapez 'a' pour automne\n");
    printf("Tapez 'h' pour hiver\n");
    scanf("%c", &saison);

    if (saison == 'p') {
        printf("hiver");
    }
    if (saison == 'e') {
        printf("ete");
    }
    if (saison == 'a') {
        printf("automne");
    }
    if (saison == 'h') {
        printf("hiver");
    }
    else {
        printf("erreur");
    }

    return 0;
}
