#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include "manipulation.h"

int ajout_adherent()
{

    int choix;
    int verif;
    int cpt;

    t_auteur auteur;
    t_adherent adherent;
    t_adresse_postale adresse;

    FILE* fichier_adherent = NULL;
    /* FILE* fichier_livre = NULL; */

    fichier_adherent = fopen("adherent.csv", "a");
    /* fichier_livre = fopen("livre.csv", "a"); */

    if (fichier_adherent == NULL)
    {
        printf("Impossible d'ouvrir le fichier adherent");
        return 1;
    }

     /*if (fichier_livre == NULL)
    {
        printf("Impossible d'ouvrir le fichier livre");
        return 2;
    }
    */

    printf("Combien d'adherents voulez-vous ajouter ? : ");

    do
    {
        verif = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif != 1 || choix < 1);

    for (cpt = 0 ; cpt < choix ; cpt = cpt + 1)
    {

        printf("Creation de l'adherent %d \n", cpt + 1);

        printf("Saisie du prenom : ");
        scanf("%s", &adherent.nom);
        printf("\n");

        printf("Saisie du nom : ");
        scanf("%s", &adherent.prenom);
        printf("\n");

        printf("Saisie de l'adresse mail : ");
        scanf("%s", &adherent.adresse_mail);
        printf("\n");

        printf("Saisie de la profession : ");
        scanf("%s", &adherent.profession);
        printf ("\n");

        printf("Saisie de l'adresse postale : ");
        printf("\n");

        printf("- Numero : ");
        scanf("%d", &adherent.adresse_adherent.numero_rue);
        printf("\n");

        printf("- Rue : ");
        scanf("%s", &adherent.adresse_adherent.rue);
        printf("\n");

        printf("- Code postal : ");
        scanf("%d", &adherent.adresse_adherent.code_postal);
        printf("\n");

        printf("- Ville : ");
        scanf("%s", &adherent.adresse_adherent.ville);
        printf("\n");

        printf("- Pays : ");
        scanf("%s", &adherent.adresse_adherent.pays);

        printf("\n");
        printf("\n");

        fprintf(fichier_adherent, "%s", adherent.prenom);
        fprintf(fichier_adherent, ";");

        fprintf(fichier_adherent, "%s", adherent.nom);
        fprintf(fichier_adherent, ";");

        fprintf(fichier_adherent, "%s", adherent.adresse_mail);
        fprintf(fichier_adherent, ";");

        fprintf(fichier_adherent, "%s", adherent.profession);
        fprintf(fichier_adherent, ";");

        fprintf(fichier_adherent, "%d", adherent.adresse_adherent.numero_rue);
        fprintf(fichier_adherent, " ");

        fprintf(fichier_adherent, "%s", adherent.adresse_adherent.rue);
        fprintf(fichier_adherent, " ");

        fprintf(fichier_adherent, "%d", adherent.adresse_adherent.code_postal);
        fprintf(fichier_adherent, " ");

        fprintf(fichier_adherent, "%s", adherent.adresse_adherent.ville);
        fprintf(fichier_adherent, " ");

        fprintf(fichier_adherent, "%s", adherent.adresse_adherent.pays);
        fprintf(fichier_adherent, ";");

    }

    fclose(fichier_adherent);
/*    fclose(fichier_livre); */
    return 0;
}

