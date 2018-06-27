#include <iostream>
using namespace std;

int main()
{
	int un, deux, trois, moyenne, variance;
    cout << "Saisissez votre premier nombre : ";
	cin >> un;
	cout << "Saisissez votre deuxieme nombre : ";
	cin >> deux;
	cout << "Saisissez votre troisieme nombre : ";
	cin >> trois;
	moyenne=(un+deux+trois)/3;
	variance= (1/3)*((un-moyenne)+(deux-moyenne)+(trois-moyenne))^2;
	cout << "La variance est : " << variance << endl;
	system("pause");
}
