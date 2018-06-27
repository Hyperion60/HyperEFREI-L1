#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float nombre;

    do
    {
        cout << "nombre: "; cin >> nombre;
    } while (nombre < 0);

    cout << "La racine carree de " << nombre << " vaut " << sqrt(nombre);
    return 0;
}
