#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include "manipulation.h"


void ajout_adherent()
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

    time(&temps);
    date=*localtime(&temps);

    printf("\n");

    strftime(format, 128, "%A %x\n%X Paris\n", &date);
    puts(format);

    time(&temps);
    date=*gmtime(&temps);

    printf("\n");

    fichier_adherent = fopen("adherent.csv", "a");
    nb_adherent = fopen("adherent.txt", "r");

    if (fichier_adherent == NULL)
    {
        printf("Impossible d'ouvrir le fichier adherent");
        return;
    }

    if (nb_adherent == NULL)
    {
        printf("Impossible de tenir le compte des adherents");
        return;
    }

    printf("Combien d'adherents voulez-vous ajouter ? : ");

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

    for (cpt = 0 ; cpt < choix ; cpt = cpt + 1)
    {

        printf("Creation de l'adherent %d \n \n", cpt + 1);

        printf("Saisie du prenom : ");
        scanf("%s", adherent.prenom);
        printf("\n");

        printf("Saisie du nom : ");
        scanf("%s", adherent.nom);
        printf("\n");

        printf("Saisie de l'adresse mail : ");
        scanf("%s", adherent.adresse_mail);
        printf("\n");

        printf("Saisie de la profession : ");
        scanf("%s", adherent.profession);
        printf ("\n");

        printf("Saisie de l'adresse postale : ");
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

        fprintf(fichier_adherent, "\n");

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

    fprintf(nb_adherent, "%d", cpt + nb_actuel);

    fclose(nb_adherent);
    fclose(fichier_adherent);

    return;
}

void ajout_livre()
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

    time(&temps);
    date=*localtime(&temps);

    printf("\n");

    strftime(format, 128, "%A %x\n%X Paris\n", &date);
    puts(format);

    time(&temps);
    date=*gmtime(&temps);

    printf("\n");

    fichier_livre = fopen("livre.csv", "a");
    nb_livre = fopen("livre.txt", "r");

    if (fichier_livre == NULL)
    {
        printf("Impossible d'ouvrir le fichier livre");
        return;
    }

    if (nb_livre == NULL)
    {
        printf("Impossible de tenir le compte des livres");
        return;
    }

    printf("Combien de livres voulez-vous ajouter ? : ");

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

    for (cpt = 0 ; cpt < choix ; cpt = cpt + 1)
    {

        printf("Creation du livre %d \n \n", cpt + 1);

        printf("Saisie du titre : ");
        scanf("%s", livre.titre);
        printf("\n");

        printf("Saisie de l'auteur : ");
        printf("\n");

        printf("- Prenom : ");
        scanf("%s", livre.auteur.prenom);
        printf("\n");

        printf("- Nom : ");
        scanf("%s", livre.auteur.nom);
        printf("\n");

        printf("Saisie du code du livre : ");
        printf("\n");

        printf("- Type du livre : ");
        scanf("%s", livre.code_livre.type_livre);
        printf ("\n");

        printf("- Numero du livre : ");
        scanf("%d", &livre.code_livre.numero_livre);
        printf("\n");

        printf("Quantite d'exemplaire au total : ");
        scanf("%d", &livre.nb_total);

        printf("\n");
        printf("\n");

        fprintf(fichier_livre, "\n");

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

    fprintf(nb_livre, "%d", cpt + nb_actuel);

    fclose(nb_livre);
    fclose(fichier_livre);
    return;
}

void suppr_adherent()
{
    int cpt = 0;
    int nb = 0;
    int length = 0;
    int verif = 0;

    char nom [200];
    char delim [] = ";";

    char* to_erase = NULL;
    char* token = NULL;

    t_adherent adherent;

    FILE* fichier_adherent = NULL;
    FILE* nb_adherent = NULL;

    char format[128];
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

    fichier_adherent = fopen("adherent.csv", "r");
    nb_adherent = fopen("adherent.txt", "r");

    if (fichier_adherent == NULL)
    {
        printf("Impossible d'ouvrir le fichier adherent");
        return;
    }

    if (nb_adherent == NULL)
    {
        system("pause");
        printf("Impossible de tenir le compte des adherents");
        return;
    }

    printf("Entrez le nom de l'adherent a supprimer : ");
    scanf("%s", adherent.nom);

    length = strlen(adherent.nom);
    to_erase = malloc(sizeof(char) * (length + 1));

    strcpy(to_erase, adherent.nom);

    fscanf(nb_adherent, "%d", &nb);
    nb = nb + 1;

    for (cpt = 0 ; cpt < nb ; cpt = cpt + 1)
    {
        fscanf(fichier_adherent, "%s", &nom);
        verif = strcmp(nom, to_erase);
        if (verif == 0)
        {
            break;
        }
    }

    /*fseek = (fichier_adherent, position, SEEK_SET);*/

    /*
    token = strtok(nom, delim);
    while (token != NULL)
    {
        token = strtok(NULL, delim);
        printf("%s", token);
        system("pause");
    }
    */

/*
    do
    {
        fgets(nom, length + 1, fichier_adherent);
        fscanf(fichier_adherent, "%d;", nom);
        printf("%s", nom);
        system("pause");
        verif = strcmp(nom, to_erase);
        cpt = cpt + 1;
    }
    while (cpt < nb && verif != 0);
*/
    if (cpt == nb)
    {
        printf("Adherent non trouve");
        system("pause");
    }

    else if (verif == 0)
    {
        printf("Adherent trouve a la ligne %d", cpt);
        system("pause");
    }

    fclose(fichier_adherent);
    fclose(nb_adherent);

    return;
}
