#include<stdio.h>
#define N 16

void remplacerListe(char chaine1[], char chaine2[], char chaine3[]);

int main()
{
    char chaine1[N], chaine2[N];
    int retour;

    printf("Entrez le premier mot :\n");
    scanf("%s", chaine1);

    printf("Entrez le second mot :\n");
    scanf(" %s", chaine2);

    retour = estAnagramme(chaine1, chaine2);

    if (retour == 1) {
        printf("Ce sont des anagramemes!");
    }
    else {
        printf("Ce ne sont pas des anagrammes!");
    }

    return 0;
}

int estAnagramme(char chaine1[], char chaine2[])
{
    int i, trouveChaine1[256], trouveChaine2[256];

    // On commence par initialiser les deux chaines en les remplissant de zéros
    for (i = 0; i < 256; i++) {
        trouveChaine1[i] = 0;
        trouveChaine2[i] = 0;
    }

    // On parcourt le premier mot, et on incrémente l'entrée correspondant à la lettre actuelle
    for (i = 0; chaine1[i] != '\0'; i++) {
        trouveChaine1[chaine1[i]]++;
    }

    // Idem pour le second mot
    for (i = 0; chaine2[i] != '\0'; i++) {
        trouveChaine2[chaine2[i]]++;
    }

    for (i = 0; i < 256; i++) {
        // Si les deux listes ne sont pas identiques, on n'a pas les mêmes lettres et ce ne sont pas des anagrammes
        if (trouveChaine1[i] != trouveChaine2[i]) {
            return 0;
        }
    }

    // On retourne 1 et ce sont des anagrammes si on n'a pas été stoppé plus haut
    return 1;
}
