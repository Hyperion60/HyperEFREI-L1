#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n; /// Sert au stockage dans les tableaux
    int resul_saism; /// Saisie s�curis�e borne inf�rieure
    int resul_saisM; /// Saisie s�curis�e borne sup�rieure
    int resul_saisn; /// Saisie s�curis�e nombre de points
    int npoint; /// Nombre de points
    int cpt; /// Sert au calcul de la factorielle
    int cpt2; /// Sert au calcul de la puissance
    int i; /// Sert au calcul de l'exponentielle
    int j; /// Permet de borner les calculs de factorielles et de puissance
    double total; /// Sert � stocker le r�sultat final
    double facto; /// Sert � stocker la factorielle
    float y; /// Image de x par f
    float mini; /// Borne inf�rieure
    float maxi; /// Borne sup�rieure
    float pas; /// Pas d'�chantillonage
    float x; /// Valeur dont on cherche l'image
    float x1; /// Sert au calcul de la puissance
    float somme; /// Variable de calcul interm�diaire
    float* tabx; /// Sert � stocker les x
    float* taby; /// Sert � stocker les y
    tabx = NULL;
    taby = NULL;
    n = 0;
    FILE *f;
    do /// Saisie de la borne inf�rieure
    {
        printf("Quelle est la borne minimale de l'intervalle de valeurs ? ");
        resul_saism = scanf("%f", &mini);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (resul_saism != 1);
    do /// Saisie de la borne sup�rieure
    {
        printf("Quelle est la borne maximale de l'intervalle de valeurs ? ");
        resul_saisM = scanf("%f", &maxi);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (resul_saisM != 1 || maxi <= mini);
    do /// Saisie du nombre de point
        {
            printf("Combien de points voulez-vous ? ");
            resul_saisn = scanf("%d", &npoint);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
    while (resul_saisn != 1 || npoint <= 1);
    pas = (maxi - mini)/((npoint*1.0) - 1); /// D�finition du pas
    tabx = malloc(npoint * sizeof(float)); /// D�finition des tableaux qui serviront � stocker x et y
    taby = malloc(npoint * sizeof(float));
    for (x = mini ; x <= maxi ; x = x + pas) /// Boucle de calcul
    {
        tabx [n] = x;
        y = 1;
        cpt = 1;
        cpt2 = 1;
        x1 = 1;
        for (i = 1; i <= 20 ; i = i + 1) /// Pour avoir une pr�cision suffisante
        {
            j = i - 1;
            facto = 1;
            for (cpt = 1 ; cpt <= j ; cpt = cpt + 1) /// Calcul de (i - 1)!
            {
                facto = facto * cpt;
            }
            while (cpt2 <= j) /// Calcul de x^i - 1
            {
                 x1 = x1 * x;
                 cpt2 = cpt2 + 1;
            }
            somme = x1 / facto;
            total = ((x / i)*(somme));
            y += total; /// Somme de tous les "total"
        }
         if (x == 0) /// Calcul de exponentielle 0
            {
                y = 1;
            }
        taby [n] = y;
        n = n + 1;

    }
    for (n = 0 ; n < npoint ; n = n + 1) /// Affiche x et y
    {
        printf("x = %f", tabx [n]);
        printf("f(x) = %lf\n", taby [n]);
    }
   f=fopen("Exponentielle.csv", "w"); /// Ouverture du fichier csv dans lequel on va �crire les valeurs

    if(f==NULL)
        {
        printf("erreur lors de l'ouverture du fichier");
        }
    for (n = 0 ; n < npoint ; n = n + 1) /// Remplissage du fichier
    {
        fprintf(f, "%lf", tabx [n]);
        fprintf(f, ";");
        fprintf(f, "%lf\n", taby [n]);
    }
    system("pause");

    fclose(f);
    return 0;
}
