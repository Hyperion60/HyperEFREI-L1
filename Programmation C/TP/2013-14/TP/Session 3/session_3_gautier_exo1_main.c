#include <stdio.h>
#include <stdlib.h>
#include "session3_gautier_exo1_fct.h"

int main()
{
    int nb_valeur;
    int tab;

    nb_valeur = recup_n();

    tab = alloc_tab(nb_valeur);

    remplir_tab(&tab, nb_valeur);

    aff_tab(&tab, nb_valeur);

    tirage_alea(&tab, nb_valeur); /// Inutile, ne renvoie rien d'intéressant

    libe_tab(&tab);

    return 0;
}
