#include <iostream>
using namespace std;

int main()
{
	double capital, s1, s2, s3, i;
	i=0;
	cout << "Saisissez le capital initial : ";
	cin >> capital;
	for(i;i<6;i++)
    {
        capital = capital*1.0243;
    }
    cout << "Le capital au bous de 6 mois est : " << capital << endl;
    for(i;i<12;i++)
    {
        capital = capital*1.0243;
    }
    cout << "Le capital au bous de 12 mois est : " << capital << endl;

    for(i;i<18;i++)
    {
        capital = capital*1.0243;
    }
    cout << "Le capital au bous de 18 mois est : " << capital << endl;
    for(i;i<30;i++)
    {
        capital = capital*1.0243;
    }
    cout << "Le capital au bous de 30 mois est : " << capital << endl;
}
