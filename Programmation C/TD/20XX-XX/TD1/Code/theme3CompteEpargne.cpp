#include <iostream>
#include <iomanip> // les manipulateurs du C++ cf fixed et setprecision
#include <math.h>
using namespace std;

int main()
{
    long i = 0;
    double M,m;
    const double tauxSemestriel = .045;
    const double tauxTaxe = .023;
    const double fraisGestion = 28.75;
    const double seuil = 6000;
    const double plafond = 12000;

    cout << fixed << setprecision(2);
    cout << "Bienvenue dans votre gestion de compte d'epargne." << endl;
    cout << "Entrez votre montant de depart : ";

    do
    {
        cout << "Une somme raisonnable (au moins 15 euros)!" << " Quel montant ? : ";
        cin >> M;
    } while (M < 15);
    cout << "Bien, vous disposez de : " << M << " euros sur votre compte." << endl;

    cout << "Quel montant bimensuel souhaitez-vous déposer? : ";
    do
    {
        cout << "Déposez au moins 150 euros!" << " Quel montant ? : ";
        cin >> m;
    } while (m < 150);
    cout << "Votre déposez : " << m << " euros tous les 2 mois.";

   do
    {
        cout << "------------------------------" << endl;
        M = M + m;
        cout << "Rapport bimensuel NO : " << i/2 << endl;

        if ((i%6) == 0)
        {
            cout << "Vos interets vous ont rapporte : " << tauxSemestriel * M << " euros." << endl;
            M = (1 + tauxSemestriel) * M;
        }
        if ((i%12) == 0)
        {
            if (M > seuil)
            {
                cout << "Vous avez paye une surtaxe de : " << tauxTaxe * M  << " euros." << endl;
                M = (1 - tauxTaxe) * M;
            }
            M = M - fraisGestion;
            cout << "Frais de gestion annuels : " << fraisGestion << endl;
        }
        cout <<"Vous avez : " << M << "euros." << endl;

        i = i+2;
    }while ((i == 48) || (M <= plafond));

    return 0;
}
