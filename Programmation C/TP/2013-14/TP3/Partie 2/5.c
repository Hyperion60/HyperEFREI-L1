#include<stdio.h>
#define N 16

void remplacerCaractere(char chaine1[], char caractere, char remplacement);

int main()
{
    char chaine1[N], caractere, remplacement;

    printf("Chaine dans laquelle faire le remplacement :\n");
    scanf("%s", chaine1);

    printf("Caractere a remplacer :\n");
    scanf(" %c", &caractere);

    printf("Caractere de remplacement :\n");
    scanf(" %c", &remplacement);

    remplacerCaractere(chaine1, caractere, remplacement);

    printf("Nouvelle chaine: %s", chaine1);

    return 0;
}

void remplacerCaractere(char chaine1[], char caractere, char remplacement)
{
    int i;

    for (i = 0; chaine1[i] != '\0'; i++) {
        if (chaine1[i] == caractere) {
            chaine1[i] = remplacement;
        }
    }
}
