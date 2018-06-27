#include <stdio.h>
#include <stdlib.h>
#define N 16

typedef struct Voiture Voiture;
struct Voiture
{
    char constructeur[N], modele[N];
    int annee, kilometrage;
    double primeAssurance;
};

void saisirVoiture(Voiture *voiture);
void afficherVoiture(Voiture voiture);

int main()
{
    Voiture voiture;

    saisirVoiture(&voiture);

    afficherVoiture(voiture);

    return 0;
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
}

void afficherVoiture(Voiture voiture)
{
    printf("Votre voiture a ete fabriquee par %s, c'est un modele %s de "
           "%d ayant parcouru %d kilometres. Sa prime assurance est de %.2f euros.",
           voiture.constructeur, voiture.modele, voiture.annee,
           voiture.kilometrage, voiture.primeAssurance);
}
