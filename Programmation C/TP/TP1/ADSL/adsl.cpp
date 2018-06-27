#include <iostream>
using namespace std;
int main()
{
    int nra, cmodem, cheure;
    double modem, heure, debit;
    do
    {
    cout << "Quelle heure est-il ?" << endl << endl;
    cout << " 1 : 08h01 - 20h59" << endl;
    cout << " 2 : 21h00 - 01h30" << endl;
    cout << " 3 : 01h31 - 08h00" << endl << endl;
    cin >> cheure;
    cout << endl << endl;
    } while (cheure > 4 || cheure < 1);
    switch (cheure)
    {
        case 1 : heure = 0.23; break;
        case 2 : heure = 0.4; break;
        case 3 : heure = 0.12; break;
    }
    do
    {
        cout << "Quelle est votre Modem ?" << endl << endl;
        cout << " 1 : Terminator Yf32" << endl;
        cout << " 2 : PacMac 002 Yf32" << endl;
        cout << " 3 : xDSL Monster 3.38" << endl << endl;
        cin >> cmodem;
        cout << endl << endl;
    } while (cmodem > 4 || cmodem < 1);

    switch (cmodem)
    {
        case 1 : modem = 4.32; break;
        case 2 : modem = 1.7; break;
        case 3 : modem = 5.2; break;
        break;
    }
    do
    {
        cout << "Quel est votre NRA ?" << endl << endl;
        cout << " 1 : GOB75" << endl;
        cout << " 2 : CHO94" << endl << endl;
        cin >> nra;
        cout << endl << endl;
    } while (nra > 3 || nra < 1);
    switch (nra)
    {
        case 1 : nra = 5; break;
        case 2 : nra = 4;break;
    }
    if (modem == 3)
    {
        debit = modem * (1 - heure);
        cout << "Le debit estime est de " << debit << endl;
    }
    else if (nra == 2 && modem == 1)
    {
        debit = modem * (1 - heure);
        cout << "Le debit estime est de " << debit << endl;
    }
    else
    {
        debit = nra * (1 - heure);
        cout << "Le debit estime est de " << debit << "MB/s" << endl << endl;
    }
}
