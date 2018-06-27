#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include "manipulation.h"


void ajout_adherent() /// Quand le bibliothécaire veut ajouter un adhérent
{
    int choix;
    int verif;
    int cpt;
    int nb_actuel;

    t_adherent adherent;

    FILE* nb_adherent = NULL;

    FILE* fichier_adherent = NULL;

    char format[128];
    time_t temps;
    struct tm date;

    system("CLS");

    time(&temps); /// Affiche l'heure
    date=*localtime(&temps);

    printf("\n\n\n");

    strftime(format, 128, "                 Date  : %A %x\n                 Heure : %X \n                 Vous etes a : Paris\n\n\n", &date);

    puts(format);

    time(&temps);
    date=*gmtime(&temps);

    printf("\n");

    fichier_adherent = fopen("adherent.csv", "a"); /// Ouvre le fichier adherent
    nb_adherent = fopen("adherent.txt", "r"); /// Ouvre le fichier tenant le compte du nombre d'adherents

    if (fichier_adherent == NULL) /// Si on ne peut pas ouvrir un des fichiers
    {
        printf("Impossible d'ouvrir le fichier adherent");
        system("pause");
        return;
    }

    if (nb_adherent == NULL)
    {
        printf("Impossible de tenir le compte des adherents");
        system("pause");
        return;
    }

    printf("Combien d'adherents voulez-vous ajouter ? : "); /// Nombre d'adherent que le bibliothecaire veut ajouter

    do
    {
        verif = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif != 1 || choix < 0);

    if (choix == 0)
    {
        return;
    }

    for (cpt = 0 ; cpt < choix ; cpt = cpt + 1) /// Pour chacun des adherent
    {

        printf("Creation de l'adherent %d \n \n", cpt + 1); /// On cree une ligne dans le tableau adherent.csv

        printf("Saisie du prenom : "); /// On ecrit prénom
        scanf("%s", adherent.prenom);
        printf("\n");

        printf("Saisie du nom : "); /// Nom
        scanf("%s", adherent.nom);
        printf("\n");

        printf("Saisie de l'adresse mail : "); /// Mail
        scanf("%s", adherent.adresse_mail);
        printf("\n");

        printf("Saisie de la profession : "); /// Profession
        scanf("%s", adherent.profession);
        printf ("\n");

        printf("Saisie de l'adresse postale : "); /// Adresse
        printf("\n");

        printf("- Numero : ");
        scanf("%d", &adherent.adresse_adherent.numero_rue);
        printf("\n");

        printf("- Rue : ");
        scanf("%s", adherent.adresse_adherent.rue);
        printf("\n");

        printf("- Code postal : ");
        scanf("%d", &adherent.adresse_adherent.code_postal);
        printf("\n");

        printf("- Ville : ");
        scanf("%s", adherent.adresse_adherent.ville);
        printf("\n");

        printf("- Pays : ");
        scanf("%s", adherent.adresse_adherent.pays);

        printf("\n");
        printf("\n");

        fprintf(fichier_adherent, "\n"); /// Ici, on l'écrit dans le fichier .csv

        fprintf(fichier_adherent, "%s", adherent.nom);
        fprintf(fichier_adherent, ";");

        fprintf(fichier_adherent, "%s", adherent.prenom);
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

    fscanf(nb_adherent, "%d", &nb_actuel);

    fclose(nb_adherent);

    nb_adherent = fopen("adherent.txt", "w+");

    if (nb_adherent == NULL)
    {
        printf("Impossible de tenir le compte des adherents");
        return;
    }

    fprintf(nb_adherent, "%d", cpt + nb_actuel); /// On note le nombre d'adherent total dans le fichier .txt

    fclose(nb_adherent);
    fclose(fichier_adherent);

    return;
}

void ajout_livre() /// Si le bibliothecaire veut ajouter un livre
{
    int choix;
    int verif;
    int cpt;
    int nb_actuel;

    t_livre livre;

    FILE* nb_livre = NULL;
    FILE* fichier_livre = NULL;

    char format[128];
    time_t temps;
    struct tm date;

    system("CLS");

    time(&temps); /// Affiche l'heure
    date=*localtime(&temps);

    printf("\n\n\n");

    strftime(format, 128, "                 Date  : %A %x\n                 Heure : %X \n                 Vous etes a : Paris\n\n\n", &date);

    puts(format);

    time(&temps);
    date=*gmtime(&temps);

    printf("\n");

    fichier_livre = fopen("livre.csv", "a"); /// Ouvre le fichier livre.csv
    nb_livre = fopen("livre.txt", "r"); /// Ouvre le fichier qui tient le compte du nombre de livres

    if (fichier_livre == NULL) /// Si l'un des deux fichiers ne peut pas être ouvert
    {
        printf("Impossible d'ouvrir le fichier livre");
        system("pause");
        return;
    }

    if (nb_livre == NULL)
    {
        printf("Impossible de tenir le compte des livres");
        system("pause");
        return;
    }

    printf("Combien de livres voulez-vous ajouter ? : "); /// Nombre de livre que le bibliothécaire veut ajouter

    do
    {
        verif = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif != 1 || choix < 0);

    if (choix == 0)
    {
        return;
    }

    for (cpt = 0 ; cpt < choix ; cpt = cpt + 1) /// Pour chaque ouvrage
    {

        printf("Creation du livre %d \n \n", cpt + 1); /// On écrit

        printf("Saisie du titre : "); /// Son titre
        scanf("%s", livre.titre);
        printf("\n");

        printf("Saisie de l'auteur : "); /// Son auteur
        printf("\n");

        printf("- Prenom : ");
        scanf("%s", livre.auteur.prenom);
        printf("\n");

        printf("- Nom : ");
        scanf("%s", livre.auteur.nom);
        printf("\n");

        printf("Saisie du code du livre : "); /// Son code
        printf("\n");

        printf("- Type du livre : ");
        scanf("%s", livre.code_livre.type_livre);
        printf ("\n");

        printf("- Numero du livre : ");
        scanf("%d", &livre.code_livre.numero_livre);
        printf("\n");

        printf("Quantite d'exemplaire au total : "); /// Son nombre d'exemplaire au total
        scanf("%d", &livre.nb_total);

        printf("\n");
        printf("\n");

        fprintf(fichier_livre, "\n"); /// On ecrit les informations dans le fichier .csv

        fprintf(fichier_livre, "%s", livre.titre);
        fprintf(fichier_livre, ";");

        fprintf(fichier_livre, "%s", livre.auteur.nom);
        fprintf(fichier_livre, " ");

        fprintf(fichier_livre, "%s", livre.auteur.prenom);
        fprintf(fichier_livre, ";");

        fprintf(fichier_livre, "%s", livre.code_livre.type_livre);
        fprintf(fichier_livre, "-");

        fprintf(fichier_livre, "%d", livre.code_livre.numero_livre);
        fprintf(fichier_livre, ";");

        fprintf(fichier_livre, "%d", livre.nb_total);
        fprintf(fichier_livre, ";");

    }

    fscanf(nb_livre, "%d", &nb_actuel);

    fclose(nb_livre);

    nb_livre = fopen("livre.txt", "w+");

    if (nb_livre == NULL)
    {
        printf("Impossible de tenir le compte des livres");
        return;
    }

    fprintf(nb_livre, "%d", cpt + nb_actuel); /// On met à jour le fichier .txt

    fclose(nb_livre);
    fclose(fichier_livre);
    return;
}


