#include <iostream>
using namespace std;

int main()
{
    int bg;
    cout << "Qui est le plus beau ?" << endl;
    cout << "1 : Abel" << endl;
    cout << "2 : Antoine" << endl;
    cout << "3 : Benjamin" << endl;
    cout << "4 : Martin" << endl;
	cin >> bg;
	if (bg != 1)
    {
        cout << endl << "Et bien, on pourrait le croire, mais non." << endl;
    }
    else
    {
        cout << endl << "Absolument. On est sur la meme longueure d'onde !" << endl;
    }
}
