#include <stdio.h>

int main()
{
    int a, n, puissance, somme, i;

    printf("Entrez un entier : ");
    scanf("%d", &a);

    do
    {
        printf("Entrez un exposant entier positif ou nul\n");
        scanf("%d",&n);
    }
    while (n < 0);

    for (puissance = 1, somme = 1, i = 1; i <= n; i++)
    {
        puissance = puissance * a;
        somme = somme + puissance;
    }
    printf("somme des puissances de %d de 0 a %d = %d\n",a, n, somme);

    for (puissance = 1, somme = 1, i = 1; i <= n; i++)
    {
        puissance = puissance * a;
        if (i%2 == 0)
            somme = somme + puissance;
        else
            somme = somme - puissance;
    }
    printf("somme alternee des puissances de %d de 0 a %d = %d\n",a, n, somme);

    return 0;
}
