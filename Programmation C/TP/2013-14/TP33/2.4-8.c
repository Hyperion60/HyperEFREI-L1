#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 16

typedef struct Date Date;
typedef struct Voiture Voiture;

void saisirDate(Date *date);
void afficherDate(Date date);
double afficherMoyenne(Voiture voiture);
void saisirVoiture(Voiture *voiture);
void afficherVoiture(Voiture voiture);

struct Date
{
    int jour, mois, annee;
};

struct Voiture
{
    char constructeur[N], modele[N];
    int annee, kilometrage;
    double primeAssurance;
    Date miseEnCirculation;
};

int main()
{
    // Déclaration des types personnalisés
    Date date;
    Voiture voiture;

    // Saisie de la voiture
    saisirVoiture(&voiture);

    // Affichage
    afficherVoiture(voiture);

    return 0;
}

void saisirDate(Date *date)
{
    do {
        printf("Saisissez l'annee de mise en circulation : ");
        scanf(" %d", &date->annee);
    } while (date->annee < 1);

    do {
        printf("Saisissez le mois de mise en circulation, entre 1 et 12 : ");
        scanf(" %d", &date->mois);
    } while (date->mois < 1 || date->mois > 12);

    do {
        printf("Saisissez le jour de mise en circulation, entre 1 et 31 : ");
        scanf(" %d", &date->jour);
    } while (date->jour < 1 || date->jour > 31);
}

void afficherDate(Date date)
{
    printf("Elle a ete mise en circulation le %d/%d/%d\n", date.jour, date.mois, date.annee);
}

double afficherMoyenne(Voiture voiture)
{
    // On commence par chercher les secondes écoulées depuis 1900
    time_t secondesActuelles;
    secondesActuelles = time(NULL);

    // On va maintenant trouver le nombre de secondes écoulées entre la date de mise
    // en circulation et la date calculée ci-dessus, toujours en secondes
    // Inspiré par http://www.epochconverter.com/programming/functions-c.php
    struct tm t;
    time_t t_of_day;
    t.tm_year = voiture.miseEnCirculation.annee - 1900;
    // Mois, attention: Janvier = 0 et non 1 d'où le -1
    t.tm_mon = voiture.miseEnCirculation.mois - 1;
    t.tm_mday = voiture.miseEnCirculation.jour;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;
    t.tm_isdst = -1;        // Is DST on? 1 = yes, 0 = no, -1 = unknown
    t_of_day = mktime(&t);

    // On calcule le nombre de secodnes entre les deux dates
    double secondesDepuis = secondesActuelles-t_of_day;

    // 1 mois = 2 629 743 secondes
    // On en tire le nombre de mois entre la mise en circulation et la date actuelle
    double nombreMois = secondesDepuis / 2629744;

    double kilometrageTotal = voiture.kilometrage;

    // On calcule le kilométrage mensuel
    double kilometresMensuels = kilometrageTotal / nombreMois;

    // On fait une moyenne sur un an
    double kilometresAnnuels = kilometresMensuels * 12;

    // On peut retourner notre résultat!
    return kilometresAnnuels;
}

void saisirVoiture(Voiture *voiture)
{
    printf("Quel est le constructeur ? ");
    scanf("%s", voiture->constructeur);

    printf("Quel est le modele ? ");
    scanf("%s", voiture->modele);

    printf("Quelle est son annee de fabrication ? ");
    scanf("%d", &voiture->annee);

    printf("Quel est son kilometrage ? ");
    scanf("%d", &voiture->kilometrage);

    printf("Quelle est sa prime assurance ? ");
    scanf("%lf", &voiture->primeAssurance);

    saisirDate(&voiture->miseEnCirculation);
}

void afficherVoiture(Voiture voiture)
{
    printf("Votre voiture a ete fabriquee par %s, c'est un modele %s de "
           "%d ayant parcouru %d kilometres. Sa prime assurance est de %.2f euros.\n",
           voiture.constructeur, voiture.modele, voiture.annee,
           voiture.kilometrage, voiture.primeAssurance);
    afficherDate(voiture.miseEnCirculation);
    printf("Elle a parcouru %.2f kilometres en moyenne chaque annee ", afficherMoyenne(voiture));
}
