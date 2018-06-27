#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /// CALCUL DE LA FONCTION sqrt (x)
    int n; /// Sert au stockage dans les tableaux
    int resul_saism; /// Pour la saisie s�curis�e de la borne inf�rieure
    int resul_saisM; /// Pour la saisie s�curis�e de la borne sup�rieure
    int resul_saisn; /// Pour la saisie s�curis�e du nombre de points
    int npoint; /// Nombre de points
    int ite; /// Repr�sente le nombre d'it�rations
    float mini; /// Borne inf�rieure
    float maxi; /// Borne sup�rieure
    float pas; /// Pas d'�chantillonage
    float un; /// Permet le calcul de la suite
    float un1; /// Permet le calcul de la suite
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
        printf("Quelle est la borne minimale de l'intervalle de valeurs ? (>= 0) ");
        resul_saism = scanf("%f", &mini);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (resul_saism != 1 || mini < 0);
    do /// Saisie de la borne sup�rieure
    {
        printf("Quelle est la borne maximale de l'intervalle de valeurs ? (>= 0) ");
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
    pas = (maxi - mini)/((npoint*1.0) - 1); /// D�finition du pas
    tabx = malloc(npoint * sizeof(float)); /// D�finition des tableaux dynamiques stockant x et y
    taby = malloc(npoint * sizeof(float));
    for (x = mini ; x <= maxi ; x = x + pas) /// Boucle de calcul
    {
        tabx [n] = x;
        un1 = x;
        for (ite = 1 ; ite <= 15 ; ite = ite + 1) /// Calcul de la suite
        {
            un = ((un1 * un1) + x)/(2 * un1);
            un1 = un;
        }
        y = un;
        if (x == 0) /// Racine de 0
        {
            y = 0;
        }
        taby [n] = y;
        n = n + 1;
    }
    for (n = 0 ; n < npoint ; n = n + 1) /// Affichage de x et de y
    {
        printf("x = %f", tabx [n]);
        printf(" f(x) = %f", taby [n]);
        printf("\n");
    }

    f=fopen("Racine.csv", "w"); /// Ouverture du fichier csv dans lequel on va �crire les valeurs

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
