#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include "Accueil.h"
#define PAR 2

int main()
{
    char mot_de_passe [20];
    char mdp_biblio [] = "biblio";
    char mdp_user [] = "bananes_frites";

    char* mdp = NULL;
    char format[128];

    int length = 0;
    int choix = 0; /// Que veut faire l'user sur l'aspect g�n�ral du programme
    int verif1 = 0; /// Verification des mdps
    int verif2 = 0;
    int prog = 0; /// Pour la manipulation de la bdd livres


    time_t temps;
    struct tm date;

    system("CLS");

    time(&temps);
    date=*localtime(&temps);

    printf("\n");

    strftime(format, 128, "%A %x\n%X Paris\n", &date);
    puts(format);

    time(&temps);
    date=*gmtime(&temps);

    printf("\n");

    do
    {
        printf("Pour les utilisateurs, le mot de passe est : bananes_frites \n");
        printf("Le mot de passe : ");
        scanf("%s", mot_de_passe);
        length = strlen(mot_de_passe);
        mdp = malloc(sizeof(char) * (length + 1));
        strcpy(mdp, mot_de_passe);
        verif1 = strcmp(mdp, mdp_biblio);
        verif2 = strcmp(mdp, mdp_user);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif1 != 0 && verif2 != 0);

    if (verif2 == 0) /// Si c'est une personne lambda
    {
        accueil_user(); /// On l'envoie sur l'acceuil utilisateur
        printf ("Nous vous souhaitons une agreable journee \n");
        return 10; /// Retour si programme quitt� par un utilisateur
    }

    else if (verif1 == 0) /// Sinon
    {

        choix = accueil_biblio(); /// On l'envoie sur l'accueil biblioth�caire

        do
        {
            if (choix == 1) /// Si il veut travailler sur la bdd adherent
            {
                prog = adherent();
            }

            else if (choix == 2)/// Si il veut acc�der � la base de donn�es sur les livres
            {
                prog = livre();
            }

            else if (choix == 3) /// Si le biblioth�caire � choisi de quitter le programme
            {
                return 5; /// Retour si programme quitt� par le biblioth�caire
            }

            if (prog == 3) /// Si le biblioth�caire veut revenir au menu
            {
                choix = accueil_biblio();
            }
        }
        while (choix != 3);
    }

    free(mdp);

    return 0;
}
