#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int age;

    printf("entrez votre age : ");
    scanf("%d", &age);

    if (age<26 || age>60) {
        printf("vous avez le droit au tarif reduit\n");
    }
    else {
        printf("vous n avez pas le droit au tarif reduit\n");
    }

    return 0;
}
