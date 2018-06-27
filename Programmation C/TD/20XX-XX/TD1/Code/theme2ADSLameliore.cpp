/*
* On veut maintenant améliorer le programme concernant les services ADSL en proposant à l'abonné de choisir
* les services qu'il veut parmi ceux qui sont disponibles en considérant que son atténuation lui permet d'accéder
* à tous les services (cas où A <37).
* L'internet 5 Mb vaut 19,99 €/mois, la TV 4,99 € par mois, la téléphonie IP 6 € / mois.
* Ecrire un programme qui permet de choisir parmi les options disponibles et qui indique le montant à payer par mois.
*/

#include <iostream>

using namespace std;

int main()
{
    int choix;

    cout << "CHOIX DES SERVICES" << endl;
    cout << " 1 Services ADSL: Internet 5 Mb; telephonie IP; TV" << endl;
    cout << " 2 Services ADSL: Internet 5 Mb; telephonie IP" << endl;
    cout << " 3 Services ADSL: Internet 2 Mb" << endl;
    cout << "votre choix: "; cin >> choix;

    switch(choix)
    {
        case 1: cout << "Tarif: " << (19.99 + 6 + 4.99)  << " euros/mois" << endl; break;
        case 2: cout << "Tarif: " << (19.99 + 6) << " euros/mois" << endl; break;
        case 3: cout << "Tarif: " << 19.99 << " euros/mois" << endl; break;
        default: cout << "choix invalide" << endl; break;
    }
    return 0;
}


