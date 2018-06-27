#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main()
{
    fstream fichier_adherent("adherent.csv", ios::in | ios::out | ios::ate);
    string test;
    string recherche;
    string ligne;
    int i = 0;

    cout << "\n\nEntrez le nom : ";
    getline(cin, recherche);
    string ligne_entiere;
    int cpt = 0;
    int taille = 0;

    fichier_adherent.seekp(0,ios::beg);

    while(!fichier_adherent.eof())
    {
        getline(fichier_adherent,ligne);

        if (ligne.find(recherche) != std::string::npos)
        {
            cpt++;
            cout << recherche;
            taille = ligne.size() + 2*(recherche.size()) + 2;
            cout << taille;
            system("pause");
            fichier_adherent.seekp(- taille, ios::cur);
            ligne_entiere = ligne;
            fichier_adherent << fichier_adherent << ";" << fichier_adherent << ";" << fichier_adherent << ";" << fichier_adherent << ";" << fichier_adherent << ";";
            fichier_adherent <<"ROM-001" << ";" << "29/05/14";
            cout << "\n\nL'adherent fait partie de cette bibliotheque.\n\n\n";
            i =1;
            system("pause");
            break;
        }
    }
    if (i == 0)
    {
        cout << "\n\nAucun adherent de cette bibliotheque ne correspond a votre recherche\n\n\n";

    }
    cout << endl;

     std::cout <<"Il se trouve a la ligne :" << ligne_entiere << std::endl;

    return 0;
}
