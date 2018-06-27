#include <stdio.h>
#include <ctype.h>

extern int transformeMinMaj(char * p);
extern void afficherCaracteres();

int main()
{
    char c;
    int resultat;

    printf("entrer saisir une touche du clavier \n");

    scanf("%c", &c);

    resultat = transformeMinMaj(&c);

    if(resultat == 0)
        printf("vous n'avez pas entrer une lettre \n");
    else
        printf("%c\n", c);

    afficherCaracteres();

    return 0;
}

int transformeMinMaj(char * p)
{
    if (isupper(*p) != 0)
        return 1;

    if (islower(*p) != 0)
    {
        *p = *p - 32;
        return 1;
    }

    return 0;
}

void afficherCaracteres()
{
    char c;
    int resultat;

    printf ("saisissez vos caractères (. pout terminer)\n\n");

    do
    {
        scanf(" %c", &c);
        resultat= transformeMinMaj(&c);

        if (resultat == 1)
            printf("%c", c);
    }
    while (c != '.');
}
