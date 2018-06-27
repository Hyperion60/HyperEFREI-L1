#include <iostream>

using namespace std;

int main()
{
    long a[9] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    long * p;
    p = a;

    long i;
    cout << "Valeurs des éléments du tableau" << endl;
    for (i = 0; i < 9; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    cout << "Adresses des éléments du tableau" << endl;
    for (i = 0; i < 9; i++)
    {
        cout << &a[i] << ' ';
    }
    cout << endl;

    cout << "*p + 2 vaut : " << *p + 2 << endl;
    cout << "*(p + 2)vaut : " <<  *(p + 2) << endl;
    cout << "&p + 1 vaut : " <<  &p + 1 << endl;
    cout << "&a[4] - 3 aut : " <<  &a[4] - 3 << endl;
    cout << " a + 3 vaut : " <<  a + 3 << endl;
    cout << "&a[7] - p vaut : " <<  &a[7] - p << endl;
    cout << "p + (*p-10) vaut : " <<  p + (*p-10) << endl;
    cout << "*(p + *(p+8) - a[7])vaut : " <<  *(p + *(p+8) - a[7]) << endl;

    return 0;
}
