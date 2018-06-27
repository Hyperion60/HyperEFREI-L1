#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "ajout.h"
#define PAR 2

int accueil_biblio() /// Menu d'accueil du bibliothécaire
{
    int choix; /// Sert à l'utilisateur pour exprimer sa volonté
    int verif; /// Verification des scanf

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

    printf("BIENVENUE SUR LE PROGRAMME DE GESTION DE LA BIBLIOTHEQUE\n\n"); /// Présentation et possibilité du menu bibliothécaire
    printf("Que puis-je fais pour vous ?\n");
    printf("Acceder a la base de gestion des adherents ? (1) \n");
    printf("Acceder a la base de gestion des livres ? (2) \n");
    printf("Ou quitter le programme ? (3) \n");

    do /// Que veut faire le bibliothécaire ?
    {
        printf("Que desirez-vous faire : ");
        verif = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif != 1 || choix < 1 || choix > 3);

    if (choix == 3) /// Soit il quitte le programme
    {
        printf("Nous vous souhaitons une agreable journee \n");
        return 3;
    }

    else /// Soit on l'envoie sur le menu suivant
    {
        return (choix);
    }
}

void accueil_user() /// Menu d'accueil de l'utilisateur
{
    int choix; /// Sert à l'utilisateur pour exprimer sa volonté
    int verif; /// Verification des scanf

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

    printf("BIENVENUE SUR LE PROGRAMME DE RECHERCHE D'OUVRAGES DE LA BIBLIOTHEQUE\n\n"); /// Presentation des possibilités pour l'utilisateur
    printf("Que puis-je fais pour vous ?\n");
    printf("Rechercher un livre ? (1) \n");
    printf("Quitter le programme ? (2) \n");

    do /// Que veut faire l'utilisateur ?
    {
        printf("Que desirez-vous faire : ");
        verif = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif != 1 || choix < 1 || choix > 2);

    if (choix == 1) /// Soit il veut chercher un livre
    {
        recherche_livre();
        accueil_user();
    }

    else /// Soit il veut quitter le programme
    {
        return;
    }

}
int livre()
{
    int verif; /// Verification des scanf
    int prog; /// Sert à l'utilisateur pour exprimer sa volonté

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
    printf("Que voulez-vous faire ? \n"); /// Ce que peut faire le bibliothécaire
    printf("Ajouter/Supprimer un livre ? (1) \n");
    printf("Rechercher un livre ? (2) \n");
    printf("Ou retourner a l'accueil ? (3) \n");

    do /// Que veut faire le bibliothécaire ?
    {
        printf("Que desirez-vous faire : ");
        verif = scanf("%d", &prog);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif != 1 || prog < 1 || prog > 3);

    if (prog == 1) /// Si il veut ajouter un adherent
    {
        printf("Voulez-vous faire un ajout ou une suppresion ? \n ");
        printf("Ajout = 1 \n");
        printf("Suppression = 2 \n");
        do
        {
            printf(": ");
            verif = scanf("%d", &prog);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (verif != 1 || prog < 1 || prog > 2);

        if (prog == 1)
        {
            ajout_livre();
        }

        else if (prog == 2)
        {
           /* suppr_livre()*/;
        }

    }
    else if (prog == 2) /// Si il veut rechercher un livre
    {
        recherche_livre();
        prog = livre();
    }

    else if (prog == 3) /// Si il veut retourner à l'accueil
    {
        return 3;
    }
}

int adherent()
{
    int verif; /// Verification des scanf
    int prog; /// Sert à l'utilisateur pour exprimer sa volonté

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

    printf("Que voulez-vous faire ? \n"); /// Ce que peut faire le bibliothécaire
    printf("Ajouter/Supprimer un adherent ? (1) \n");
    printf("Rechercher un adherent ? (2) \n");
    printf("Ou retourner a l'accueil ? (3) \n");

    do /// Que veut faire le bibliothécaire ?
    {
        printf("Que desirez-vous faire : ");
        verif = scanf("%d", &prog);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif != 1 || prog < 1 || prog > 3);

    if (prog == 1) /// Si il veut ajouter un adherent
    {
        printf("Voulez-vous faire un ajout ou une suppresion ? \n");
        printf("Ajout = 1 \n");
        printf("Suppression = 2 \n");
        do
        {
            printf(": ");
            verif = scanf("%d", &prog);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (verif != 1 || prog < 1 || prog > 2);

        if (prog == 1)
        {
            ajout_adherent();
        }

        else if (prog == 2)
        {
            suppr_adherent();
        }

        prog = adherent();
    }

    else if (prog == 2) /// Si il veut chercher un adherent
    {
        recherche_adherent();
        prog = adherent();
    }

    else if (prog == 3) /// Si il veut retourner a l'accueil
    {
        return 3;
    }
}
