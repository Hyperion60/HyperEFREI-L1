#include <stdio.h>

int LirePositif();
int LireNonNul();
int Exponentielle(int n, int m);
int Pgcd(int n, int m);
int Ppcm(int n, int m);

void main()
{
    int resultat, n, m;

    printf("Nous allons calculer n^m.\n");

    printf("Veuillez saisir n:.\n");
    scanf("%d", &n);

    // On utilise la saisie sécurisée fournie par LirePositif pour avoir m
    printf("Veuillez saisir m:.\n");
    m = LirePositif();

    resultat = Exponentielle(n, m);

    printf("Le resultat est %d", resultat);

    printf("\n\n Calcul du PGCD:\n");
    printf("Veuillez saisir m:.\n");
    m = LireNonNul();
    printf("Veuillez saisir n:.\n");
    n = LireNonNul();

    resultat = Pgcd(n, m);

    printf("Le resultat est %d", resultat);

    printf("\n\n Calcul du PPCM:\n");
    printf("Veuillez saisir m:.\n");
    m = LireNonNul();
    printf("Veuillez saisir n:.\n");
    n = LireNonNul();

    resultat = Ppcm(n, m);

    printf("Le resultat est %d", resultat);
}
int LirePositif()
{
    int entierPositif;

    do {
        if (entierPositif < 0) {
            printf("Le nombre que vous avez saisi n'est pas un entier positif. Veuillez recommencer...\n");
        }

        printf("Veuillez rentrer un entier positif\n");
        scanf(" %d", &entierPositif);
    } while (entierPositif < 0);

    // On retourne l'entier positif
    return entierPositif;
}

int LireNonNul()
{
    int entierNonNul;

    do {
        if (entierNonNul == 0) {
            printf("Le nombre que vous avez saisi n'est pas nul. Veuillez recommencer...\n");
        }

        printf("Veuillez rentrer un entier non nul\n");
        scanf(" %d", &entierNonNul);
    } while (entierNonNul == 0);

    // On retourne l'entier positif
    return entierNonNul;
}

int Exponentielle(int n, int m)
{
    int i;
    int resultat = 1;

    for (i = 1; i <= m; i++) {
        resultat = resultat*n;
    }

    return resultat;
}

// Méthode d'Euclide récursive
int Pgcd(int n, int m)
{
    // Reste nul: on peut renvoyer le résultat
    if(m == 0) {
        return n;
    }

    // Valeurs absolues
    if (n < 0) {
        n = -n;
    }
    if (m < 0) {
        m = -m;
    }

    // Appel récursif
    return Pgcd(m, n % m);
}

int Ppcm(int n, int m)
{
    int resultat;

    if (n * m == 0)
        return -1;

    resultat = ((n * m) / Pgcd(n,m));

    return resultat;
}
