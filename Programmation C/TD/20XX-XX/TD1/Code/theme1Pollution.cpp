/*
* Ecrire un programme qui fait : la saisie de trois niveaux de pollution, exprim�s en microgrammes par m3
* qui calcule la moyenne de ces valeurs, et indique, � l'aide d'un message, si un seuil de 480 microgrammes par m3
* est d�pass�, auquel cas le niveau est consid�r� comme dangereux. Les donn�es sont des nombres � virgule (type r�el);
*/

#include <iostream>

using namespace std;

int main()
{
    const float seuil = 480;
    float niveau1Pollution,  niveau2Pollution,  niveau3Pollution;
    float moyenne;

    cout << "Niveau 1 de pollution en microgrammes par m3 : "; cin >> niveau1Pollution;
    cout << "Niveau 2 de pollution en microgrammes par m3 : "; cin >> niveau2Pollution;
    cout << "Niveau 3 de pollution en microgrammes par m3 : "; cin >> niveau3Pollution;

    moyenne = (niveau1Pollution + niveau2Pollution + niveau3Pollution) / 3.0;

    if (moyenne > seuil)
        cout << "Niveau dangereux de pollution" << endl;
    else
        cout << "Niveau de pollution en dessous du seuil dangereux" << endl;

    return 0;
}

