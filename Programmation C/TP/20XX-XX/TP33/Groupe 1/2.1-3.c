#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Date Date;
struct Date
{
    int jour, mois, annee;
};

void saisirDate(Date *date)
{
    do {
        printf("Saisissez l'annee :\n");
        scanf(" %d", &date->annee);
    } while (date->annee < 1);

    do {
        printf("Saisissez le mois :\n");
        scanf(" %d", &date->mois);
    } while (date->mois < 1 || date->mois > 12);

    do {
        printf("Saisissez le jour :\n");
        scanf(" %d", &date->jour);
    } while (date->jour < 1 || date->jour > 31);
}

void afficherDate(Date date)
{
    printf("Date: %d/%d/%d", date.jour, date.mois, date.annee);
}

int main()
{
    Date date;

    saisirDate(&date);

    afficherDate(date);

    return 0;
}
