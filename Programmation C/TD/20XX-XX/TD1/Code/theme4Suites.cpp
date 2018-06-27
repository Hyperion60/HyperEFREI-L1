#include <iostream>

using namespace std;

int main()
{
    int rang;

    do
    {
        cout << "rang des suites: "; cin >> rang;
    } while (rang < 0);

    float u = 4.5;
    int i;
    for (i = 0; i < rang; i++)
    {
        u = 2 * u - 3;
    }
    cout << "u" << rang << " = " << u << endl;

    float v = 6;
    for (i = 0; i < rang; i++)
    {
        v = v/2 - 2.5;
    }
    cout << "v" << rang << " = " << v << endl;

    float w = 2, x = -1, save;
    for (i = 0; i < rang; i++)
    {
        save = w; // sauvegarde de wn
        w = w + x; // wn+1 = wn + xn
        x = x - save; // xn+1 = xn -wn
    }
    cout << "w" << rang << " = " << w << endl;
    cout << "x" << rang << " = " << x << endl;


    float y0 = 4, y1 = 2, y;
    for (i = 1; i < rang; i++)
    {
        y = y1/y0 + 1;
        y0 = y1;
        y1 = y;
    }
    cout << "y" << rang << " = " << y << endl;
    return 0;
}

