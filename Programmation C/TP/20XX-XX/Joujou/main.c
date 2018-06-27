#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille;
    int cpt;
    float x;
    float y;
    float a;
    float b;
    float* tabx;
    float* taby;

    x = 0;
    y = 0;
    taille = 0;
    cpt = 0;
    a = 0;
    b = 0;

    printf("Combien de valeurs voulez-vous rentrer ? \n");
    scanf("%d", &taille);

    tabx = malloc(taille * sizeof(float));
    taby = malloc(taille * sizeof(float));

    for (cpt = 0 ; cpt < taille ; cpt = cpt + 1)
    {
        printf("Entrez la valeur numero ");
        printf("%d \n", cpt + 1);
        scanf("%f", &x);
        tabx [cpt] = x;
    }

    a = 1 / (tabx [taille] - tabx [0]);


    for (cpt = 0 ; cpt < taille ; cpt = cpt + 1)
    {
        b = (- tabx [0]) / (tabx [taille] - tabx [0]);
        y = a*tabx [cpt] + b;
        taby [cpt] = y;
    }

    for (cpt = 0 ; cpt < taille ; cpt = cpt + 1)
    {
        printf("x = %f", tabx [cpt]);
        printf(" y = %f\n", taby [cpt]);
    }
    system("pause");
    return 0;
}
