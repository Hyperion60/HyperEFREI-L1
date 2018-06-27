#include <iostream>

using namespace std;

int main()
{
    double borneInf, borneSup, pas;
    long a;

    cout << "borne inferieure "; cin >> borneInf;

    do
    {
        cout << "borne superieure ";
        cin >> borneSup;
    }
    while(borneSup <= borneInf);


    cout << "nombre: "; cin >> a;


    pas = (borneSup - borneInf) / a;

    double i; // ATTENTION le compteur n'est pas un entier
    for ( i = borneInf; i <= borneSup; i = i + pas)
    {
        cout << i << endl;
    }

    return 0;
}
