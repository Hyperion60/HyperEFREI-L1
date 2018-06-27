#include <stdio.h>
int main ()

{
    double a,b;
    printf("Veuillez saisir des valeurs de a et de b tel que a<b \n");
    a=1;
    b=0;
    while (a>=b)
    {
         printf("saisir a \n a=");
         scanf("%lf", &a);
         printf("saisir b \n b=");
         scanf("%lf", &b);
         if(a>=b) printf("a doit etre strictement inferieur a b \n");
    }
    printf ("L'intervale saisit est correcte \n");
    system ("pause");
    return 0;
}
