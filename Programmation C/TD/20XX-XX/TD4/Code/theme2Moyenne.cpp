#include <iostream>
#include <iomanip>
using namespace std;

// entête (déclaration prototype) de la fonction moyenne
double moyenne (long x, long y);

int main()
{
    cout << fixed << setprecision(2);

    // appel de la fonction moyenne
    cout << "moyenne : " << moyenne(7,8) << endl;

    return 0;
}

// définition de la fonction moyenne
double moyenne (long x, long y)
{
    return (x + y)/2.0;
}
