#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
// IDENTIFIANTS
//  int 1_entier; invalid suffix "_entier" on integer constant
//  int un-entier; error: expected initializer before '-' token|
    int un_entier;
    int x_435;
    int X435;
//  int a'; error : missing terminating ' character
//  int 6o6on; error: invalid suffix "o6on" on integer constant
    int identificateur_de_variable;
    int CoMPTeuR;

// VARIABLES ET INITIALISATIONS
    long a, b, compteur, limite;
    double x, deriv, vitesse;
    char lettre, let2;

    a = -14;
    printf("%ld \t %ld \t %ld \t %ld \t %g \t %g \t %g \t %c \t %c \n",
           a, b, compteur, limite, x, deriv, vitesse, lettre, let2);
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;
    lettre = 'a'+a;
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;
    b = 3-a;
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;
    compteur = 0;
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;
    limite = b+b;
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;
    b = b-1;
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;
    x = 6.022E+23;
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;
    vitesse = x * 1.0E-17;
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;
    deriv = vitesse*(b-a);
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;
    compteur = compteur % limite;
    cout << a << '\t' << b << '\t' << compteur << '\t' << limite << '\t' << x << '\t' << deriv << '\t'
         << vitesse << '\t' << lettre << '\t' << let2 << endl;

// VARIABLES ET TYPES
    long   val_1, val_2;
    double  x_1, x_2, y_1;

    val_1 = 11;
    cout << val_1 << '\t' << val_2 << '\t' << x_1 << '\t' << x_2 << '\t' << y_1 << endl;
    x_1 = 4.0E+2;
    cout << val_1 << '\t' << val_2 << '\t' << x_1 << '\t' << x_2 << '\t' << y_1 << endl;
    val_2 = val_1 - 6;
    cout << val_1 << '\t' << val_2 << '\t' << x_1 << '\t' << x_2 << '\t' << y_1 << endl;
    y_1 = 3 * x_1 - 200.0;
    cout << val_1 << '\t' << val_2 << '\t' << x_1 << '\t' << x_2 << '\t' << y_1 << endl;
    x_2 = val_1 * val_2;
    cout << val_1 << '\t' << val_2 << '\t' << x_1 << '\t' << x_2 << '\t' << y_1 << endl;
    x_1 = val_1 / val_2;
    cout << val_1 << '\t' << val_2 << '\t' << x_1 << '\t' << x_2 << '\t' << y_1 << endl;
    y_1 = x_2 - val_1;
    cout << val_1 << '\t' << val_2 << '\t' << x_1 << '\t' << x_2 << '\t' << y_1 << endl;
    x_2 = val_2 / val_1;
    cout << val_1 << '\t' << val_2 << '\t' << x_1 << '\t' << x_2 << '\t' << y_1 << endl;
    val_2 = x_1;
    cout << val_1 << '\t' << val_2 << '\t' << x_1 << '\t' << x_2 << '\t' << y_1 << endl;

// CALCULS SIMPLES
    int d, e, f;
    float moyenne;
    // en C
    printf("Nombre 1: ");
    scanf("%d", &d);
    printf("Nombre 2: ");
    scanf("%d", &e);
    // en C++
    cout << "Nombre 3: ";
    cin >> f;

    moyenne = (d + e + f) /3.0; // pour un calcul en flottant
    printf("moyenne = %.2f \n", moyenne); // en C avec 2 décimales
    cout << "moyenne = " << moyenne << endl;

    float ecart_type;
    ecart_type = sqrt(1/3.0 * ((d-moyenne)*(d-moyenne) + (e-moyenne)*(e-moyenne) + (f-moyenne)*(f-moyenne)));
    cout << "ecart-type = " << ecart_type << endl;

    int heures1, heures2, minutes1, minutes2, secondes1, secondes2;
    long totalSecondes1, totalSecondes2, difference;
    cout << "premiere date" << endl;
    cout << "heures: "; cin >> heures1;
    cout << "minutes: "; cin >> minutes1;
    cout << "secondes: "; cin >> secondes1;
    cout << "seconde date" << endl;
    cout << "heures: "; cin >> heures2;
    cout << "minutes: "; cin >> minutes2;
    cout << "secondes: "; cin >> secondes2;

    totalSecondes1 = 3600 * heures1 + 60 * minutes1 + secondes1;
    totalSecondes2 = 3600 * heures2 + 60 * minutes2 + secondes2;
    difference = fabs(totalSecondes1 - totalSecondes2);
    cout << "il y a " << difference << " secondes d'ecart entre les 2 dates" << endl;

    float capital, tauxSemestriel = 2.43;
    float capital6mois, capital12mois, capital18mois, capital30mois;
    cout << "capital : "; cin >> capital;
    capital6mois = (1 + tauxSemestriel/100) * capital;
    capital12mois = (1 + tauxSemestriel/100) * (1 + tauxSemestriel/100) * capital;
    capital18mois = (1 + tauxSemestriel/100)* capital12mois;
    capital30mois = (1 + tauxSemestriel/100) * (1 + tauxSemestriel/100) * capital18mois;
    cout << "capital au bout de 6 mois " << capital6mois << endl;
    cout << "capital au bout de 12 mois " << capital12mois << endl;
    cout << "capital au bout de 18 mois " << capital18mois << endl;
    cout << "capital au bout de 30 mois " << capital30mois << endl;


    return 0;
}


