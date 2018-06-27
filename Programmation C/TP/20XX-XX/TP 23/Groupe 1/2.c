#include <stdio.h>

void SommeFrac(int num1, int den1, int num2, int den2, int* sommeNum, int* sommeDen);

int main()
{
    int num1 = 3;
    int den1 = 5;

    int num2 = 4;
    int den2 = 7;

    int sommeNum, sommeDen;

    SommeFrac(num1, den1, num2, den2, &sommeNum, &sommeDen);

    printf("Somme num: %d\n", sommeNum);
    printf("Somme den: %d\n", sommeDen);

    return 0;
}

void SommeFrac(int num1, int den1, int num2, int den2, int* sommeNum, int* sommeDen)
{
    // On utilise des pointeurs pour modifier 2 variables
    *sommeNum = num1 * den2 + num2 * den1;
    *sommeDen = den1 * den2;
}
