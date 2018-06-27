/*
* Enfin, le FAI (Fournisseur d'Accès Internet) propose les remises suivantes :
* 5% de remise pour un engagement de 12 mois, 12 % pour un engagement de 24 mois.
* Modifiez le programme pour que l'utilisateur saisisse le nombre de mois d'engagement,
* le programme indiquera : le montant de chaque mensualité, et le montant total sur toute la durée de l'engagement.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int choixServices, choixEngagement, nombreMois;
    float remise, tarif;

    cout << "CHOIX DES SERVICES" << endl;
    cout << " 1 \t Services ADSL: Internet 5 Mb; telephonie IP; TV" << endl;
    cout << " 2 \t Services ADSL: Internet 5 Mb; telephonie IP" << endl;
    cout << " 3 \t Services ADSL: Internet 2 Mb" << endl;
    cout << "votre choix: "; cin >> choixServices;
    cout << "DUREE D'ENGAGEMENT" << endl;
    cout << " 1 \t 12 mois remise 5%" << endl;
    cout << " 2 \t 24 mois remise 12%"<< endl;
    cout << " 3 \t sans engagement de durée" << endl;
    cout << "votre choix: "; cin >> choixEngagement;

    switch(choixEngagement)
    {
        case 1: nombreMois = 12; remise = 0.05; break;
        case 2: nombreMois = 24; remise = 0.12; break;
        case 3: nombreMois = 1; remise = 0.0; break;
        default: cout << "choix invalide" << endl; return 0;
    }

    switch(choixServices)
    {
        case 1: tarif = (1-remise) * (19.99 + 6 + 4.99);
                cout << fixed << setprecision(2) << "Tarif: " << tarif << " euros/mois" << endl;
                cout << "Tarif sur " << nombreMois << " mois: " << nombreMois * tarif << " euros/mois" << endl;; break;
        case 2: tarif = (1-remise) * (19.99 + 6);
                cout << "Tarif: " << tarif << " euros/mois" << endl;
                cout << "Tarif sur " << nombreMois << " mois: " << nombreMois * tarif << " euros/mois" << endl;; break;
        case 3: tarif = (1-remise) * 19.99;
                cout << "Tarif: " << tarif << " euros/mois" << endl; break;
        default: cout << "choix invalide" << endl; break;
    }
    return 0;
}


