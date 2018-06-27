#include <stdio.h>

int main ()
{
    int compteur = 0;
    int a = 0;
    float somme = 0;

    printf("Entrez des entiers positifs et un negatif pour arreter\n");
    while (a >= 0)
    {
        printf("Nombre %d : ", compteur + 1);
        scanf("%d", &a);
        if (a >= 0)
        {
            compteur++;
            somme += a;
        }
    }
    if (compteur != 0)
        printf("La moyenne des valeurs entrees est %.2f\n", somme/compteur);
    else
        printf("Aucune note!\n");

    return 0;
}
