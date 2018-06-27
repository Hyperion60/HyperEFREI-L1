#include<stdio.h>

char concateneChaine(char chaine1[], char chaine2[], char chaineConcatenee[]);

int main()
{
    char chaine1[100], chaine2[100], chaineConcatenee[200];

    printf("Saisissez la chaine a copier.\n");

    printf("Chaine 1 :\n");
    scanf("%s", chaine1);

    printf("Chaine 2 :\n");
    scanf("%s", chaine2);

    concateneChaine(chaine1, chaine2, chaineConcatenee);

    printf("Concatenation: %s\n", chaineConcatenee);

    return 0;
}

char concateneChaine(char chaine1[], char chaine2[], char chaineConcatenee[])
{
    int i, j;

    // On copie toute la première chaine dans notre nouvelle chaine, jusqu'à sa fin \0
    for (i = 0; chaine1[i] != '\0'; i++) {
        chaineConcatenee[i] = chaine1[i];
    }

    // On copie toute la deuxieme chaine dans notre nouvelle chaine en prenant soin
    // de partir de la fin de la première chaine, soit i+j, jusqu'à sa fin \0
    for (j = 0; chaine2[j] != '\0'; j++) {
        chaineConcatenee[i+j] = chaine2[j];
    }

    // On ajoute le caractère de fin
    chaineConcatenee[i+j] = '\0';

    return chaineConcatenee;
}
