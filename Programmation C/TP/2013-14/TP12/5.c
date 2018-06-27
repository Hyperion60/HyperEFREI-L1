#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, n, i;
    int A = 0;
    int B = 0;

    printf("entrez a n pour a puissance n : \n");
    scanf("%d %d", &a, &n);

    for(i=1 ; i <= n ; i++){
        A=a*(A+1);
    }

    int R1=A+1;
    printf("a^n = %d\n", R1);



    printf("entrez a n pour a puissance n alternee: \n");
    scanf("%d %d", &a, &n);

    for(i=1 ; i <= n ; i++){
        B=(-a)*(B+1);
    }

    int R2=B+1;
    printf("a^n = %d", R2);

    return 0;
}
