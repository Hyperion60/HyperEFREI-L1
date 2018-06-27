#include <stdio.h>

void echangerValeursAdresses(int *x, int *y);
void echangerValeursArguments(a, b);
void afficher(int x, int y);

int main()
{
    int a = 2;
    int b = 6;

    printf("Echange de valeurs par argument\n");
    printf("Avant echange:\n");
    afficher(a, b);

    // On passe les adresses de x et y
    echangerValeursArguments(a, b);

    printf("Apres echange dans le main:\n");
    afficher(a, b);


    int x = 2;
    int y = 6;

    printf("\nEchange de valeurs par adresses\n");
    printf("Avant echange:\n");
    afficher(x, y);

    // On passe les adresses de x et y
    echangerValeursAdresses(&x, &y);

    printf("Apres echange dans le main:\n");
    afficher(x, y);

    return 0;
}

void echangerValeursAdresses(int *x, int *y)
{
    int varTemp;

    // On utilise * pour modifier la valeur et non l'adresse
    varTemp = *x;
    *x = *y;
    *y = varTemp;

    printf("Apres echange dans la fonction:\n");
    afficher(*x, *y);
}

void echangerValeursArguments(int x, int y)
{
    int varTemp;

    // On utilise * pour modifier la valeur et non l'adresse
    varTemp = x;
    x = y;
    y = varTemp;

    printf("Apres echange dans la fonction:\n");
    afficher(x, y);
}

void afficher(int x, int y) {
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}
