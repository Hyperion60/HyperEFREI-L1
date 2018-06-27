#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, minimum, mid, maximum;

    printf("Saisir 3 entiers ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3) {
        // N1 est minimum
        printf("Le minimum est %d\n", n1);
        minimum = n1;
    }
    else if (n2 <= n1 && n2 <= n3) {
        // N2 est minimum
        printf("Le minimum est %d\n", n2);
        minimum = n2;
    }
    else if (n3 <= n1 && n3 <= n2) {
        // N3 est minimum
        printf("Le minimum est %d\n", n3);
        minimum = n3;
    }


    if (n1 >= n2 && n1 >= n3) {
        // N1 est maximum
        printf("Le maximum est %d\n", n1);
        maximum = n1;
    }
    else if (n2 >= n1 && n2 >= n3) {
        // N2 est maximum
        printf("Le maximum est %d\n", n2);
        maximum = n2;
    }
    else if (n3 >= n1 && n3 >= n2) {
        // N3 est maximum
        printf("Le maximum est %d\n", n3);
        maximum = n3;
    }

    // On calcule la valeur moyenne
    mid = (n1+n2+n3)-(minimum+maximum);

    printf("Dans l'ordre croissant, on a %d %d %d", minimum, mid, maximum);
}
