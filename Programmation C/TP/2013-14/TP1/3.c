#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int G;
    int H;

    printf("entrez G :");
    scanf("%d", &G);
    printf("entrez H :");
    scanf("%d", &H);

    printf("G + H = %f\n", G+H);

    if (G%2 == 0 && G%3 == 0) {
        printf("G = %f  est un multiple de 2 et 3\n", (float) G); // On caste G pour afficher au moins 3 caractères
    }
    else {
        if (G%2 == 0) {
            printf("G = %f  est un multiple de 2\n", (float) G);
        }
        if (G%3 == 0) {
            printf("G = %f  est un multiple de 3\n", (float) G);
        }
    }

    if (H%2 == 0 && H%3 == 0) {
        printf("H = %f  est un multiple de 2 et 3\n", (float) H);
    }
    else {
        if (H%2 == 0) {
            printf("H = %f  est un multiple de 2\n", (float) H);
        }
        if (H%3 == 0) {
            printf("H = %f  est un multiple de 3\n", (float) H);
        }
    }
}
