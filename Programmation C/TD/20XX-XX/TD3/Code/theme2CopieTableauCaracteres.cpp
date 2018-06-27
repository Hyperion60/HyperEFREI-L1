#include <iostream>
#include <string.h>
#define TAILLEMAXIMALE 100

using namespace std;

int main()
{
    char source[TAILLEMAXIMALE] ="Copie d'un tableau de 100 caractères au plus";
    char * destination;

    long tailleUtile = strlen(source) + 1;
    destination = new char[tailleUtile];
    if (destination == NULL)
    {
        cout << "problème d'allocatiton dynamique" << endl;
    }
/**
    long i;
    for(i = 0; i < tailleUtile; i++)  // ou source[i] != '\0' comme test d'arrêt
    {
        destination[i] = source[i]; // ou *(dest + i) = *(source + i)
    }
*/
    char * psource, * pdestination;
    for(psource = source, pdestination = destination; *psource != '\0'; psource++, pdestination++)
    {
        *pdestination = *psource;
    }
    cout << "copie du tableau : " << destination << endl;

    return 0;
}


