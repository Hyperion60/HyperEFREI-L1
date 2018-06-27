#include <stdio.h>

int main()
{
    int a, n, i;
    int positif = 0, negatif = 0, zero = 0;

    do
    {
        printf("Entrez le nombre d'entiers a demander\n");
        scanf("%d", &n);

    }
    while (n < 1);

    printf("Entrez maintenant une suite de %d entiers quelconques\n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a < 0)
            negatif++;
        else if (a > 0)
            positif++;
        else if (a == 0)
            zero++;
    }
    printf("Du coup, on a affiche %d valeurs positives, %d valeurs negatives et %d zeros\n", positif, negatif, zero);

    return 0;
}
