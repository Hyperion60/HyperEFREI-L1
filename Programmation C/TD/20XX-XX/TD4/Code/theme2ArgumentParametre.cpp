#include <iostream>

using namespace std;

// entête (déclaration prototype) des fonctions
long gilb1(long g1, long g2);
double gilb2(double g1, char g3);


int main()
{
    long g1, g2, gcpt;
    double gx;

    cout << "entrez deux entiers : ";
    cin >> g1; // 3
    cin >> g2; // 5

    cout << gilb2(1.34543, 'X') << endl; // 1.34543/1
    cout << gilb2(6.34543, 'X') << endl; // 6.34543/6

    cout << "resultat : " << gilb1(g2 - g1, g1 - g2) << endl; // gilb1(2, -2) retourne 2 + (-2) = 0

    g1 = gilb1(g1, g2); // gilb1(3, 5) retourne 8
    cout << "resultat : " << g1 << endl;

    // gilb1(8, 5) retourne 8 + 5 = 13
    // gilb1(13, 5) retourne 13 + 5 = 18
    cout << "resultat : " << gilb1(gilb1(g1, g2), g2) << endl;

    cout << "entrez le nombre de points : ";
    cin >> g1; // 10

    gx = 0.0;

    for (gcpt = 0; gcpt <= g1; gcpt++)
    {
        // 5.0/10= 0.5
        gx = 1.0 + gcpt * (5.0/g1); // 1.0, 1.5, 2.0, 2.5, .... 6
        cout << gx << "\t" << gilb2(gx, '#') << endl; //
    }

    return 0;
}

// retourne g1 + g2, g1 et g2 ne sont pas modifiés
long gilb1(long g1, long g2)
{
    long gtemp;

    gtemp = g1 + g2;
    g2 = gtemp - g2;
    g1 = g1 - gtemp + g1;
    g2 = g1 - g2;

    return (gtemp);
}

// retourne g1 / [g1]
double gilb2(double g1, char g3)
{
    long gtemp;

    gtemp = g1; // troncature , partie entière de g1

    return(g1/gtemp);
}
