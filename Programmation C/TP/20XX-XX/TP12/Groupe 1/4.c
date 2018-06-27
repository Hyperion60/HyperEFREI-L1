#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n, i;
    int A = 1;

    printf("Entrez a n pour a puissance n : ");
    scanf("%d %d", &a, &n);

    for(i=1 ; i <= n ; i++){
        A=a*A;
    }

    printf("a^n = %d", A);

    return 0;
}

