#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, b, c, delta, x1, x2;
	cout << "Dans votre equation : ax^(2) + Bx + C = O, donnez la valeur de :" << endl;
	cout << " A : ";
	cin >> a;
	cout << " B : ";
	cin >> b;
	cout << " C : ";
	cin >> c;
	delta = (b*b)-(4*a*c);
	if (delta < 0)
    {
        cout << "Aucune solution possible" << endl << endl;
    }
    else if (delta == 0)
    {
        cout << "Delta : 0" << "Une solution possible : " << endl << endl;
        x1 = -b/(2*a);
        cout << x1;
    }
    else
    {
        cout << "Delta : " <<  delta << endl;
        x1 = ((-b+(sqrt(delta)))/(2*a));
        x2 = ((-b-(sqrt(delta)))/(2*a));
        cout << "X1 : " << x1 << endl;
        cout << "X2 : " << x2 << endl;
    }
}
