#include <iostream>
#define TAILLE_UTILE 9

using namespace std;

#define NMax 10


int main()
{
    long n;
    cout << "taille maximale du tableau : "; cin >> n;

    long * p;
    p = new long[n];
    if (p == NULL)
    {
        cout << "Echec de l'allocation dynamique de m�moire" << endl;
        return 0;
    }

    cout << "La taille maximale du tableau est " << n << endl;
    cout << "La taille utile est inf�rieure ou �gale � la taille maximale." << endl;

    return 0;
}





