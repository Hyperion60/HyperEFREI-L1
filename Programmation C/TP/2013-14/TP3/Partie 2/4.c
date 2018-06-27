#include<stdio.h>

int occurence(char chaine1[], char caractere);

int main()
{
    char chaine1[100], caractere;
    int retour;

    printf("Chaine dans laquelle trouver l'occurence :\n");
    scanf("%s", chaine1);

    printf("Occurence (un caractere) :\n");
    scanf(" %c", &caractere);

    retour = occurence(chaine1, caractere);

    printf("%c a ete trouve %d fois", caractere, retour);

    return 0;
}

int occurence(char chaine1[], char caractere)
{
    int i;
    int compteur = 0;

    for (i = 0; chaine1[i] != '\0'; i++) {
        if (chaine1[i] == caractere) {
            compteur++;
        }
    }

    return compteur;
}
