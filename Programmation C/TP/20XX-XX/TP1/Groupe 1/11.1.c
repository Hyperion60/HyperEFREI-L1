#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1;
    float n2;
    float n3;
    float c1;
    float c2;
    float c3;
    float moyenne;

    printf("entrez vos notes\n");
    scanf("%f", &n1);
    scanf(" %f", &n2);
    scanf(" %f", &n3);

    printf("et vos coefficients respectifs\n");
    scanf(" %f", &c1);
    scanf(" %f", &c2);
    scanf(" %f", &c3);

    moyenne = (n1*c1+n2*c2+n3*c3)/(c1+c2+c3);
    printf("moyenne=%f\n", moyenne);

    if (moyenne<10) {
        printf("non recu");
    }
    else {
        printf("adimissible");
    }

    return 0;
}
