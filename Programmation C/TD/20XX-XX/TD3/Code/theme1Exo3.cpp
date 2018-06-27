#include <iostream>

using namespace std;

int main()
{
    double val_a, val_b, val_c;
    double * pdoub;
    double *qdoub;

    val_a = 0.0;
    val_b = 3.1415;
    val_c = 1.E-50;

    cout << "&val_a vaut " << &val_a << endl;
    cout << "&val_b vaut " << &val_b << endl;
    cout << "&val_c vaut " << &val_c << endl; // -1

    qdoub = &val_b;
    pdoub = qdoub;

    pdoub = pdoub-1;

    cout << "pdoub vaut " << pdoub << endl;
    cout << "qdoub vaut " << qdoub << endl;

    cout << "qdoub-pdoub vaut " << qdoub-pdoub << endl;

    qdoub = qdoub+1;

    cout << "*qdoub vaut " << *qdoub << endl;

    *qdoub =val_a;

    *pdoub = (*pdoub)+1;

    cout << "qdoub-pdoub vaut " << qdoub-pdoub << endl;
    cout << "*pdoub vaut " << *pdoub << endl;

    *qdoub = *pdoub;
    pdoub = pdoub+1;

    cout << "qdoub-pdoub vaut " << qdoub-pdoub << endl;
    cout << "*pdoub vaut " << *pdoub << endl;
    cout << "*qdoub vaut " << *qdoub << endl;

    return 0;
}
