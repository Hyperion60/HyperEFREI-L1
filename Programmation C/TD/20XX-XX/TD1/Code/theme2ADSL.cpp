/*
* Ecrire un programme qui indique les services disponibles sur une ligne ADSL en fonction de la distance au NRA
* (N�ud de Raccordement Abonn�). Il faut saisir la distance D en m�tre entre l'habitation et le NRA, puis calculer
* l'att�nuation th�orique A (en db) en utilisant la formule : A = D / 68;
* Att�nuation th�orique (en db)           Services ADSL
* A < 37                                  Internet 5 Mb; t�l�phonie IP; TV
* 37 <= A < 56                            Internet 5 Mb; t�l�phonie IP
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
         cout << " Services ADSL: Internet 5 Mb; t�l�phonie IP" << endl;
    else // test inutile car on a n�cessairement attenuation >= 56
         cout << " Services ADSL: Internet 2 Mb" << endl;
    return 0;
}

