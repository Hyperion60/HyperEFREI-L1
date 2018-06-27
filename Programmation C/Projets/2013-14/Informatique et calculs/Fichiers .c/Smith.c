#include <stdio.h>
#include <stdlib.h>

int main()
{
    int recherche; /// Nombre que l'on étudie
    int n; /// Utiliser dans la boucle de calcul des nombres premiers
    int unit; /// Stocke le nombre des unités
    int diz; /// Stocke le nombre des dizaines
    int cent; ///Stocke le nombre des centaines
    int stockpremier [170]; /// Stocke les nombres premiers < 1000
    int indice; /// Indice du tableau des nombres premiers
    int ind2; /// Indice du tableau des nombres premiers
    int ind3; /// Indice du tableau des nombres de Smith
    int ind4; /// Permet la détection des jumeaux
    int tabSmith [49]; /// Servira à stocker les nombres de Smith
    int premier; /// Sert à définir si un nombre est premier ou pas
    int quotient; /// Variable stockant le nombre que l'on étudie
    int somme; /// Somme diviseurs premiers
    int sommeT; /// Somme des unités, dizaines et centaines d'un nombre
    indice = 0;
    ind2 = 0;
    ind3 = 0;
    premier = 0;
    quotient = 0;
    sommeT = 0;

    for (recherche = 2; recherche <= 1000; recherche = recherche + 1) /// Recherche nombres premiers inférieurs à 1000
    {
        premier = 1;
        for (n = 2; n < recherche; n = n + 1)
        {
            if (recherche % n == 0)
            {
                premier = 0;
            }
        }

        if (premier == 1)
        {
            stockpremier [indice] = recherche;
            indice = indice + 1;
        }
    }
    for (recherche = 3 ; recherche < 1000 ; recherche = recherche + 1) /// Parcourt les nombres entre 3 et 1000
    {
        somme = 0;
        indice = 0;
        premier = 0;
        quotient = recherche;
        do /// Recherche les diviseurs premiers
        {
            if (quotient % stockpremier [indice] == 0) /// Si on trouve un diviseur premier
            {
                quotient = quotient / stockpremier [indice];
                if (quotient >= 100) /// Si le nombre étudié est plus grand que 100
                {
                    unit = stockpremier[indice] % 10;
                    diz = ((stockpremier [indice] - unit) / 10) % 10;
                    cent = ((stockpremier [indice] - unit - 10 * diz) / 100) % 10;
                    somme += unit + diz + cent;
                    unit = 0;
                    diz =0;
                    cent = 0;
                }
                else if ( quotient >= 10) /// Si le nombre étudié est plus grand que 10
                {
                unit = stockpremier [indice] % 10;
                diz = ((stockpremier [indice] - unit) / 10) % 10;
                somme += unit + diz;
                unit = 0;
                diz = 0;
                }
                else /// Sinon
                {
                somme += stockpremier [indice];
                }

            }
            else /// Si le nombre n'est pas divisé, on passe au suivant
            {
                indice = indice + 1;
            }
        ind2 = 0;
            do /// Vérifie que le nombre divisé n'est pas premier
            {
                if (quotient == stockpremier [ind2]) /// Si le nombre divisé par un nombre premier est premier
                {
                    premier = 1;
                    if (quotient >= 100) /// Si le nombre étudié est plus grand que 100
                    {
                        unit = quotient % 10;
                        diz = ((quotient - unit) / 10) % 10;
                        cent = ((quotient - unit - 10 * diz) / 100) % 10;
                        somme += unit + diz + cent;
                        unit = 0;
                        diz = 0;
                        cent = 0;
                    }
                    else if (quotient >= 10) /// Si le nombre étudié est plus grand que 10
                    {
                        unit = quotient % 10;
                        diz = ((quotient - unit) / 10) % 10;
                        somme += unit + diz;
                    }
                    else /// Sinon
                    {
                        somme += quotient;
                    }
                }
                ind2 = ind2 + 1;
            }
            while (premier == 0 && ind2 < 170);
        }
        while (premier == 0);
        unit = recherche % 10;
        diz = ((recherche - unit) / 10) % 10;
        cent = ((recherche - unit - 10 * diz) / 100) % 10;
        sommeT = unit + diz + cent;
        ind2 = 0;
        premier = 0;
        indice = 0;
        do /// Vérifie que le nombre n'est pas premier
        {
            if (recherche == stockpremier [ind2]) /// Si le nombre étudié est premier
            {
                premier = 1;
            }
        ind2 = ind2 + 1;
        }
        while (premier == 0 && ind2 != 170);
        if (somme == sommeT && premier == 0) /// Si le nombre étudié n'est pas premier et que la somme de ses chiffres vaut la somme des chiffres de ses facteurs premiers
        {
            printf("\n");
            printf("%d", recherche);
            printf(" est un nombre de Smith\n");
            printf("\n");
            system("pause");
            tabSmith [ind3] = recherche;
            ind3 = ind3 + 1;
        }
    }
    printf("\n");
    printf("Il y a %d", ind3); /// Affiche le nombre de nombres de Smith trouvés
    printf(" nombres de Smith inferieurs a 1000 \n");
    printf("\n");
    system("pause");
    recherche = 0;
    ind4 = 0;
    for (ind4 = 0 ; ind4 < ind3 ; ind4 = ind4 + 1) /// Recherche les nombres jumeaux
    {
        if (recherche + 1 == tabSmith [ind4])
        {
            printf("\n");
            printf("%d", recherche);
            printf(" et %d", tabSmith [ind4]);
            printf(" sont des nombres de Smith jumeaux \n");
            printf("\n");
            system("pause");
        }
        recherche = tabSmith [ind4];
    }
    return 0;
}
