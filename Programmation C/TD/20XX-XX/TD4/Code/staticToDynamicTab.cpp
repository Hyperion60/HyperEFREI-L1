#include <iostream>

using namespace std;

long *  staticToDynamicTab(long * tab, long tailleUtile);
void affich_tab(long tab[], long t_ut);

int main()
{
	long tab[] = {1, 3, 5, 2, 33, 22}; // tableau statique
	long tailleUtile = 6;

	long * p; // tableau dynamique

	p = staticToDynamicTab(tab, tailleUtile); // appel

	affich_tab(p,tailleUtile);

}

// VERSION INDICE
/**
long * staticToDynamicTab(long * tab, long tailleUtile)
{
	long * dyntab;

	dyntab = new long [tailleUtile];

	for (long i = 0; i  < tailleUtile; i++)
	{
		dyntab[i] = tab[i];
	}

	return dyntab;
}
*/

// VERSION N°1 POINTEUR LA MEILLEURE POUR LES TABLEAUX
// pas de cases dans les listes chainées
long * staticToDynamicTab(long * tab, long tailleUtile)
{
	long * dyntab;

	dyntab = new long [tailleUtile];

	for (long * ptr = tab; ptr  < tab + tailleUtile; ptr++, dyntab++)
	{
		*dyntab = *ptr;
	}

    // dyntab est à la fin; on doit reculer de tailleUtile cases
    // ARITHMTIQUE DES POINTEURS
	return dyntab - tailleUtile;
}

// VERSION N°2 POINTEUR OK tableaux
// idée à reprendre pour les listes chaînées
/*
long * staticToDynamicTab(long * tab, long tailleUtile)
{
	long * dyntab;

	dyntab = new long [tailleUtile];

    long * ptr = NULL;
    long * pdyn = NULL;
	for (ptr = tab, pdyn = dyntab; ptr < tab + tailleUtile; ptr++, pdyn++)
	{
		*pdyn = *ptr;
	}

	return dyntab;
}
*/




void affich_tab(long tab[], long t_ut)
{
    long cpt;

    for(cpt=0; cpt<t_ut; cpt++)
    {
        cout << tab[cpt] << ' ';
    }
    cout << endl;
}

