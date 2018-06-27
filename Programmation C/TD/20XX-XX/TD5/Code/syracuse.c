#include <stdio.h>

void syracuse(int n);

int main()
{
    int n;

    do
    {
        printf(" n = ");
        scanf("%d", &n);
    }
    while (n < 0);

    syracuse(n);

    return 0;
}

void syracuse(int U0)
{
    int compteur = 0;

    printf("S%d = 1 \n", compteur);
    while (U0 != 1)
    {

        if(U0%2 == 0)
            U0 /= 2;
        else
            U0 = 3*U0 + 1;
        compteur++;
        printf("S%d = %u \n", compteur, U0);
    }
    return;
}
