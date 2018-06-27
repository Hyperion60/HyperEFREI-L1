#include <iostream>

using namespace std;

// entête (déclaration prototype) de la fonction échange
void echange3entiers(long * a, long * b, long * c);

int main()
{
    long a, b,c;

    a = 5; // original
    b = 2; // original
    c = 7;
    cout << "adresses : a = " << &a << " b = " << &b << " c = " << &c << endl;
    cout << "Dans la fonction main avant les echanges" << endl;
    cout << " a = " << a << " b = " << b << " c = " << c << endl;
    echange3entiers(&a, &b, &c);
    cout << "Dans la fonction main apres l'appel echange(&a, &b, &c))";
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
}

// définition de la fonction échange
// les pointeurs x, y et z sont des copies de &a, &b et &c
void echange3entiers(long * x, long * y, long * z)
{
    cout << "parametres de la fonction echange : x = " << x << " y = " << y << " z = " << z << endl;
    long temp;
    temp = *x;
    *x = *y;  	// modifier l'original
    *y = *z;    // modifier l'original
    *z = temp;  // modifier l'original

    cout << "Dans la fonction echange apres echange: *x = " << *x << " *y = " << *y << " *z = " << *z << endl;
}


