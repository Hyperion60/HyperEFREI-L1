#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n, cpt,fact;
    fact=1;
    printf("Saisir n");
    scanf("%ld",&n);
    for(cpt=1;cpt<(n+1);cpt++)
    {
         fact=fact*cpt;
    }
    printf("fact=%ld", fact);
    system ("pause");
    return 0;
}
