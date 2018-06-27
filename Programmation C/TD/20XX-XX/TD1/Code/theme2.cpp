#include <stdio.h>
#include <iostream>

using namespace std;

extern void anneeBissextile1();
extern void anneeBissextile2();

int main()
{
// Test simple, si…alors…sinon
    const double borne_basse = -3.2;
    const double borne_haute = 5.56;
    double valeur;
    long test_bas, test_haut;

    printf("saisissez une valeur reelle :");
    scanf("%lf",&valeur);

    test_bas = (valeur < borne_basse);
    test_haut = (valeur > borne_haute);

    if (test_bas == 1)
    {
        printf("la valeur est en dessous de l'intervalle \n");
    }
    else if (test_haut == 1)
    {
        printf("la valeur est au dessus de l'intervalle \n");
    }
    else if ((test_bas == 0) && (test_haut == 0)) // test inutile
    {
        printf("la valeur est dans l'intervalle \n");
    }


    int choix;
    cout << "quelle est l'ancienne monnaie italienne?" << endl;
    cout << "1 La couronne italienne" << endl;
    cout << "2 L'euro" << endl;
    cout << "3 La Lire" << endl;
    cout << "4 La Livre" << endl;
    cout << "votre numero choisi: "; cin >> choix;
    if (choix == 3)
        cout << "Bonne reponse!" << endl;
    else
        cout << "Mauvaise reponse" << endl;

// Test if…else if…else
    int annee;
    cout << "annee: ";
    cin >> annee;

    // pour 2000 le test (annee%4) == 0 est évalué 2 fois
    // Manque d'optimisation!
    if (((annee%4) == 0) && ((annee%100) != 0))
        cout << annee << " est une annee bissextile" << endl;
    else if (((annee%4) == 0) && ((annee%400) == 0))
        cout << annee << " est une annee bissextile" << endl;
    else
        cout << annee << " n'est pas une annee bissextile" << endl;

    // meilleure programmation
    if ((annee%4) == 0)
    {
        if (((annee%100) != 0) || ((annee%400) == 0))
            cout << annee << " est une annee bissextile" << endl;
        else
            cout << annee << " n'est pas une annee bissextile" << endl;
    }
    else
        cout << annee << " n'est pas une annee bissextile" << endl;

    // meilleur style
    if ((annee%4) != 0)
          cout << annee << " n'est pas une annee bissextile" << endl;
    else if (((annee%100) != 0) || ((annee%400) == 0))
        cout << annee << " est une annee bissextile" << endl;
    else
        cout << annee << " n'est pas une annee bissextile" << endl;

    // en une seule ligne
    anneeBissextile1();
    anneeBissextile2();

    float poids, taille, coefficient;
    int age;

    cout << "poids en kg: "; cin >> poids;
    cout << "taille en m: "; cin >> taille;
    cout << "age: "; cin >> age;

    coefficient = poids / (taille * taille);

    if ( (age <= 16) && (coefficient > 27.3) )
        cout << "Vous avez moins de 16 ans et vous etes en surpoids" << endl;
    else if ( (age >= 17) && ((age) <= 48) && (coefficient > 23) )
        cout << "Vous avez entre 17 et 48 ans et vous etes en surpoids" << endl;
    else if ( (age >= 49) && (coefficient > 21.5) )
        cout << "Vous avez plus de 48 ans et vous etes en surpoids" << endl;
    else
        cout << "Vous n'etes pas en surpoids pour votre age" << endl;


    int thermostat;
    cout << "thermostat du four: "; cin >> thermostat;
    switch (thermostat)
    {
        case 4: cout << "Le saumon est cuit en 8 minutes" << endl; break;
        case 5: cout << "Les legumes se cuisent en au moins 15 minutes" << endl; break;
        case 7: cout << "Le gigot se cuit en 25 minutes et une tarte cuit en 35 minutes;" << endl; break;
        case 8: cout << "Le poulet se cuit en 40 minutes et le canard en une heure;" << endl; break;
        default: cout << "Aucun plat pour cette valeur du thermostat" << endl; break;
        case 3: cout << "Le cas 3 vient d'être ajouté..." << endl; break;
    }
    return 0;
}

void anneeBissextile1()
{
    int a;
    do
    {
        cout << "annee: ";
        cin >> a;

        if ((((a%4) == 0) && ((a%100) != 0)) || ((a%400) == 0))
            cout << a << " est une annee bissextile" << endl;
        else
            cout << a << " n'est pas une annee bissextile" << endl;
    } while (a > 0);
}

void anneeBissextile2()
{
    int a;
    do
    {
        cout << "annee: ";
        cin >> a;

        if (((a%4) == 0) && (((a%100) != 0) || ((a%400) == 0)))
            cout << a << " est une annee bissextile" << endl;
        else
            cout << a << " n'est pas une annee bissextile" << endl;
    } while (a > 0);
}
