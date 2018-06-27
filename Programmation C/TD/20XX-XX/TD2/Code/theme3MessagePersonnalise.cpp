#include <iostream>
#include <string.h>

#define BUFSIZE 256

using namespace std;

int main()
{
   char nom[64];
   char message[BUFSIZE];

   cout << "nom : "; cin >> nom;

   strcpy(message, "Bienvenue ");
   strcat(message, nom);
   strcat(message, " dans le monde merveilleux des chaines de caracteres");

   cout << "nom : " << nom << endl;
   cout << "message : " << message << endl;

    return 0;
}
