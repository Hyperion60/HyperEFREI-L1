#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /// CALCUL DE LA FONCTION 3x² + 2x + 1
    int n; /// Sert au stockage dans les tableaux
    int resul_saism; /// Pour la saisie sécurisée de la borne inférieure
    int resul_saisM; /// Pour la saisie sécurisée de la borne supérieure
    int resul_saisn; /// Pour la saisie sécurisée du nombre de points
    int npoint; /// Nombre de points
    float mini; /// Borne inférieure
    float maxi; /// Borne supérieure
    float pas; /// Pas d'échantillonage
    float x; /// Valeur de x qui entre dans le calcul
    float y; /// Valeur qui ressort du calcul, f(x)
    float* tabx; /// Tableau qui servira à stocker les x
    float* taby; /// Tableau qui servira à stocker les y
    tabx = NULL;
    taby = NULL;
    n = 0;
    FILE *f;
    do /// Saisie de la borne inférieure
    {
        printf("Quelle est la borne inferieure de l'intervalle de valeurs ? ");
        resul_saism = scanf("%f", &mini);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (resul_saism != 1);
    do /// Saisie de la borne supérieure
    {
        printf("Quelle est la borne superieure de l'intervalle de valeurs ? ");
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
    pas = (maxi - mini)/((npoint*1.0)-1); /// Définition du pas
    tabx = malloc(npoint * sizeof(float)); /// Définition des tableaux dynamiques stockant x et y
    taby = malloc(npoint * sizeof(float));
    for (x = mini ; x <= maxi ; x = x + pas) /// Boucle de calcul
    {
        tabx [n] = x;
        y = 3*x*x + 2*x + 1;
        taby [n] = y;
        n = n + 1;
    }
    for (n = 0 ; n < npoint ; n = n + 1) /// Affichage de x et de y
    {
        printf("x = %f", tabx [n]);
        printf(" f(x) = %f", taby [n]);
        printf("\n");
    }

    f=fopen("Polynome deg(2).csv", "w"); /// Ouverture du fichier csv dans lequel on va écrire les valeurs

    if(f==NULL)
        {
        printf("Erreur lors de l'ouverture du fichier");
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
