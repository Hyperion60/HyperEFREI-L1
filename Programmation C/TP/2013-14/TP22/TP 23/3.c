#include <stdio.h>
#include <ctype.h>

void TransformeMinMaj(char *entreeUtilisateur);
char poursuivreExecution();
void afficherAlphabetMajuscule();

int main()
{
    char entreeUtilisateur;
    char continuer = 'o';
    int retourFonction;

    do {
        printf("Partie 1\n");
        printf("Veuillez rentrer une valeur de type char\n");
        scanf(" %c", &entreeUtilisateur);
        retourFonction = transformeMinMaj(&entreeUtilisateur);

        if(retourFonction == 0) {
            printf("Erreur: vous n'avez pas entre de lettre\n");
        }
        else {
            printf("%c\n", entreeUtilisateur);
        }

        printf("Partie 2\n");
        afficherAlphabetMajuscule();

        continuer = poursuivreExecution();
    } while (continuer == 'o');

    return 0;
}

int transformeMinMaj(char *entreeUtilisateur)
{
    if (islower(*entreeUtilisateur) != 0)
    {
        // On utilise la fonction toupper pour convertir une minuscule en majuscule
        *entreeUtilisateur = toupper(*entreeUtilisateur);
        return 1;
    }
    else if (isupper(*entreeUtilisateur) != 0) {
        return 1;
    }
    else {
        return 0;
    }
}

char poursuivreExecution()
{
    char continuer;

    printf("Voulez-vous continuer ? Tapez 'o' pour oui, 'n' pour non.\n");
    scanf(" %c", &continuer);

    return continuer;
}

void afficherAlphabetMajuscule()
{
    char continuer = 'o';
    int retourFonction;
    char entreeUtilisateur;

    printf("Saisissez les caracteres. Un '!' signifie que vous avez fini\n");

    // On fait rentrer les caractères un à un comme demandé en TP
    do {
        scanf(" %c", &entreeUtilisateur);
        retourFonction = transformeMinMaj(&entreeUtilisateur);

        if(retourFonction == 1) {
            printf("%c\n", entreeUtilisateur);
        }
    } while (entreeUtilisateur != '!');
}
