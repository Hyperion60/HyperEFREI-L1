#include <stdio.h>
#include <stdlib.h>

int main()
{
    // IL EST NECESSAIRE D'UTILISER LE TABLEAU EN COMPLEMENT
    printf("\n");
    printf("\n");
    printf("\n");

    int a; // Premier nombre de la somme de carrées
    int b; // Second nombre de la somme de carrés
    int somme; // Sert à la somme des carrés
    int carre; // Vérifie le théorème des deux carrées
    a = 1;
    b = 1;
    for (indice = 0 ; indice < utile ; indice = indice +1)
    {
        carre = 0;
        for (a = 1 ; a <= 5 ; a = a + 1)
        {
            for (b = 1 ; b < 3 ; b = b + 1)
            {
                somme = a*a + b*b;
                if (somme == pytab [indice])
                {
                    carre = 1;
                }
            }printf("\n");
        }
        if (carre == 1)
        {printf("\n");
            printf("%d", pytab [indice]);
            printf(" suit le theoreme des deux carres ");
            system("pause");
            printf("\n");
        }
        else
        {
            printf("%d", pytab [indice]);
            printf(" ne suit pas le theoreme des deux carres ");
            system("pause");
            printf("\n");
        }
    }
    return 0;
}
