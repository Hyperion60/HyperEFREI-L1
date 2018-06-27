/*
* Ecrire un programme qui indique les services disponibles sur une ligne ADSL en fonction de la distance au NRA
* (Nœud de Raccordement Abonné). Il faut saisir la distance D en mètre entre l'habitation et le NRA, puis calculer
* l'atténuation théorique A (en db) en utilisant la formule : A = D / 68;
* Atténuation théorique (en db)           Services ADSL
* A < 37                                  Internet 5 Mb; téléphonie IP; TV
* 37 <= A < 56                            Internet 5 Mb; téléphonie IP
* A >= 56                                 Internet 2 Mb
*/

#include <iostream>

using namespace std;

int main()
{
    const int seuilBas = 37;
    const int seuilHaut = 56;
    const int coeffAttenuation = 68;
    float distance, attenuation;

    cout << "distance en m: "; cin >> distance;

    attenuation = distance/coeffAttenuation;

    if (attenuation < seuilBas)
        cout << " Services ADSL: Internet 5 Mb; telephonie IP; TV" << endl;
    else if ( (attenuation >= seuilBas) && (attenuation < seuilHaut))
         cout << " Services ADSL: Internet 5 Mb; téléphonie IP" << endl;
    else // test inutile car on a nécessairement attenuation >= 56
         cout << " Services ADSL: Internet 2 Mb" << endl;
    return 0;
}

