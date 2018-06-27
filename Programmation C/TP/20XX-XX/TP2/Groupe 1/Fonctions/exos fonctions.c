#include <stdio.h>

int lirePositif()
{
    int n;

    do
    {
        scanf("%d", &n);
    }
    while (n < 0);

    return n;
}

int exponentielle(int n, int m)
{
    int i;
    int resultat = 1;

    for (i = 0; i < m; i++)
    {
        resultat *= n;
    }

    return resultat;
}

int pgcd(int n, int m)
{
    int tmp;

    if (n * m == 0)
        return -1;

    if (n < m)
    {
        tmp = n;
        n = m;
        m = tmp;
    }

    while (n%m != 0)
    {
        tmp = n%m;
        n = m;
        m = tmp;
    }

    return m;
}


int ppcm(int n, int m)
{
    if (n * m == 0)
        return -1;

    return (n * m) / pgcd(n,m);
}

int somme(int n, int m)
{
    int resultat = 0;
    int i;

    if (n * m == 0)
        return -1;

    for (i = 1; i <= n; i++)
        resultat += exponentielle(i, m);

    return resultat;
}

int main()
{
    int a, b, resultat;
    char op;

    printf("Entrez une operation sous la forme \"int char int\", ");
    printf("avec E pour exponentielle, P pour PGCD, p pour PPCM et S pour la somme des puissances\n");

    printf("operande 1 : ");
    a = lirePositif();
    printf(" operateur : ");
    scanf(" %c", &op);
    printf("operande 2 : ");
    b = lirePositif();

    switch (op)
    {
    case '+' :
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-' :
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*' :
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/' :
        if (b != 0)
            printf("%d / %d = %d\n", a, b, a / b);
        else
            printf("divison par zero impossible\n");
        break;
    case '%' :
        printf("%d%%d = %d\n", a, b, a%b);
        break;
    case 'E' :
        printf("%d ^ %d = %d\n", a, b, exponentielle(a, b));
        break;
    case 'P' :
        resultat = pgcd(a, b);
        if (resultat == -1)
            printf("Erreur un nombre est nul\n");
        else
            printf("pgcd(%d, %d) = %d\n", a, b, resultat);
        break;
    case 'p' :
        resultat = ppcm(a, b);
        if (resultat == -1)
            printf("Erreur un nombre est nul\n");
        else
            printf("ppcm(%d, %d) = %d\n", a, b, resultat);
        break;
    case 'S' :
        resultat = somme(a, b);
        if (resultat == -1)
            printf("Erreur un nombre est nul\n");
        else
            printf("somme(%d, %d) = %d\n", a, b, resultat);
        break;
    default :
        printf("Operation inconnue\n");
        break;
    }

    return 0;
}
