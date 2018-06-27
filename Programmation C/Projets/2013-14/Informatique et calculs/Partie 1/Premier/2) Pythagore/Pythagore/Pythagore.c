#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int divise; /// Diviseur de 1 à racine de nombre
    int premier; /// Critère de primauté
    int nombre; /// Entier en recherche
    int reste; /// Reste
    int compteur; /// De 1 à 10
    int recens [10]; /// Tableau recensant les nombres premiers
    int num; /// Permet l'affichage du tableau
    nombre = 2;
    num = 0;
    compteur = 0;
    do /// Calcul les 10 plus petits nombres premiers
    {
        premier = 1;
        for (divise = 2 ; divise <= nombre/2 ; divise = divise + 1) /// Recherche des 10 plus petit nombres premiers
        {
            reste = nombre % (divise);
            if (reste == 0)
            {
                premier = 0;
            }
        }
        if (premier == 1) /// Sauvegarde le nombre si il est premier
        {
                recens [compteur] = nombre;
                compteur = compteur + 1;
        }
    nombre = nombre + 1;
    }
    while (compteur < 10);
    printf("Les 10 plus petits nombres premiers sont ");
    printf("\n");
    for (num = 0 ; num < 10 ; num = num +1) /// Affiche les résultats trouvés
    {
      printf("%d", recens [num]);
      printf("\n");
    }
    printf("\n");
    system("pause");

    /// Fin premier programme
    printf("\n");

    int n; /// Nécessaire à la recherche des nombres de Pythagore
    int pythagore; /// Stocke l'information Pythagore ou non
    float condition; /// Stocke la valeur du Pythagore
    int pytab [10]; /// Permet de stocker les nombres de Pythagore
    int inter; /// Exécute le calcul 4n + 1
    int indice; /// Indice de pytab pour le stockage
    int utile; /// Permet d'avoir la taille utile de pytab
    indice = 0;
    inter = 0;
    utile = 0;
    for (num = 0 ; num < 10 ; num = num + 1) /// Parmi les nombres premiers trouvés
    {
        pythagore = 0;
        for (n = 1 ; n < 8 ; n = n + 1) /// On vérifie si ils sont divisibles par 4n + 1
        {
            inter = 4*n + 1;
            condition = recens [num] % inter;
            if (condition == 0) /// Si ils le sont, on le montre au programme
            {
                pythagore = 1;
            }
        }
        if (pythagore == 1) /// Si le programme voit que le nombre est de Pythagore, il le stocke dans un tableau
        {
            pytab [indice] = recens [num];
            indice = indice +1;
            utile = utile + 1;
        }
    }
    printf("Les nombres premiers de Pythagore parmi les 10 plus petits nombres premiers sont");
    printf("\n");
    for (indice = 0 ; indice < utile ; indice = indice +1)
    {
        printf("%d", pytab [indice]);
        printf("\n");
    }
    printf("\n");
    system("pause");

    /// Fin de la recherche des nombres de Pythagore

    printf("\n");

    int a; /// Premier nombre de la somme de carrées
    int b; /// Second nombre de la somme de carrés
    int somme; /// Sert à la somme des carrés
    int carre; /// Vérifie le théorème des deux carrées
    a = 1;
    b = 1;
    for (indice = 0 ; indice < utile ; indice = indice +1) /// Parmi les nombres de Pythagore précédemment trouvés
    {
        carre = 0;
        for (a = 1 ; a <= 5 ; a = a + 1) /// On cherche si ils peuvent s'écrire sous la forme de la somme de deux carrés
        {
            for (b = 1 ; b < 3 ; b = b + 1)
            {
                somme = a*a + b*b;
                if (somme == pytab [indice]) /// Si c'est le cas, on le montre au programme
                {
                    carre = 1;
                }
            }
        }
        if (carre == 1) /// Si le programme voit que le nombre peut s'écrire sous la forme de la somme de deux carrés, il affiche que le nombre suit le théorème
        {
            printf("%d", pytab [indice]);
            printf(" suit le theoreme des deux carres ");
            system("pause");
            printf("\n");
        }
        else /// Sinon, il affiche que le nombre ne suit pas le théorème
        {
            printf("%d", pytab [indice]);
            printf(" ne suit pas le theoreme des deux carres ");
            system("pause");
            printf("\n");
        }
    }
    return 0;
}

