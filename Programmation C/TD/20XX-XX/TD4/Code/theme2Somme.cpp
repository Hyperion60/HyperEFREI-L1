#include <iostream>

using namespace std;

// ent�te (d�claration prototype) de la fonction somme
long somme (long x, long y);

int main()
{
    // appel de la fonction somme
    cout << "somme : " << somme(7,8) << endl;

    return 0;
}

// d�finition de la fonction somme
long somme (long x, long y)
{
    return x + y;
}


