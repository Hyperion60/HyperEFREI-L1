
#include <stdio.h>

int LirePositif();
int LireNonNul();
int Exponentielle(int n, int m);
int Pgcd(int n, int m);
int Ppcm(int n, int m);
int Somme(int n, int m);
char poursuivreExecution();

void main()
{
    int resultat, n, m, operande1, operande2;
    char operateur;
    char continuer = 'o';

    printf("Bienvenue dans la calculette.\n");

    do {
        printf("Les operations suivantes sont possibles: .\n");
        printf("Operations de bases: addition, soustraction, multiplication, division.\n");
        printf("Operations avancees: exponentielle (E), PGCD (P), PPCM (p), Somme (S).\n");
        printf("Syntaxe: operateur operande1 operande2.\n");
        scanf(" %c", &operateur);
        scanf(" %d", &operande1);
        scanf(" %d", &operande2);

        switch (operateur) {
            case '+':
                printf("%d %c %d = %d\n", operande1, operateur, operande2, operande1+operande2);
                continuer = poursuivreExecution();
                break;
            case '-':
                printf("%d %c %d = %d\n", operande1, operateur, operande2, operande1-operande2);
                continuer = poursuivreExecution();
                break;
            case '*':
            case 'x':
                printf("%d %c %d = %d\n", operande1, operateur, operande2, operande1*operande2);
                continuer = poursuivreExecution();
                break;
            case '/':
                if (operande2 != 0) {
                    printf("%d %c %d = %d\n", operande1, operateur, operande2, operande1/operande2);
                }
                else {
                    printf("Erreur: division par zero");
                }
                continuer = poursuivreExecution();
                break;
            case '%':
                if (operande2 != 0) {
                    printf("%d %c %d = %d\n", operande1, operateur, operande2, operande1%operande2);
                }
                else {
                    printf("Erreur: division par zero");
                }
                continuer = poursuivreExecution();
                break;
            case 'E':
                printf("%d exponentielle %d = %d\n", operande1, operande2, Exponentielle(operande1, operande2));
                continuer = poursuivreExecution();
                break;
            case 'P':
                printf("%d PGCD %d = %d\n", operande1, operande2, Pgcd(operande1, operande2));
                continuer = poursuivreExecution();
                break;
            case 'p':
                printf("%d PPCM %d = %d\n", operande1, operande2, Ppcm(operande1, operande2));
                continuer = poursuivreExecution();
                break;
            case 'S' :
                printf("%d SOMME %d = %d\n", operande1, operande2, Somme(operande1, operande2));
                continuer = poursuivreExecution();
                break;
             default :
                printf("Votre selection est incorrecte\n");
                continuer = poursuivreExecution();
                break;
        }
    } while (continuer == 'o');
}

char poursuivreExecution() {
    char continuer;

    printf("Voulez-vous continuer ? Tapez 'o' pour oui, 'n' pour non.\n");
    scanf(" %c", &continuer);

    return continuer;
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

    if (m < 0) {
        printf("Erreur: %d est inferieur a zero", m);
        return;
    }

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

    if (n == 0) {
        printf("Erreur: %d est egal a zero", n);
        return;
    }

    if (n * m == 0)
        return -1;

    resultat = ((n * m) / Pgcd(n,m));

    return resultat;
}

int Somme(int n, int m)
{
    int resultat = 0;
    int i;

    if (n == 0 || m == 0) {
        printf("Erreur: un des nombres est nul\n");
        return;
    }

    for (i = 1; i <= n; i++) {
        resultat = resultat+Exponentielle(i, m);
    }

    return resultat;
}
