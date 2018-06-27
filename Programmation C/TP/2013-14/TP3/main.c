#include<stdio.h>
#include<string.h>

int Recherche(char chaine1[], char chaine2[]);

int main()
{
    char chaine1[100], chaine2[100];
    int retour;

    printf("Entrez la chaine ou effectuer la recherche :\n");
    scanf("%s", chaine1);

    printf("Entrez la chaine recherchee :\n");
    scanf(" %s", chaine2);

    retour = Recherche(chaine1, chaine2);

    if (retour == -1) {
        printf("Le mot n'a pas ete trouve");
    }
    else {
        printf("Le mot a ete trouve en position %d", retour);
    }

    return 0;
}

int Recherche(char chaine1[], char chaine2[])
{
    // On utilise strstr pour chercher si la chaine est présente
    // Si NULL est retournée, alors la chaine recherchee n'est pas présente
    // On utilise le retour de *strstr - *mot recherché pour avoir la position de l'occurence
    // Source: http://stackoverflow.com/questions/7500892/get-index-of-substring
    if (strstr(chaine1,chaine2) != NULL) {
        return (*strstr(chaine1,chaine2) - *chaine1);
    }
    else {
        return -1;
    }
}
