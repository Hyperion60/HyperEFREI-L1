#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A;
    int B;

    printf("Rentrez la première valeur (nombre reel)\n");
    scanf("%f", &A);

    printf("Rentrez la seconde valeur (nombre entier)\n");
    scanf("%d", &B);

    printf("A + B = %f\n", A+B);
    printf("A - B = %f\n", A-B);
    printf("A * B = %f\n", A*B);

    if (B != 0) {
        printf("A / B = %f\n", A/B);
    }
}
