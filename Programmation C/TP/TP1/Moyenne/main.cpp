#include <iostream>
using namespace std;

int main()
{
	int un;
	int deux;
	int trois;
	int quatre;
    cout << "Saisissez votre premier nombre : ";
	cin >> un;
	cout << "Saisissez votre deuxieme nombre : ";
	cin >> deux;
	cout << "Saisissez votre troisieme nombre : ";
	cin >> trois;
	quatre=(un+deux+trois)/3;
	cout << "La moyenne est : " << quatre << "\n";
	system("pause");
}
