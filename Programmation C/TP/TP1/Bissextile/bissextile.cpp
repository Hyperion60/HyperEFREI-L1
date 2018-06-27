#include <iostream>
using namespace std;

int main()
{
    int an;
    cout << "Quelle est l'annee a etudier ?" << endl << endl;
    cin >> an;
    if (an%4==0 && an%100!=0 || an%400==0)
    {
       cout << "C'est une annee bissextile !" << endl << endl;
    }
    else
    {
        cout << "Ce n'est pas une annee bissextile !" << endl << endl;
    }
}
