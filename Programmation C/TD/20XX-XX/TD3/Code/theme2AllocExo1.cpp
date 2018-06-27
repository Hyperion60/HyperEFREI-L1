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
        cout << "Echec de l'allocation dynamique de mémoire" << endl;
        return 0;
    }

    cout << "La taille maximale du tableau est " << n << endl;
    cout << "La taille utile est inférieure ou égale à la taille maximale." << endl;

    return 0;
}





