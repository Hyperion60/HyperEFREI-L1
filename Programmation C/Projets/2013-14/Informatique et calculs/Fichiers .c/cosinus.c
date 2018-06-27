#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Calcul de la fonction cos (x)
    int n; /// Sert au stockage dans les tableaux
    int resul_saism; /// Pour la saisie s�curis�e de la borne inf�rieure
    int resul_saisM; /// Pour la saisie s�curis�e de la borne sup�rieure
    int resul_saisn; /// Pour la saisie s�curis�e du nombre de points
    int npoint; /// Nombre de points
    int rang; /// Sert au calcul de la fonction
    double somme; /// Sert � additioner les diff�rentes valeurs que l'on trouve successivement
    double cosinus; /// Sert � stocker le r�sultat de chaque calcul
    float mini; /// Borne inf�rieure
    float maxi; /// Borne sup�rieure
    float pas; /// Pas d'�chantillonage
    float x; /// Valeur de x qui entre dans le calcul
    float y; /// Valeur qui ressort du calcul, f(x)
    float* tabx; /// Tableau qui servira � stocker les x
    float* taby; /// Tableau qui servira � stocker les y
    tabx = NULL;
    taby = NULL;
    n = 0;
    FILE *f;
    do /// Saisie de la borne inf�rieure
    {
        printf("Quelle est la borne minimale de l'intervalle de valeurs (entre -41 et 41) ? "); /// La valeur est automatiquement en radian
        resul_saism = scanf("%f", &mini);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (resul_saism != 1);
    do /// Saisie de la borne sup�rieure
    {
        printf("Quelle est la borne maximale de l'intervalle de valeurs (entre -41 et 41, > borne minimale) ? "); /// La valeur est automatiquement en radian
        resul_saisM = scanf("%f", &maxi);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (resul_saisM != 1 || maxi <= mini);
    do /// Saisie du nombre de points
        {
            printf("Combien de points voulez-vous ? ");
            resul_saisn = scanf("%d", &npoint);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
    while (resul_saisn != 1 || npoint <= 1);
    pas = (maxi - mini)/((npoint*1.0) - 1); /// D�finition du pas d'�chantillonage
    tabx = malloc (npoint * sizeof(float)); /// D�finition des tableaux qui stockeront x et y
    taby = malloc (npoint * sizeof(float));
    for (x = mini ; x <= maxi ; x = x + pas) /// Boucle de calcul
    {
        somme = 1;
        cosinus = 1;
        rang = 2;
        tabx [n] = x;
        for (rang = 2 ; rang < 201 ; rang = rang + 2) /// Calcul de la somme ammenant au cosinus par ajout
            {
            cosinus = (cosinus * -(x*x)/(rang * (rang - 1)));
            somme = somme + cosinus;
            }
        y = somme;
        taby [n] = y;
        n = n + 1;
    }
    for (n = 0 ; n < npoint ; n = n + 1) /// Affichage des couples x, f(x)
    {
        printf("x = %f", tabx [n]);
        printf(" f(x) = %f", taby [n]);
        printf("\n");
    }

    f = fopen("Cosinus.csv", "w"); /// Ouverture du fichier o� seront �crits les couples

    if(f == NULL)
        {
        printf("Erreur lors de l'ouverture du fichier");
        }
    for (n = 0 ; n < npoint ; n = n + 1) /// Ecriture des couples dans le fichier
    {
        fprintf(f, "%lf", tabx [n]);
        fprintf(f, ";");
        fprintf(f, "%lf\n", taby [n]);
    }
    system("pause");
    fclose(f);
    return 0;
}
