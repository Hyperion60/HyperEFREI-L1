#include <iostream>
#include <float.h>
#include <math.h>

using namespace std;

typedef struct {
    double reel;
    double imaginaire;
} Complexe;

void initialiserComplexe(Complexe * z);
void remplirComplexe(Complexe * z);
void afficherComplexe(const Complexe * z);
int cmpComplexe( const Complexe * z1, const Complexe * z2);
void sommeComplexe( const Complexe * z1, const Complexe * z2, Complexe * z3);
void produitComplexe( const Complexe * z1, const Complexe * z2, Complexe * z3);

void initialiserTabComplexes(Complexe * complexes, int taille);
void remplirTabComplexes(Complexe * complexes, int taille);
void afficherTabComplexes(const Complexe * complexes, int taille);

int main()
{
	Complexe z;
	Complexe z1, z2, z3, z4;
	Complexe complexes[10];

	cout << "Nombre complexe z" << endl;
	initialiserComplexe(&z);
	afficherComplexe(&z);
	remplirComplexe(&z);
	afficherComplexe(&z);

    z1.reel = 3;
    z1.imaginaire = 6;
    z2.reel = 2;
    z2.imaginaire = 4;
    z3.reel = 3;
    z3.imaginaire = 6;
    cout << "egalite z1 et z2 " << cmpComplexe(&z1, &z2) << endl;
    cout << "egalite z1 et z3 " << cmpComplexe(&z1, &z3) << endl;

    cout << " somme de z1 et z2 : " << endl;
    sommeComplexe(&z1, &z2, &z4);
  	afficherComplexe(&z4);

    cout << " produit de z1 et z2 : " << endl;
    produitComplexe(&z1, &z2, &z4);
  	afficherComplexe(&z4);


	cout << "\n\n INITIALISER  TABLEAU DE COMPLEXES" << endl;
	initialiserTabComplexes(complexes,  sizeof(complexes)/sizeof(complexes[0]));

	cout << "\n\n AFICHER TABLEAU DE COMPLEXES" << endl;
	afficherTabComplexes(complexes,  sizeof(complexes)/sizeof(complexes[0]));

	cout << "\n\n REMPLIR UN TABLEAU DE COMPLEXES" << endl;
	remplirTabComplexes(complexes,  sizeof(complexes)/sizeof(complexes[0]));

	cout << "\n\n AFICHER TABLEAU DE COMPLEXES" << endl;
	afficherTabComplexes(complexes,  sizeof(complexes)/sizeof(complexes[0]));

	return 0;
}


void initialiserComplexe(Complexe * z)
{
    z->reel = 0;
    z->imaginaire = 0;
}

void remplirComplexe(Complexe * z)
{
    cout << "partie reelle: "; cin >> z->reel;
    cout << "partie imaginaire: "; cin >> z->imaginaire;
}

void afficherComplexe(const Complexe * z)
{
    cout << "(" << z->reel << ", " << z->imaginaire << ")" << endl;
}

int cmpComplexe( const Complexe * z1, const Complexe * z2)
{
    if (fabs(z1->reel - z2->reel) < DBL_EPSILON  && (fabs(z2->imaginaire - z2->imaginaire) < DBL_EPSILON ))
        return 0;
    return -1;
}

void sommeComplexe( const Complexe * z1, const Complexe * z2, Complexe * z3)
{
    z3->reel =  z1->reel +  z2->reel;
    z3->imaginaire = z1->imaginaire + z2->imaginaire;
}

void produitComplexe( const Complexe * z1, const Complexe * z2, Complexe * z3)
{
    z3->reel =  z1->reel *  z2->reel - z1->imaginaire * z2->imaginaire;
    z3->imaginaire = z1->reel * z2->imaginaire + z2->reel * z1->imaginaire;
}

void initialiserTabComplexes(Complexe * complexes, int taille)
{
     int i;
    for (i = 0; i <taille; i++)
    {
          remplirComplexe(&complexes[i]);
    }
}

void remplirTabComplexes(Complexe * complexes, int taille)
{
     int i;
    for (i = 0; i < taille; i++)
    {
          remplirComplexe(&complexes[i]);
    }
}

void afficherTabComplexes(const Complexe * complexes, int taille)
{
     int i;
    for (i = 0; i < taille; i++)
    {
          afficherComplexe(&complexes[i]);
    }
}
