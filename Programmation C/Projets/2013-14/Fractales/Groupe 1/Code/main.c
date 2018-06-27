#include <stdio.h>
#include <stdlib.h>
#include "complexe.h"
#include "Ensemble.h"
#include "couleur.h"

int main ()
{
    int x; /// Sert a parcourir la boucle pour traiter toutes les abscisses
    int y; /// Sert a parcourir la boucle pour traiter toutes les ordonnees
    int stock; /// Reçoit le nombre d'iterations renvoyé par les verifications
    int resolution_y; /// Resolution d'ecran et nombres de lignes
    int resolution_x; /// Resolution d'ecran et nombres de colonnes
    int result; /// Permet de verifier si les variables entrees sont de bon type
    int volonte; /// Permet de choisir le caractere colore de la fractale
    int choixfrac; /// Permet de choisir entre Mandelbrot et Julia
    int zoom; /// Définir la valeur du zoom

    float x1; /// xmin du plan complexe
    float x2; /// xmax du plan complexe
    float y1; /// ymin du plan complexe
    float y2; /// ymax du plan complexe

    complexe centre; /// Stockera le point sur lequel on centrera l'ensemble de Julia

    char* degrade1 = NULL; /// Stockeront les couleurs rentrees par l'user
    char* degrade2 = NULL;
    char* degrade3 = NULL;
    char* degrade4 = NULL;
    char* degrade5 = NULL;

    FILE* fichier = NULL; /// Definition du fichier

    degrade1 = malloc(13 * sizeof(char)); /// On alloue a chaque tableau couleur 13 char qui sont la taille max qu'ils pourront atteindre
    degrade2 = malloc(13 * sizeof(char));
    degrade3 = malloc(13 * sizeof(char));
    degrade4 = malloc(13 * sizeof(char));
    degrade5 = malloc(13 * sizeof(char));

    zoom = 1;

    if (degrade1 == NULL || degrade2 == NULL || degrade3 == NULL || degrade4 == NULL || degrade5 == NULL) /// Si un des tableaux ne peut pas etre alloue
    {
        return -1; /// On termine le programme
    }

    else /// Sinon
    {
        do
        {
            printf("Quelle resolution voulez-vous pour la fractale ? (un entier qui represente la hauteur) \n"); /// On demande la resolution
            printf("y = ");
            result = scanf ("%d", &resolution_y);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (result != 1 || resolution_y <= 0);

        resolution_x = resolution_y * 16/9; /// On prevoit un ecran en 16/9, on calcule donc automatiquement la resolution finale

        fichier = fopen("fractale.ppm", "w"); /// On ouvre le fichier dans lequel on va ecrire le code RGB de chaque pixel

        if (fichier == NULL) /// Si le fichier ne peut pas s'ouvrir
        {
            printf("Impossible d'ouvrir le fichier fractale"); /// On le signale
            system("pause");
            return -3; /// On ferme le programme
        }

        /// On presente le fichier comme necessaire

        fprintf(fichier, "P3 \n"); /// Fichier ASCII
        fprintf(fichier, "%d", resolution_x); /// Nombres de colonnes
        fprintf(fichier, " %d \n", resolution_y); /// Nombres de lignes
        fprintf(fichier, "255 \n"); /// Les couleurs sont en 255

        do
        {
            printf("Voulez-vous afficher un ensemble de Julia ou l'ensemble de Mandelbrot ? (1 pour Julia, 2 pour Mandelbrot) \n"); /// On demande le type de fractale voulu (Julia ou Mandelbrot)
            printf("Votre choix : ");
            result = scanf("%d", &choixfrac);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (result != 1 || choixfrac < 1 || choixfrac > 2);

        printf("Entrez les valeurs d'abcisse dans lesquelles doit etre comprise la fractale affichee \n"); /// On demande les valeurs du plan complexe dans lesquelles s'affichera la fractale
        printf("Les valeurs pour afficher toute la fractale : \n");
        printf("Pour Mandelbrot : xmin = -2, xmax = 1, ymin = -1, ymax = 1 \n"); /// On donne les valeurs pour lesquelles les fractales s'affichent entierement
        printf("Pour Julia : xmin = -1.5, xmax = 1.5, ymin = -1.5, ymax = 1.5 \n");

        do /// On ne demande que les abscisses, les ordonnees seront calculees en fonction pour que l'affichage soit propre
        {
            printf("xmin = ");
            result = scanf("%f", &x1);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (result != 1);

        do
        {
            printf("xmax = ");
            result = scanf("%f", &x2);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (result != 1);

        do /// On ne demande que les abscisses, les ordonnees seront calculees en fonction pour que l'affichage soit propre
        {
            printf("ymin = ");
            result = scanf("%f", &y1);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (result != 1);

        do
        {
            printf("ymax = ");
            result = scanf("%f", &y2);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (result != 1);

        printf("Voulez-vous zoomer ? (0 pour oui, 1 pour non) \n");

        do
        {
            printf("Zoom ? : ");
            result = scanf("%d", &volonte);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (result != 1 || volonte < 0 || volonte > 1);

        if (volonte == 0)
        {
            printf("De combien voulez-vous zoomer ? (1 etant le zoom de base) \n");

            do
            {
                printf("Zoom = ");
                result = scanf("%d", &zoom);
                scanf ("%*[^\n]");
                getchar ();
                printf("\n");
            }
            while (result != 1);
        }

        if (choixfrac == 1) /// Si on a demande l'affichage d'un ensemble de Julia
        {
            printf("Entrez les coordonnees du centre de la fractale \n"); /// On demande les coordonnes du point duquel on veut l'ensemble de Julia
            printf("Des ensembles interessants existent pour : \n"); /// On propose quelques points interessants pour que l'user ne tatonne pas
            printf("0.3 0.5 \n");
            printf("0.285 0.01 \n");
            printf("0.285 0.013 \n");
            printf("0.375 0.2 \n");
            printf("0.5 0.25 \n");
            printf("- 0.038088 0.9754633 \n");
            printf("-1.417022285618 0.0099534 \n \n");

            do /// On demande l'abcisse du point (dans le plan complexe)
            {
                printf("Abcisse du centre dans le plan complexe : ");
                result = scanf("%f", &centre.x);
                scanf ("%*[^\n]");
                getchar ();
                printf("\n");
            }
            while (result != 1 || centre.x < -3 || centre.x > 3);

            do /// On demande l'ordonnee du point (dans le plan complexe)
            {
                printf("Ordonnee du centre : ");
                result = scanf("%f", &centre.y);
                scanf ("%*[^\n]");
                getchar ();
                printf("\n");
            }
            while (result != 1 || centre.y < -3 || centre.y > 3);
        }

        do /// On demande les couleurs que l'user veut pour sa fractale
        {
            printf("Voulez-vous une fractale blanche, verte, bleue, rouge ou un degrade de couleurs ? (un entier de 1 a 5, 1 etant le blanc et 5 le degrade) \n");
            printf("Volonte = ");
            result = scanf("%d", &volonte);
            scanf ("%*[^\n]");
            getchar ();
            printf("\n");
        }
        while (result != 1 || (volonte < 1 || volonte > 5));

        if (volonte == 5) /// Si l'utilisateur a demande un degrade
        {
            Ccouleur(degrade1, degrade2, degrade3, degrade4, degrade5); /// On fait rentrer les couleurs voulues par l'utilisateur
        }

        for (y = 0 ; y < resolution_y ; y = y + 1) /// Pour chaque valeur en ordonnee
        {
            for (x = 0 ; x < resolution_x ; x = x + 1) /// Pour chaque valeur en abcisse
            {
                if (choixfrac == 2) /// Si on a demande l'affichage de l'ensemble de Mandelbrot
                {
                    stock = Mandelbrot(x, y, resolution_x, resolution_y, zoom, x1, x2, y1, y2); /// On verifie si le point est dans l'ensemble de Mandelbrot
                }

                else /// Sinon
                {
                    stock = Julia(x, y, resolution_x, resolution_y, zoom, centre, x1, x2, y1, y2); /// On verifie si le point est dans l'ensemble de Julia
                }

                Acouleur(fichier, stock, volonte, degrade1, degrade2, degrade3, degrade4, degrade5); /// On affiche la couleur du point en fonction de ce que la fonction de verification a retourne

            }

            fprintf(fichier, "\n"); /// On signale au fichier que la ligne est finie et qu'on passe a la suivante
    }

    fclose(fichier); /// On ferme le fichier

    free(degrade1); /// On libere chaque tableau
    free(degrade2);
    free(degrade3);
    free(degrade4);
    free(degrade5);

    return 0;

    }
}
