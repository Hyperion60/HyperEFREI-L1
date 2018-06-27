#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
    D�clararation des types Date et Voiture
*/

typedef struct
{
    unsigned int jour;
    unsigned int mois;
    unsigned int annee;
} Date;

typedef struct
{
    unsigned int annee_fabrication;
    unsigned int nbre_km;
    Date mise_en_circulation;
    double prime_assurance;
    char constructeur[16];
    char modele[16];
} Voiture;

/**
    D�clarations prototypes des fonctions
*/

void saisirDate(Date * date);
void afficherDate(const Date date);
void saisirVoiture(Voiture * voiture);
void afficherVoiture(const Voiture voiture);
double calculKmAnnuel(const Voiture voiture);

/**
    D�finitions des fonctions
*/

/** La saisie est contr�l�e par des do ... while(); */
void saisirDate(Date * date)
{
    do
    {
        printf("Entrez le jour (entre 1 et 31 compris) :");
        scanf("%u", &date->jour);
    }
    while (date->jour < 1 || date->jour > 31);

    do
    {
        printf("Entrez le numero du mois (entre 1 et 12 compris) :");
        scanf("%u", &date->mois);
    }
    while (date->mois < 1 || date->mois > 12);

    do
    {
        printf("Entrez l'annee (superieur a 0) :");
        scanf("%u", &date->annee);
    }
    while (date->annee < 1);
}


void afficherDate(const Date date)
{
    printf("Date de mise en circulation : %u/%u/%u \n", date.jour, date.mois, date.annee);
}


void saisirVoiture(Voiture * voiture)
{
    printf("Quel est le nom du constructeur ?\n");
    scanf("%s", &voiture->constructeur[0]);

    printf("Quel est le nom du modele ?\n");
    scanf("%s", &voiture->modele[0]);

    printf("Quelle est l'annee de fabrication ?\n");
    scanf("%u", &voiture->annee_fabrication);

    printf("Combien de km ?\n");
    scanf("%u", &voiture->nbre_km);

    printf("Quel est le montant de la prime d'assurance ?\n");
    scanf("%lf", &voiture->prime_assurance);

    printf("Formulaire pour remplir la date de mise en circulation du v�hicule :\n");
    saisirDate(&voiture->mise_en_circulation);
}


void afficherVoiture(const Voiture voiture)
{
    printf("Nom du constructeur : %s \n", voiture.constructeur);
    printf("Nom du modele : %s \n", voiture.modele);
    printf("Annee de fabrication : %u \n", voiture.annee_fabrication);
    printf("Nombre de km : %u \n", voiture.nbre_km);
    printf("Montant de la prime : %.2f \n", voiture.prime_assurance);
    afficherDate(voiture.mise_en_circulation);
}


double calculKmAnnuel(const Voiture voiture)
{
    double km_annuel_moyen = 0;
    int difference_mois = 0;

    /** Utilisation de la biblioth�que TIME pour avoir le mois et l'ann�e courante */

    time_t secondes;
    struct tm instant;

    /** Permet d'obtenir le nombre de secondes �coul�es depuis le 1/1/1900, et de l'affecter � secondes */
    time(&secondes);

    /** Formate le nbre de secondes pour afficher l'ann�e et le mois courant */
    instant = *localtime(&secondes);

    /**  tm_year donnera le nombre d'ann�es �coul�es depuis 1900 (donc 114 pour 2014).
        On ajoute 1899 et on multiplie le tout par 12.
        On ajoute le nombre de mois de l'ann�e actuelle (la 1900�me ann�e manquante).
        Ceci nous donne le nombre de mois �coul�s depuis l'an 0 � partir de la date d'aujourd'hui.

        A cela, on va retrancher le nombre de mois �coul�s depuis l'an 0 � partir de la date de mise en circulation du v�hicule.
        (m�me principe que la premi�re partie de la formule).

        difference_mois repr�sente donc le nombre de mois s�parant la date d'aujourd'hui � la date de mise en circulation du v�hicule.
    */
    difference_mois = (instant.tm_year + 1899) * 12 + instant.tm_mon
                            - (voiture.mise_en_circulation.annee - 1) * 12
                            - voiture.mise_en_circulation.mois + 1;
printf("%d\n", difference_mois );
    /** Le nombre de km total est divis� par le nombre de mois s�parant la date d'aujourd'hui � la date de mise en
        circulation du v�hicule.
        Ceci nous donne le km moyen mensuel. On multiplie donc par 12.
    */
    km_annuel_moyen = (voiture.nbre_km / (double)difference_mois) * 12.0;

    return km_annuel_moyen;
}


/**
    Fonction principale
*/

int main()
{
    Voiture voiture;

    printf("-------------------------------------------------------\n");
    printf("SAISIE DES INFORMATIONS SUR LA VOITURE\n");
    printf("-------------------------------------------------------\n\n");

    saisirVoiture(&voiture);

    printf("-------------------------------------------------------\n");
    printf("AFFICHAGE DES INFORMATIONS SUR LA VOITURE\n");
    printf("-------------------------------------------------------\n\n");

    afficherVoiture(voiture);

    printf("-------------------------------------------------------\n");
    printf("CALCUL DU NOMBRE DE KM ANNUEL MOYEN\n");
    printf("-------------------------------------------------------\n\n");

    printf("%.2f kms", calculKmAnnuel(voiture));

    return 0;
}
