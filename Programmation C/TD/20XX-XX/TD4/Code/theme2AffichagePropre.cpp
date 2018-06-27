#include <iostream>

using namespace std;

// ent�te (d�claration prototype) de la fonction afficher
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

// d�finition de la fonction afficher
void afficher (long n)
{
    if(n < 0)
        return; // rien � faire, on sort de la fonction sans retourner de valeur

    switch(n)
    {
    case 0:
        cout << "Vous n'avez pas gagn� � notre jeu" << endl;
        break;
    case 1:
        cout << "Vous avez gagn� 1 euro" << endl;
        break;
    default:
        cout << "Vous avez gagn� " << n << " euros" << endl;
        break;
    }
}
