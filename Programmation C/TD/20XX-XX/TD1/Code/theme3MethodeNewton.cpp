#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x;
    cout << "RACINE CARREE D'UN NOMBRE POSITIF" << endl;
    do
    {
        cout << "nombre: "; cin >> x;
    } while (x <= 0);

    double u = x;
    do
    {
        u = u/2 + x/(2 * u);
        cout << "u = " << u << endl;
    } while ( fabs(u*u-x) > 1E-8);
    cout << "La racine carree a E-8 pres de " << x << " est " << u << endl;

    return 0;
}
