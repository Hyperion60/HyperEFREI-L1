#include <iostream>

using namespace std;

long  * copie_tab(long tab[], long util);
void affich_tab(long tab[], long t_ut);

int main()
{
    long tablo[100] = {1,2,3,4,5,6,7,8};
    long util;
    long * resultat;


    util = 8;

    resultat = copie_tab(tablo, util);

    cout << "dans main: tablo = " << tablo << endl;
    affich_tab(tablo, util);

    cout << "dans main: resultat = " << resultat << endl;
    affich_tab(resultat, util);
}


long  *copie_tab(long tab[], long util)
{
    long tab_res[100];

    cout << "tab_res = " << tab_res << endl;
    long cpt;

    for(cpt=0; cpt<util; cpt++)
    {
        tab_res[cpt] = tab[cpt];
    }

    cout << "dans copie_tab: tab_res = ";
    affich_tab(tab_res, util);
    return tab_res;
}

void affich_tab(long tab[], long t_ut)
{
    long cpt;

    for(cpt=0; cpt<t_ut; cpt++)
    {
        cout << tab[cpt] << ' ';
    }
    cout << endl;
}

