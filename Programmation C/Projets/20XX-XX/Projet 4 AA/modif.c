#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include "manipulation.h"

void emprunt()
{
    int nb_jour;
    int verif;

    time_t temps;
    struct tm date;

    time(&temps);
    date=*gmtime(&temps);

    t_emprunter emprunt;

    printf("Pour combien de jours voulez-vous emprunter l'ouvrage ? \n");

    do
    {
        printf("Duree : ");
        verif = scanf("%d", &nb_jour);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif != 1 || nb_jour < 0 || nb_jour > 14);

    printf("Entrez la reference de l'ouvrage : \n");
    printf("Type du livre : ");
    scanf("%s", &emprunt.emprunt_1.type_livre);
    printf("\n");
    printf("Numero du livre : ");
    scanf("%d", emprunt.emprunt_1.numero_livre);


    emprunt.date_1.jour = date.tm_mday;
    emprunt.date_1.mois = date.tm_mon;
    emprunt.date_1.annee = date.tm_year;

    emprunt.date_2.jour = ((emprunt.date_1.jour+nb_jour)%31);

    if (emprunt.date_1.jour+14 > 30)
    {
        emprunt.date_2.mois = ((emprunt.date_1.mois+2)%12);
    }

    else
    {
        emprunt.date_2.mois = emprunt.date_1.mois-1;
    }

    if (emprunt.date_2.mois+1 > 12)
    {
        emprunt.date_2.annee = emprunt.date_1.annee+1;
    }

    else
    {
        emprunt.date_2.annee = emprunt.date_1.annee;
    }

    printf("Vous avez demande le livre de reference : %s", emprunt.emprunt_1.type_livre);
    printf(" - %d", emprunt.emprunt_1.numero_livre);
    printf("\n");
    printf("Vous pouvez l'avoir jusqu'au %d", emprunt.date_2.jour);
    printf(" / %d", emprunt.date_2.mois);
    printf(" / %d", emprunt.date_2.annee - 100);

    return;
}

void retour()
{
    t_restitution restitution;

    printf("Entrez la reference de l'ouvrage : \n");
    printf("Type du livre : ");
    scanf("%s", &restitution.emprunt.type_livre);
    printf("\n");
    printf("Numero du livre : ");
    scanf("%d", restitution.emprunt.numero_livre);

    printf(" \n Le retour a bien ete note, merci a vous");

    return;
}
