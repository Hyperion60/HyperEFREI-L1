#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amour;
    int resultat_amour;
    int cpt;
    cpt = 0;
    do
    {
        printf("A quel point penses-tu que je t'aime sur une échelle de 1 a 10 <3 ? ");
        resultat_amour = scanf("%d", &amour);
        scanf ("%*[^\n]");
        getchar ();
    }
    while (resultat_amour != 1 || amour < 1 || amour > 10);
    printf("Je suis desole de devoir t'annoncer que tu te trompes <3 \n");
    printf("Pour etre honnete, l'amour que je ressens pour toi ne peut pas etre quantifie par une echelle si courte <3 \n");
    printf("Je t'aime tellement que meme sur 256 bits, il y a un overflow <3 \n");
    printf("Je t'aime <3 \n");
    system("pause");
    do
    {
        printf("Je t'aime <3 \n");
    }
    while (cpt == 0);
    return 0;
}
