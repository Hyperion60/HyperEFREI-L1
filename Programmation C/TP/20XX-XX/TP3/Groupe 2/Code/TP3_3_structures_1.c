#include <stdio.h>
#include <stdlib.h>

/**
    Déclararation du type Voiture (champs rangés par taille croissante par soucis d'optimisation)
*/

typedef struct {
    unsigned int annee_fabrication;
    unsigned int nbre_km;
    double prime_assurance;
    char constructeur[16];
    char modele[16];
} Voiture;

/**
    Déclarations prototypes des fonctions
*/

void saisirVoiture(Voiture * voiture);
void afficherVoiture1(const Voiture voiture);
void afficherVoiture2(const Voiture * voiture);

/**
    Définitions des fonctions
*/

void saisirVoiture(Voiture * voiture)
{
    printf("Quel est le nom du constructeur ?\n");
    scanf("%s", &voiture->constructeur[0]);
    /** OU scanf("%s", voiture->constructeur); */

    printf("Quel est le nom du modele ?\n");
    scanf("%s", &voiture->modele[0]);
    /** OU scanf("%s", voiture->modele); */

    printf("Quelle est l'annee de fabrication ?\n");
    scanf("%u", &voiture->annee_fabrication);

    printf("Combien de km ?\n");
    scanf("%u", &voiture->nbre_km);

    printf("Quel est le montant de la prime d'assurance ?\n");
    scanf("%lf", &voiture->prime_assurance);
}

void afficherVoiture1(const Voiture voiture)
{
    printf("Nom du constructeur : %s \n", voiture.constructeur);
    printf("Nom du modele : %s \n", voiture.modele);
    printf("Annee de fabrication : %u \n", voiture.annee_fabrication);
    printf("Nombre de km : %u \n", voiture.nbre_km);
    printf("Montant de la prime : %.2f \n", voiture.prime_assurance);
}

void afficherVoiture2(const Voiture * voiture)
{
    printf("Nom du constructeur : %s \n", voiture->constructeur);
    printf("Nom du modele : %s \n", voiture->modele);
    printf("Annee de fabrication : %u \n", voiture->annee_fabrication);
    printf("Nombre de km : %u \n", voiture->nbre_km);
    printf("Montant de la prime : %.2f \n", voiture->prime_assurance);
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

    afficherVoiture1(voiture);
    afficherVoiture2(&voiture);

    return 0;
}
