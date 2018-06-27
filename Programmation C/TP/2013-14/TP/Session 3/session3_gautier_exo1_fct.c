#include <stdio.h>
#include <stdlib.h>

int recup_n ()
{
    int n;
    int verif;

    printf("Combien de valeurs voulez-vous entrer ? \n");
    do
    {
        printf("Nombres de valeurs : ");
        verif = scanf("%d", &n);
        scanf ("%*[^\n]");
        getchar ();
        printf("\n");
    }
    while (verif != 1 || n < 1);

    return n;
}

int alloc_tab (int n)
{
    char* tab_c = NULL;

    tab_c = malloc(n * sizeof(char));

    if (tab_c == NULL)
    {
        printf("Allocation impossible");
        return -1;
    }

    return &tab_c;
}

void libe_tab (int* tab_c)
{
    free(tab_c);
    return;
}


void remplir_tab (int* tab_c, int n)
{
    int cpt;
    char valeur;

    cpt = 0;

    for (cpt = 0 ; cpt < n ; cpt = cpt + 1)
    {
        printf("Caractere %d", cpt + 1);
        printf(" : ");
        scanf("%c", &valeur);
        tab_c [cpt] = valeur;
    }
}

void aff_tab (int* tab_c, int n)
{
    int cpt;

    for (cpt = 0 ; cpt < n ; cpt = cpt + 1)
    {
        printf("%c", tab_c [cpt]);
    }

    return;
}

void tirage_alea (int* tab_c, int n)
{
    int random;

    random = rand() % n;

    printf("Le caractere de la case %d ", random);
    printf("est : %c", tab_c [random]);

    return;
}
