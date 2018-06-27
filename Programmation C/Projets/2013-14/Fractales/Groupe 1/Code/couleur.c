#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ccouleur(char* degrade1, char* degrade2, char* degrade3, char* degrade4, char* degrade5) /// Fonction qui va définir le choix des couleurs
{
    int choix; /// Stocke l'entier voulu par l'user
    int choixtmp; /// Vérifie si l'entrée est de bon type
    char concat1 [4]; /// Sert à stocker l'entier pour qu'il soit concatene aux autres afin d'avoir la bonne définition de couleurs

    printf("Choisissez vos couleurs : Il en faut 5 \n"); /// Explique a l'user ce qu'il va faire
    printf("Chacune des couleurs sera composee de 3 nombres a 3 chiffres (de 000 a 255) \n"); /// Precise ce que l'user doit entrer

    do
    {
        printf("Premiere couleur : premier nombre : \n"); /// Couleur 1 : Nombre 1
        printf("Volonte : "); /// Quelle valeur est voulue ?
        choixtmp = scanf("%d", &choix); /// On saisit la valeur
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0); /// Tant que on a pas entre un entier ou que celui-ci n'est pas compris entre 0 et 255, on redemande

    sprintf(degrade1, "%d ", choix); /// On ecrit dans le tableau qui contiendra la premiere couleur la premiere valeur

/// /// /// /// ////////////////////////////////////////////////////////

   do
    {
        printf("Premiere couleur : second nombre : \n"); /// Couleur 1 : Nombre 2
        printf("Volonte : "); /// Quelle valeur est voulue ?
        choixtmp = scanf("%d", &choix); /// On saisit la valeur
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0); /// Tant que on a pas entre un entier ou que celui-ci n'est pas compris entre 0 et 255, on redemande


    sprintf(concat1, "%d ", choix); /// On ecrit dans un tableau tierce la seconde valeur
    strcat(degrade1, concat1); /// On concatene ce second tableau au premier

/// /// /// /// ////////////////////////////////////////////////////////

    do
    {
        printf("Premiere couleur : troisieme nombre : \n"); /// Couleur 1 : Nombre 3
        printf("Volonte : "); /// Quelle valeur est voulue ?
        choixtmp = scanf("%d", &choix); /// On saisit la valeur
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0); /// Tant que on a pas entre un entier ou que celui-ci n'est pas compris entre 0 et 255, on redemande

    sprintf(concat1, "%d ", choix); /// On ecrit dans le tableau tierce la troisieme valeur (qui ecrase la valeur deja presente)
    strcat(degrade1, concat1); /// On reconcatene. On a alors la valeur de la couleur dans le tableau degrade1

/// /// /// /// //////////////////////////////////////////////////////// On recommence les memes etapes avec un second tableau (degrade2)
/// /// /// /// ////////////////////////////////////////////////////////

    do
    {
        printf("Seconde couleur : premier nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(degrade2, "%d ", choix);

/// /// /// /// ////////////////////////////////////////////////////////

   do
    {
        printf("Seconde couleur : second nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(concat1, "%d ", choix);
    strcat(degrade2, concat1);

/// /// /// /// ////////////////////////////////////////////////////////

    do
    {
        printf("Seconde couleur : troisieme nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(concat1, "%d ", choix);
    strcat(degrade2, concat1);

/// /// /// /// //////////////////////////////////////////////////////// On recommence les memes etapes avec un troisieme tableau (degrade3)
/// /// /// /// ////////////////////////////////////////////////////////

    do
    {
        printf("Troisieme couleur : premier nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(degrade3, "%d ", choix);

/// /// /// /// ////////////////////////////////////////////////////////

   do
    {
        printf("Troisieme couleur : second nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(concat1, "%d ", choix);
    strcat(degrade3, concat1);

/// /// /// /// ////////////////////////////////////////////////////////

    do
    {
        printf("Troisieme couleur : troisieme nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(concat1, "%d ", choix);
    strcat(degrade3, concat1);

/// /// /// /// //////////////////////////////////////////////////////// On recommence les memes etapes avec un quatrieme tableau (degrade4)
/// /// /// /// ////////////////////////////////////////////////////////

    do
    {
        printf("Quatrieme couleur : premier nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(degrade4, "%d ", choix);

/// /// /// /// ////////////////////////////////////////////////////////

   do
    {
        printf("Quatrieme couleur : second nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(concat1, "%d ", choix);
    strcat(degrade4, concat1);

/// /// /// /// ////////////////////////////////////////////////////////

    do
    {
        printf("Quatrieme couleur : troisieme nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(concat1, "%d ", choix);
    strcat(degrade4, concat1);

/// /// /// /// //////////////////////////////////////////////////////// On recommence les memes etapes avec un dernier tableau (degrade5)
/// /// /// /// ////////////////////////////////////////////////////////

    do
    {
        printf("Cinquieme couleur : premier nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(degrade5, "%d ", choix);

/// /// /// /// ////////////////////////////////////////////////////////

   do
    {
        printf("Cinquieme couleur : second nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(concat1, "%d ", choix);
    strcat(degrade5, concat1);

/// /// /// /// ////////////////////////////////////////////////////////

    do
    {
        printf("Cinquieme couleur : troisieme nombre : \n");
        printf("Volonte : ");
        choixtmp = scanf("%d", &choix);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (choixtmp != 1 || choix > 255 || choix < 0);

    sprintf(concat1, "%d ", choix);
    strcat(degrade5, concat1);

    return; /// Il n'y a pas besoin de sortie puisque les tableaux ont ete modifies
}

void Acouleur(FILE* fichier, int stock, int volonte, char* degrade1, char* degrade2, char* degrade3, char* degrade4, char* degrade5)
{

    int couleur;

    if (stock == -1) /// Si on a fait toutes les iterations, le point appartient a la fractale
    {
        fputs("0 0 0 ", fichier); /// On afficher le pixel en noir
    }

    else /// Sinon
    {
        if (volonte == 2 || volonte == 3 || volonte == 4) /// Si l'user a demande une fractale chromatique
        {
            couleur = 55 + stock % 170; /// On definit une variable qui servira a afficher la couleur
            if (volonte == 2) /// Si l'user a demande du vert
            {
                fprintf(fichier, "0 %d ", couleur); /// On affiche du vert
                fprintf(fichier, "0 ");
            }

            else if (volonte == 3) /// Si l'user a demande du bleu
            {
                couleur = 55 + stock % 170; /// On modifie la couleur l'affichage etant trop sombre sinon
                fprintf(fichier, "0 0 %d ", couleur); /// On affiche du bleu
            }

            else if (volonte == 4) /// Si l'user a demande du rouge
            {
                fprintf(fichier, "%d ", couleur); /// On affiche du rouge
                fprintf(fichier, "0 0 ");
            }
        }

        else if (volonte == 1) /// Si l'user a demande du blanc
        {
            couleur = 255 - stock % 255;
            fprintf(fichier, "%d ", couleur); /// On fait un degrade de blanc
            fprintf(fichier, "%d ", couleur);
            fprintf(fichier, "%d ", couleur);
        }

        else
        {
            if (1 <= stock && stock < 20) /// En fonction du nombre d'iterations fait, on fait un degrade
            {
                fprintf(fichier, degrade1); /// On affiche la couleur 1 pour le plus petit nombre d'iterations
            }

            else if ((20 <= stock && stock < 60) || (120 <= stock && stock < 140) || (180 <= stock && stock < 200) || (260 <= stock && stock < 280) || (340 <= stock && stock < 360) || (420 <= stock && stock < 440))
            {
                fprintf(fichier, degrade2); /// La couleur 2 ensuite
            }

            else if ((60 <= stock && stock < 80) || (140 <= stock && stock < 160) || (200 <= stock && stock < 220) || (280 <= stock && stock < 300) || (360 <= stock && stock < 380) || (440 <= stock && stock < 460))
            {
                fprintf(fichier, degrade3); /// La couleur 3 apres
            }

            else if ((80 <= stock && stock < 100) || (160 <= stock && stock < 180) || (220 <= stock && stock < 240) || (300 <= stock && stock < 320) || (380 <= stock && stock < 400) || (460 <= stock && stock < 480))
            {
                fprintf(fichier, degrade4); /// Puis la couleur 4
            }

            else
            {
                fprintf(fichier, degrade5); /// Et enfin la couleur 5. Puis on reboucle
            }
        }
    }

    return; /// Il n'y a pas de sortie puisque c'est de l'ecriture dans un fichier
}
