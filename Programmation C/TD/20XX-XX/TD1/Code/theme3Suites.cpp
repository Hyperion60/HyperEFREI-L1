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
    int i = 0;
    while (i < rang)
    {
        u = 2 * u - 3; // un+1 = 2 un - 3
        i++;
    }
    cout << "u" << rang << " = " << u << endl;

    float v = 6;
    i = 0;
    while (i < rang)
    {
        v = v/2 - 2.5; // vn+1 = vn/2 – 2.5
        i++;
    }
    cout << "v" << rang << " = " << v << endl;

    float w = 2, x = -1, save;
    i = 0;
    while (i < rang)
    {
        save = w; // sauvegarde de wn
        w = w + x; // wn+1 = wn + xn
        x = x - save; // xn+1 = xn -wn
        i++;
    }
    cout << "w" << rang << " = " << w << endl;
    cout << "x" << rang << " = " << x << endl;


    float y0 = 4, y1 = 2, y;
    i = 1;
    while (i < rang)
    {
        y = y1/y0 + 1;
        y0 = y1;
        y1 = y;
        i++;
    }
    cout << "y" << rang << " = " << y << endl;
    return 0;
}
