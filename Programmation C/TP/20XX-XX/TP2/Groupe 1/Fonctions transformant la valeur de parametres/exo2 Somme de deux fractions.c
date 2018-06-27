#include <stdio.h>

void sommeFractions(int a, int b, int c, int d, int * numerateur, int * denominateur);

int main()
{
    int a = 7, b = 3, c = 15, d = 4;
    int numerateur, denominateur;

    sommeFractions(a, b, c, d, &numerateur, &denominateur);

    printf("%d / %d  \n", numerateur, denominateur);

    return 0;
}

void sommeFractions(int a, int b, int c, int d, int * numerateur, int * denominateur)
{
    *numerateur = a * d + c * b;
    *denominateur = b * d;
}
