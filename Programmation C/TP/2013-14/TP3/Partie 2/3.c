#include<stdio.h>

int ordreLexicographique(char chaine1[], char chaine2[]);

int main()
{
    char chaine1[100], chaine2[100];
    int retour;

    printf("Saisissez les chaines a comparer.\n");

    printf("Chaine 1 :\n");
    scanf("%s", chaine1);

    printf("Chaine 2 :\n");
    scanf("%s", chaine2);

    retour = ordreLexicographique(chaine1, chaine2);

    if (retour == 1) {
        printf("%s < %s", chaine2, chaine1);
    }
    else if (retour == -1) {
        printf("%s < %s", chaine1, chaine2);
    }
    else {
        printf("%s = %s", chaine1, chaine2);
    }

    return 0;
}

int ordreLexicographique(char chaine1[], char chaine2[])
{
    int i;

    for (i = 0; chaine1[i] != '\0'; i++) {
        if (chaine1[i] < chaine2[i]) {
            return -1;
        }
        else if (chaine1[i] > chaine2[i]) {
            return 1;
        }
        else {
            return 0;
        }
    }
}
