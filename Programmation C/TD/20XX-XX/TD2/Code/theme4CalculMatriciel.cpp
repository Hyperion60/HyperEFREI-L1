#include <iostream>
#include <stdlib.h>     // srand, rand
#include <time.h>       // time

using namespace std;

int main()
{
    double matrice[10][10]; // matrice carrée

    srand(time(NULL)); // initialisation de l'aléatoire
    // initialisation de la matrice carrée
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matrice[i][j] = rand() % 100; // coefficients < 100
        }
    }

    // affichage de la matrice carrée
    cout << "MATRICE CARRE" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matrice[i][j] << '\t'; // affichage de la ligne i
        }
        cout << endl; // passage à la ligne i+1
    }

    // calcul de la trace d'une matrice carrée
    long trace = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                  trace += matrice[i][j];
            }
        }
    }

    cout << "trace = " << trace << endl << endl;

    double A[10][5];
    double B[5][8];
    double P[10][8];

    // initialisation de la matrice A
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            A[i][j] = rand() % 100; // coefficients < 100
        }
    }

    // initialisation de la matrice B
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            B[i][j] = rand() % 100; // coefficients < 100
        }
    }

    // initialisation de la matrice produit
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            P[i][j] = 0;
        }
    }

    // calcul du produit matriciel
    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 8; k++)
        {
            for (int j = 0; j < 5; j++)
            {
                P[i][k] += A[i][j] * B[j][k];
            }
        }
    }

    // affichage de la matrice produit
    cout << "MATRICE PRODUIT" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << P[i][j] << '\t'; // affichage de la ligne i
        }
        cout << endl << endl; // passage à la ligne i+1
    }

    return 0;
}


