#include<stdio.h>

int main()
{
    int a, n, puissance = 1, i;

    printf("Entrez un entier\n");
    scanf("%d", &a);

    do
    {
        printf("Entrez un entier positif ou nul\n");
        scanf("%d",&n);
    }
    while (n < 0);

    for (i = 0; i < n; i++)
        puissance = puissance * a;
    printf("%d^%d = %d\n", a, n, puissance);

    return 0;
}
