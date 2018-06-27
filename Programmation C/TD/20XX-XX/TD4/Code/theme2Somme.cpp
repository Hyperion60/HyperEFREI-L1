#include <iostream>

using namespace std;

// entête (déclaration prototype) de la fonction somme
long somme (long x, long y);

int main()
{
    // appel de la fonction somme
    cout << "somme : " << somme(7,8) << endl;

    return 0;
}

// définition de la fonction somme
long somme (long x, long y)
{
    return x + y;
}


