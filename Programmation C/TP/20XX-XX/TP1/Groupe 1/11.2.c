#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1;
    float n2;
    float n3;
    float n4;
    float moyenne;

    printf("entrez votre première note\n");
    scanf("%f", &n1);
    printf("entrez votre deuxième note\n");
    scanf("%f", &n2);
    printf("entrez votre troisième note\n");
    scanf("%f", &n3);
    printf("entrez votre quatrième note\n");
    scanf("%f", &n4);

    if (n1 <= n2 && n1 <= n3 && n1 <= n4) {
        // N1 est minimum
        printf("La moyenne des trois meilleures notes est %f", (n2+n3+n4)/3);
    }
    else if (n2 <= n1 && n2 <= n3 && n2 <= n4) {
        // N2 est minimum
        printf("La moyenne des trois meilleures notes est %f", (n1+n3+n4)/3);
    }
    else if (n3 <= n1 && n3 <= n2 && n3 <= n4) {
        // N3 est minimum
        printf("La moyenne des trois meilleures notes est %f", (n1+n2+n4)/3);
    }
    else if (n4 <= n1 && n4 <= n3 && n4 <= n2) {
        // N3 est minimum
        printf("La moyenne des trois meilleures notes est %f", (n1+n2+n3)/3);
    }

    return 0;
}
