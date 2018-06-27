#include <iostream>

using namespace std;

int main()
{
    long a,b;
    long * ptr, * qtr;

   cout << "entrez une valeur positive: ";
    cin >> a; // on suppose que la valeur entree est positive
    b = 0;

    cout << "&a vaut " << &a << endl;
    cout << "&b vaut " << &b << endl;
    cout << "&a - &b vaut " << &a - &b << endl; // -1

    ptr = &a;
    qtr = ptr - (&a - &b); // soit qtr = ptr - (-1);
    cout << "ptr vaut " << ptr << endl; // pointe sur a
    cout << "qtr vaut " << qtr << endl; // qtr pointe sur b

    while (*qtr < *ptr)
    {
        *qtr = *qtr +1;
    }

    cout << "et voila, b : " << b << endl;

    return 0;
}
