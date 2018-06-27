#include <iostream>
#include <string.h>

#define BUFSIZE 256

using namespace std;

int main()
{
    char disk[4];
    char dirname[BUFSIZE/2];
    char filename[BUFSIZE/2];
    char pathname[BUFSIZE + 32];

    cout << "disque : ";
    cin >> disk;
    cout << "repertoire terminé par /: ";
    cin >> dirname;
    cout << "nom de fichier : ";
    cin >> filename;

    strcpy(pathname, disk);
    strcat(pathname, dirname);
    strcat(pathname, filename);

    cout << "chemin absolu: " << pathname << endl;

    return 0;
}
