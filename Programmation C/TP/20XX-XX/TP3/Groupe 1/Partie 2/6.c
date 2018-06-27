#include<stdio.h>
#define N 16

void remplacerListe(char chaine1[], char chaine2[], char chaine3[]);

int main()
{
    char chaine1[N], chaine2[N], chaine3[N];

    printf("Rentrez l'expression :\n");
    scanf("%s", chaine1);

    printf("Chaine a remplacer :\n");
    scanf(" %s", chaine2);

    printf("Chaine de remplacement :\n");
    scanf(" %s", chaine3);

    remplacerListe(chaine1, chaine2, chaine3);

    printf("Nouvelle chaine: %s", chaine1);

    return 0;
}

void remplacerListe(char chaine1[], char chaine2[], char chaine3[])
{
    int i, j;

    // On parcourt l'expression
    for (i = 0; chaine1[i] != '\0'; i++) {
        // Tant que la chaine a remplacer ou la chaine de remplacement existe,
        // Si le caractere dans l'expression existe dans la chaine de remplacement,
        // On injecte le contenu de la chaine3 correspondant à celui de la chaine2
        for (j = 0; (chaine2[j] != '\0') && (chaine3[j] != '\0'); j++) {
            if (chaine1[i] == chaine2[j]) {
                chaine1[i] = chaine3[j];
            }
        }
    }
}
