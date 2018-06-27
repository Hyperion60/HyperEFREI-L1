#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int totalJours;
    printf("Veuillez rentrer le total de jours pour avoir la décomposition voulue \n");
    scanf("%d", &totalJours);

    int jours = (totalJours % 6);
    // Il faut mettre une semaine à 6 jours, sans quoi si totalJours vaut 360, on n"a pas un an exactement!
    int semaines = (totalJours % (30)) / 6;
    int mois = (totalJours % (360)) / (30);
    int annees = (totalJours % (360*100)) / (360);
    int siecles = (totalJours % (360*100*1000)) / (360*100);

    // On compacte les condition en utilisant la forme ternaire
    // On passe le pointeur pour l'afficher
    char *afficheJours = (jours > 1) ? "jours" : "jour";
    char *afficheSemaines = (semaines > 1) ? "semaines" : "semaine";
    char *afficheAnnees = (annees > 1) ? "annees" : "annee";
    char *afficheSiecles = (siecles > 1) ? "siecles" : "siecle";

    printf("%d ", siecles);
    printf("%s ", afficheSiecles);
    printf("%d ", annees);
    printf("%s ", afficheAnnees);
    printf("%d mois ", mois);
    printf("%d ", semaines);
    printf("%s ", afficheSemaines);
    printf("%d ", jours);
    printf("%s ", afficheJours);

    return 0;
}
