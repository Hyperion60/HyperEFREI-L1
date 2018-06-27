#include <iostream>

using namespace std;

// entête (déclaration prototype) de la fonction afficher
void afficher (long n);

int main()
{
    // appel de la fonction afficher
    cout << "afficher 0 euro: ";
    afficher(0);
    cout << "afficher 1 euro: ";
    afficher(1);
    cout << "afficher 8 euros: ";
    afficher(8);

    return 0;
}

// définition de la fonction afficher
void afficher (long n)
{
    if(n < 0)
        return; // rien à faire, on sort de la fonction sans retourner de valeur

    switch(n)
    {
    case 0:
        cout << "Vous n'avez pas gagné à notre jeu" << endl;
        break;
    case 1:
        cout << "Vous avez gagné 1 euro" << endl;
        break;
    default:
        cout << "Vous avez gagné " << n << " euros" << endl;
        break;
    }
}
