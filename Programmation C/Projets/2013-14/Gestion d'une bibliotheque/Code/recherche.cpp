#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

void recherche_adherent(int choix) /// Si le bibliothecaire cherche un adherent
{
    fstream fichier_adherent("adherent.csv", ios::in | ios::out | ios::ate); /// On trouve le fichier adherent
    FILE* nb_adherent = NULL; /// On trouve le fichier contenant le nombre d'adherent

    nb_adherent = fopen("adherent.txt", "r");

    if (nb_adherent == NULL)
    {
        printf("Impossible de tenir le compte des adherents");
        system("pause");
        return;
    }

    string test;
    string recherche;
    string ligne;
    string ligne_entiere;

    int i = 0;
    int taille = 0;
    int nb_actuel = 0;

    cout << "\n" << "\n" << "Entrez le nom de l'adherent : "; /// On demande à l'utilisateur ce qu'il cherche

    getline(cin, recherche);

    fichier_adherent.seekp(0,ios::beg);

    while(!fichier_adherent.eof()) /// Tant que la boucle n'est pas à la fin du fichier
    {
        getline(fichier_adherent, ligne); /// On récupère la ligne du fichier adherent

        if (ligne.find(recherche) != std::string::npos) /// Si on trouve ce que l'utilisateur cherche à une ligne
        {
            if (choix == 0)
            {
                cout << "\n" << "L'adherent fait partie de cette bibliotheque" << "\n"; /// On l'affiche

                i = 1;

                ligne_entiere = ligne;

                system("pause");

                std::cout <<"Il se trouve a la ligne : " << ligne_entiere << std::endl; /// On affiche l'intégralité des informations de la ligne
            }

            else if (choix == 2)
            {
                cout << "\n" << "Voulez-vous vraiment supprimer l'adherent : ";
                cout << "\n";
                do
                {
                    cout << "(1 = oui)" << "\n" << "(2 = non)" << "\n";
                    cin >> i;
                }
                while (i < 1 || i > 2);

                if (i == 2)
                {
                    return;
                }

                else if (i == 1)
                {
                    taille = ligne.size(); + recherche.size();
                    fichier_adherent.seekp(- taille, ios::cur);
                    fichier_adherent << fichier_adherent << ";" << fichier_adherent << ";" << fichier_adherent << ";" << fichier_adherent << ";" << fichier_adherent << ";";

                    fscanf(nb_adherent, "%d", &nb_actuel);

                    fclose(nb_adherent);

                    nb_adherent = fopen("adherent.txt", "w+");

                    if (nb_adherent == NULL)
                    {
                        printf("Impossible de tenir le compte des adherents");
                        return;
                    }

                    fprintf(nb_adherent, "%d", nb_actuel - 1); /// On note le nombre d'adherent total dans le fichier .txt
                }
            }
        }
    }

    if (i == 0)
    {
        cout << "\n" << "Aucun adherent de cette bibliotheque ne correspond a votre recherche" << "\n"; /// Sinon, on affiche que l'adherent n'appartient pas à la BDD
    }

    cout << endl;

    fclose(nb_adherent);

    system("pause");

    return;
}

void recherche_livre(int choix) /// Si quelqu'un cherche un livre
{
    fstream fichier_livre("livre.csv", ios::in | ios::out | ios::ate); /// On trouve le fichier livre
    FILE* nb_livre = NULL;

    nb_livre = fopen("livre.txt", "r"); /// Ouvre le fichier qui tient le compte du nombre de livres

    if (nb_livre == NULL)
    {
        printf("Impossible de tenir le compte des livres");
        system("pause");
        return;
    }

    string test;
    string recherche;
    string ligne;
    string ligne_entiere;

    int i = 0;
    int taille = 0;
    int nb_actuel = 0;

    cout << "\n" << "\n" << "Entrez le nom du livre, ou son auteur : "; /// On demande à l'utilisateur ce qu'il cherche

    getline(cin, recherche);

    fichier_livre.seekp(0,ios::beg);

    while(!fichier_livre.eof()) /// Tant que la boucle n'est pas à la fin du fichier
    {
        getline(fichier_livre, ligne); /// On récupère la ligne du fichier adherent

        if (ligne.find(recherche) != std::string::npos) /// Si on trouve ce que l'utilisateur cherche à une ligne
        {
            if (choix == 0)
            {
                cout << "\n" << "L'ouvrage fait partie de cette bibliotheque" << "\n"; /// On l'affiche

                i = 1;

                ligne_entiere = ligne;

                system("pause");

                std::cout <<"Il se trouve a la ligne : " << ligne_entiere << std::endl; /// On affiche l'intégralité des informations de la ligne
            }

            else if (choix == 2)
            {
                cout << "\n" << "Voulez-vous vraiment supprimer l'ouvrage : ";
                cout << "\n";
                do
                {
                    cout << "(1 = oui)" << "\n" << "(2 = non)" << "\n";
                    cin >> i;
                }
                while (i < 1 || i > 2);

                if (i == 2)
                {
                    return;
                }

                else if (i == 1)
                {
                    taille = ligne.size() + recherche.size();
                    fichier_livre.seekp(- taille, ios::cur);
                    fichier_livre << fichier_livre << ";" << fichier_livre << ";" << fichier_livre << ";" << fichier_livre << ";" << fichier_livre << ";";

                    fscanf(nb_livre, "%d", &nb_actuel);

                    fclose(nb_livre);

                    nb_livre = fopen("livre.txt", "w+");

                    if (nb_livre == NULL)
                    {
                        printf("Impossible de tenir le compte des livres");
                        return;
                    }

                    fprintf(nb_livre, "%d", nb_actuel - 1); /// On met à jour le fichier .txt
                }
            }
        }
    }

    if (i == 0)
    {
        cout << "\n" << "Aucun ouvrage de cette bibliotheque ne correspond a votre recherche" << "\n"; /// Sinon, on affiche que l'adherent n'appartient pas à la BDD
    }

    cout << endl;

    fclose(nb_livre);

    system("pause");

    return;
}
