#include <stdio.h>

int main()
{
    int a, b, c, aux, min, max;

    printf("Entrez trois entiers\n");
    scanf("%d %d %d",&a, &b, &c);

    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    printf("Le minimun est %d\n", min);

    max = a;
    if (b > max)
        max = b;
    if(c > max)
        max = c;
    printf("Le maximum est %d\n", max);

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    printf("Dans l'ordre, ca donne : %d, %d, %d\n", a, b, c);

    return 0;
}
