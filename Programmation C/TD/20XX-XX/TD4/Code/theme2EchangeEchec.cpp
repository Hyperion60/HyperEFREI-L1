#include <iostream>

using namespace std;

// ent�te (d�claration prototype) de la fonction �change
void echange(long a, long b);

int main()
{
    long a,b;

    a = 5;
    b = 2;
    cout << "Dans la fontion main avant les echanges : a = " << a << " b = " << b << endl;;
    echange(b,a);
    cout << "Dans la fontion main apres l'appel echange(b,a) : a = " << a << " b = " << b << endl;;
    echange(a,b);
    cout << "Dans la fontion main apres l'appel echange(a,b) : a = " << a << " b = " << b << endl;;
}

// d�finition de la fonction �change
void echange(long a, long b)
{
    cout << "parametres de la fontion echange : a = " << a << " b = " << b << endl;;
    long temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Dans la fontion echange apres echange: a = " << a << " b = " << b << endl;;
}
