#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

void recherche_adherent()
{
    ifstream fichier("adherent.csv");

    string test;
    string recherche;
    string ligne;

    int i = 0;

    cout << "\n\nEntrez un nom, un prenom, un mail, une adresse ou une profession : ";
    getline(cin, recherche);
    string ligne_entiere;

    while(!fichier.eof())
    {
        getline(fichier,ligne);

        if (ligne.find(recherche) != std::string::npos)
        {
            cout << "\n\nL'adherent fait partie de cette bibliotheque.\n\n\n";
            i =1;
            ligne_entiere = ligne;
        }
    }
    if (i == 0)
    {
        cout << "\n\nAucun adherent de cette bibliotheque ne correspond a votre recherche\n\n\n";

    }
    cout << endl;

     std::cout <<" Il se trouve a la ligne :" << ligne_entiere << std::endl;

     cout << index << endl;
    return;
}

void recherche_livre()
{
    return;
}
