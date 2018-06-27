#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    double * p_a, * p_b;

    a = 0.001;
    b = 0.003;

    p_a  = &a;
    *p_a = *p_a * 2.0;
    p_b  = &b;
    c    = 3.0 * (*p_b - *p_a);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}
