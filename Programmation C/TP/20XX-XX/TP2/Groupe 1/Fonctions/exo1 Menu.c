#include <stdio.h>
#include <ctype.h>

void moyenne()
{
    int compteur = 0;
    int a = 0;
    float somme = 0;

    printf("Entrez des entiers positifs et un negatif pour arreter\n");
    while (a >= 0)
    {
        scanf("%d", &a);
        if (a >= 0)
        {
            compteur++;
            somme += a;
        }
    }
    if (compteur != 0)
        printf("La moyenne des valeurs entrees est %.2f\n", somme/compteur);
    else
        printf("Aucune note!\n");
}

void testCaractere()
{
    unsigned char a;
    printf("Entrez un caractere\n");
    scanf(" %c", &a);

    if ((a >= 'a') && (a <= 'z'))
        printf("C'est un lettre minuscule\n");
    else if ((a >= 'A') && (a <= 'Z'))
        printf("C'est une lettre majuscule\n");
    else if ((a >= '0') && (a <= '9'))
        printf("C'est un chiffre\n");
    else
        printf("Ce n'est pas un caractere alphanumerique\n");

    if (islower(a) != 0)
        printf("C'est un lettre minuscule\n");
    else if (isupper(a) != 0)
        printf("C'est une lettre majuscule\n");
    else if (isdigit(a) == 1)
        printf("C'est un chiffre\n");
    else
        printf("Ce n'est pas un caractere alphanumerique\n");
}

void affichageAscii()
{
    char a;

    for (a = 'A'; a <= 'Z'; a++)
    {
        printf("caractere %c code %d\n", a, a);
    }


    for (a = '0'; a <= '9'; a++)
    {
        printf("caractere %c code %d\n", a, a);
    }
}


void nombreCache()
{
    int cache = 666;
    int essai = 0;
    int a = -1;

    while ((essai < 10) && (a != cache))
    {
        essai++;
        printf("Essai %d : ", essai);
        scanf("%d", &a);
        if (a < cache)
            printf("Trop petit\n");
        if (a>cache)
            printf("Trop grand\n");
    }

    if (a == cache)
        printf("Bravo, vous avez trouve en %d essais\n", essai);
    else
        printf("Rate, le nombre mystere etait %d\n", cache);
}

int main()
{
    int choix;

    do
    {
        printf("Vous avez le choix entre :\n");
        printf("1 - Arret d'une saisie grace à une valeur\n");
        printf("2 - le test sur des caracteres\n");
        printf("3 - la recherche d'un nombre\n");
        printf("4 - l'affichage des codes ASCII\n");
        printf("0 - fuir\n");

        scanf("%d", &choix);
        switch (choix)
        {
        case 0 :
            break;
        case 1 :
            moyenne();
            break;
        case 2 :
            testCaractere();
            break;
        case 3 :
            nombreCache();
            break;
        case 4 :
            affichageAscii();
            break;
        default :
            printf("Mauvaise entree\n");
            break;
        }
    }
    while (choix != 0);

    return 0;
}
